module.exports = grammar({
    name: 'repkg',

    extras: $ => [
        $.comment,
        /[\s\p{Zs}\uFEFF\u2060\u200B]/,
    ],

    rules: {
        source_file: $ => $._body,

        _body: $ => seq(
            $._expr,
            repeat($._expr),
        ),
        body: $ => seq(
            $._expr,
            repeat($._expr),
        ),

        _expr: $ => choice(
            seq($.command, $._newline),
            $.namespace,
            $.import_expr,
            $.variable_def,
        ),

        variable_def: $ => seq(
            field('id', $.identifier_without_ver),
            token('='),
            field('val', $._primitive),
        ),

        import_expr: $ => seq(
            'import',
            $._path,
            optional(seq(
                $._dot,
                $.wildcard
            ))
        ),

        namespace: $ => seq(
            field('id', $.identifier),
            $._left_curly_brace,
            field('body', $.body),
            $._right_curly_brace,
        ),

        command: $ => seq(
            field('program', $._path),
            field('args', repeat(
                choice(
                    seq(
                        $._left_parantheses,
                        $.command,
                        $._right_parantheses,
                    ),
                    $.variable,
                    $.primitive,
                )
            )),
        ),

        _path: $ => prec(4, choice(
            $.identifier,
            $.nested_identifier,
        )),

        identifier: $ => prec(2, choice(
            $._identifier_with_ver,
            $._identifier_without_ver,
        )),

        nested_identifier: $ => prec(5, seq(
            field('path', $._path),
            $._dot,
            field('name', $.identifier),
        )),

        variable: $ => prec(2, seq(
            $._percent_sign,
            field('var', choice(seq($._percent_sign, $.number), $.text, $.percent_sign)),
        )),

        identifier_without_ver: $ => $._identifier_without_ver,
        _identifier_without_ver: $ => token(/[-a-z_A-Z]+/),

        _identifier_with_ver: $ => prec.right(seq(
            $._identifier_without_ver,
            '@',
            $._identifier_without_ver,
        )),

        primitive: $ => $._primitive,
        _primitive: $ => choice(
            $.number,
            $.string,
            $.array,
        ),

        text: $ => /[^ \n\r()%][^ \n\r()]*/,

        number: $ => /[0-9]+/,

        string: $ => choice(
            seq(
                $._double_quotation_mark,
                repeat(/[^"]/),
                $._double_quotation_mark,
            ),
            seq(
                $._single_quotation_mark,
                repeat(/[^']/),
                $._single_quotation_mark,
            ),
        ),

        array: $ => seq(
            $._left_square_bracket,
            optional(
                seq(
                    repeat(seq(
                        $._primitive,
                        $._comma,
                    )),
                )
            ),
            $._right_square_bracket,
        ),

        wildcard: $ => token('*'),

        _newline: $ => choice(
            token('\n'),
            token('\r'),
            token('\n\r'),
            token('\0'),
        ),
        _left_square_bracket: $ => token('['),
        _right_square_bracket: $ => token(']'),
        _left_curly_brace: $ => token('{'),
        _right_curly_brace: $ => token('}'),
        _left_parantheses: $ => token('('),
        _right_parantheses: $ => token(')'),
        _comma: $ => token(','),
        _dot: $ => token('.'),
        _single_quotation_mark: $ => token('\''),
        _double_quotation_mark: $ => token('"'),
        _percent_sign: $ => token('%'),
        percent_sign: $ => $._percent_sign,

        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),
    }
});
