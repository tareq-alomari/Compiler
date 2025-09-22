// Generated from Expr.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ExprLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		PROGRAM=1, CONST=2, TYPE=3, VARIABLE=4, PROCEDURE=5, LIST=6, FROM=7, RECORD=8, 
		BY_VALUE=9, BY_REFERENCE=10, IF=11, THEN=12, ELSE=13, FOR=14, TO=15, STEP=16, 
		WHILE=17, CONTINUE=18, REPEAT=19, UNTIL=20, READ=21, PRINT=22, TRUE=23, 
		FALSE=24, DT_INTEGER=25, DT_REAL=26, DT_LOGICAL=27, DT_CHAR=28, DT_STRING=29, 
		L_PAREN=30, R_PAREN=31, L_SQUARE_BRACKET=32, R_SQUARE_BRACKET=33, L_CURLY_BRACE=34, 
		R_CURLY_BRACE=35, COMMA=36, SEMICOLON=37, COLON=38, DOT=39, EQUALS=40, 
		PLUS=41, MINUS=42, MULT=43, DIV=44, INT_DIV=45, MOD=46, POWER=47, AND=48, 
		OR=49, NOT=50, EQUALS_OP=51, NOT_EQUALS_OP=52, GTE=53, LTE=54, GT=55, 
		LT=56, ID=57, REAL_NUMBER=58, INTEGER=59, STRING_LITERAL=60, CHAR_LITERAL=61, 
		WS=62;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"PROGRAM", "CONST", "TYPE", "VARIABLE", "PROCEDURE", "LIST", "FROM", 
			"RECORD", "BY_VALUE", "BY_REFERENCE", "IF", "THEN", "ELSE", "FOR", "TO", 
			"STEP", "WHILE", "CONTINUE", "REPEAT", "UNTIL", "READ", "PRINT", "TRUE", 
			"FALSE", "DT_INTEGER", "DT_REAL", "DT_LOGICAL", "DT_CHAR", "DT_STRING", 
			"L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_CURLY_BRACE", 
			"R_CURLY_BRACE", "COMMA", "SEMICOLON", "COLON", "DOT", "EQUALS", "PLUS", 
			"MINUS", "MULT", "DIV", "INT_DIV", "MOD", "POWER", "AND", "OR", "NOT", 
			"EQUALS_OP", "NOT_EQUALS_OP", "GTE", "LTE", "GT", "LT", "ID", "REAL_NUMBER", 
			"INTEGER", "STRING_LITERAL", "CHAR_LITERAL", "ARABIC_LETTER", "DIGIT", 
			"WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'\u0628\u0631\u0646\u0627\u0645\u062C'", "'\u062B\u0627\u0628\u062A'", 
			"'\u0646\u0648\u0639'", "'\u0645\u062A\u063A\u064A\u0631'", "'\u0627\u062C\u0631\u0627\u0621'", 
			"'\u0642\u0627\u0626\u0645\u0629'", "'\u0645\u0646'", "'\u0633\u062C\u0644'", 
			"'\u0628\u0627\u0644\u0642\u064A\u0645\u0629'", "'\u0628\u0627\u0644\u0645\u0631\u062C\u0639'", 
			"'\u0627\u0630\u0627'", "'\u0641\u0627\u0646'", "'\u0648\u0627\u0644\u0627'", 
			"'\u0643\u0631\u0631'", "'\u0627\u0644\u0649'", "'\u0627\u0636\u0641'", 
			"'\u0637\u0627\u0644\u0645\u0627'", "'\u0627\u0633\u062A\u0645\u0631'", 
			"'\u0627\u0639\u062F'", "'\u062D\u062A\u0649'", "'\u0627\u0642\u0631\u0627'", 
			"'\u0627\u0637\u0628\u0639'", "'\u0635\u062D'", "'\u062E\u0637\u0623'", 
			"'\u0635\u062D\u064A\u062D'", "'\u062D\u0642\u064A\u0642\u064A'", "'\u0645\u0646\u0637\u0642\u064A'", 
			"'\u062D\u0631\u0641\u064A'", "'\u062E\u064A\u0637_\u0631\u0645\u0632\u064A'", 
			"'('", "')'", "'['", "']'", "'{'", "'}'", "'\u060C'", "'\u061B'", "':'", 
			"'.'", "'='", "'+'", "'-'", "'*'", "'/'", "'\\'", "'%'", "'^'", "'&&'", 
			"'||'", "'!'", "'=='", "'=!'", "'>='", "'<='", "'>'", "'<'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "PROGRAM", "CONST", "TYPE", "VARIABLE", "PROCEDURE", "LIST", "FROM", 
			"RECORD", "BY_VALUE", "BY_REFERENCE", "IF", "THEN", "ELSE", "FOR", "TO", 
			"STEP", "WHILE", "CONTINUE", "REPEAT", "UNTIL", "READ", "PRINT", "TRUE", 
			"FALSE", "DT_INTEGER", "DT_REAL", "DT_LOGICAL", "DT_CHAR", "DT_STRING", 
			"L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "L_CURLY_BRACE", 
			"R_CURLY_BRACE", "COMMA", "SEMICOLON", "COLON", "DOT", "EQUALS", "PLUS", 
			"MINUS", "MULT", "DIV", "INT_DIV", "MOD", "POWER", "AND", "OR", "NOT", 
			"EQUALS_OP", "NOT_EQUALS_OP", "GTE", "LTE", "GT", "LT", "ID", "REAL_NUMBER", 
			"INTEGER", "STRING_LITERAL", "CHAR_LITERAL", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public ExprLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Expr.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2@\u017e\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3"+
		"\3\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\r"+
		"\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\20\3\20\3"+
		"\20\3\20\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3"+
		"\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\26\3\26\3"+
		"\26\3\26\3\26\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31\3"+
		"\31\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3"+
		"\34\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3"+
		"\36\3\36\3\36\3\36\3\37\3\37\3 \3 \3!\3!\3\"\3\"\3#\3#\3$\3$\3%\3%\3&"+
		"\3&\3\'\3\'\3(\3(\3)\3)\3*\3*\3+\3+\3,\3,\3-\3-\3.\3.\3/\3/\3\60\3\60"+
		"\3\61\3\61\3\61\3\62\3\62\3\62\3\63\3\63\3\64\3\64\3\64\3\65\3\65\3\65"+
		"\3\66\3\66\3\66\3\67\3\67\3\67\38\38\39\39\3:\3:\3:\7:\u0159\n:\f:\16"+
		":\u015c\13:\3;\3;\3;\3;\3<\6<\u0163\n<\r<\16<\u0164\3=\3=\7=\u0169\n="+
		"\f=\16=\u016c\13=\3=\3=\3>\3>\3>\3>\3?\3?\3@\3@\3A\6A\u0179\nA\rA\16A"+
		"\u017a\3A\3A\2\2B\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31"+
		"\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65"+
		"\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64"+
		"g\65i\66k\67m8o9q:s;u<w=y>{?}\2\177\2\u0081@\3\2\6\5\2\f\f\17\17$$\3\2"+
		"\u0623\u064c\3\2\62;\5\2\13\f\17\17\"\"\2\u0180\2\3\3\2\2\2\2\5\3\2\2"+
		"\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21"+
		"\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2"+
		"\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3"+
		"\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3"+
		"\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3"+
		"\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2"+
		"\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2"+
		"Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3"+
		"\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2"+
		"\2\2s\3\2\2\2\2u\3\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2{\3\2\2\2\2\u0081\3\2"+
		"\2\2\3\u0083\3\2\2\2\5\u008a\3\2\2\2\7\u008f\3\2\2\2\t\u0093\3\2\2\2\13"+
		"\u0099\3\2\2\2\r\u009f\3\2\2\2\17\u00a5\3\2\2\2\21\u00a8\3\2\2\2\23\u00ac"+
		"\3\2\2\2\25\u00b4\3\2\2\2\27\u00bc\3\2\2\2\31\u00c0\3\2\2\2\33\u00c4\3"+
		"\2\2\2\35\u00c9\3\2\2\2\37\u00cd\3\2\2\2!\u00d1\3\2\2\2#\u00d5\3\2\2\2"+
		"%\u00db\3\2\2\2\'\u00e1\3\2\2\2)\u00e5\3\2\2\2+\u00e9\3\2\2\2-\u00ee\3"+
		"\2\2\2/\u00f3\3\2\2\2\61\u00f6\3\2\2\2\63\u00fa\3\2\2\2\65\u00ff\3\2\2"+
		"\2\67\u0105\3\2\2\29\u010b\3\2\2\2;\u0110\3\2\2\2=\u0119\3\2\2\2?\u011b"+
		"\3\2\2\2A\u011d\3\2\2\2C\u011f\3\2\2\2E\u0121\3\2\2\2G\u0123\3\2\2\2I"+
		"\u0125\3\2\2\2K\u0127\3\2\2\2M\u0129\3\2\2\2O\u012b\3\2\2\2Q\u012d\3\2"+
		"\2\2S\u012f\3\2\2\2U\u0131\3\2\2\2W\u0133\3\2\2\2Y\u0135\3\2\2\2[\u0137"+
		"\3\2\2\2]\u0139\3\2\2\2_\u013b\3\2\2\2a\u013d\3\2\2\2c\u0140\3\2\2\2e"+
		"\u0143\3\2\2\2g\u0145\3\2\2\2i\u0148\3\2\2\2k\u014b\3\2\2\2m\u014e\3\2"+
		"\2\2o\u0151\3\2\2\2q\u0153\3\2\2\2s\u0155\3\2\2\2u\u015d\3\2\2\2w\u0162"+
		"\3\2\2\2y\u0166\3\2\2\2{\u016f\3\2\2\2}\u0173\3\2\2\2\177\u0175\3\2\2"+
		"\2\u0081\u0178\3\2\2\2\u0083\u0084\7\u062a\2\2\u0084\u0085\7\u0633\2\2"+
		"\u0085\u0086\7\u0648\2\2\u0086\u0087\7\u0629\2\2\u0087\u0088\7\u0647\2"+
		"\2\u0088\u0089\7\u062e\2\2\u0089\4\3\2\2\2\u008a\u008b\7\u062d\2\2\u008b"+
		"\u008c\7\u0629\2\2\u008c\u008d\7\u062a\2\2\u008d\u008e\7\u062c\2\2\u008e"+
		"\6\3\2\2\2\u008f\u0090\7\u0648\2\2\u0090\u0091\7\u064a\2\2\u0091\u0092"+
		"\7\u063b\2\2\u0092\b\3\2\2\2\u0093\u0094\7\u0647\2\2\u0094\u0095\7\u062c"+
		"\2\2\u0095\u0096\7\u063c\2\2\u0096\u0097\7\u064c\2\2\u0097\u0098\7\u0633"+
		"\2\2\u0098\n\3\2\2\2\u0099\u009a\7\u0629\2\2\u009a\u009b\7\u062e\2\2\u009b"+
		"\u009c\7\u0633\2\2\u009c\u009d\7\u0629\2\2\u009d\u009e\7\u0623\2\2\u009e"+
		"\f\3\2\2\2\u009f\u00a0\7\u0644\2\2\u00a0\u00a1\7\u0629\2\2\u00a1\u00a2"+
		"\7\u0628\2\2\u00a2\u00a3\7\u0647\2\2\u00a3\u00a4\7\u062b\2\2\u00a4\16"+
		"\3\2\2\2\u00a5\u00a6\7\u0647\2\2\u00a6\u00a7\7\u0648\2\2\u00a7\20\3\2"+
		"\2\2\u00a8\u00a9\7\u0635\2\2\u00a9\u00aa\7\u062e\2\2\u00aa\u00ab\7\u0646"+
		"\2\2\u00ab\22\3\2\2\2\u00ac\u00ad\7\u062a\2\2\u00ad\u00ae\7\u0629\2\2"+
		"\u00ae\u00af\7\u0646\2\2\u00af\u00b0\7\u0644\2\2\u00b0\u00b1\7\u064c\2"+
		"\2\u00b1\u00b2\7\u0647\2\2\u00b2\u00b3\7\u062b\2\2\u00b3\24\3\2\2\2\u00b4"+
		"\u00b5\7\u062a\2\2\u00b5\u00b6\7\u0629\2\2\u00b6\u00b7\7\u0646\2\2\u00b7"+
		"\u00b8\7\u0647\2\2\u00b8\u00b9\7\u0633\2\2\u00b9\u00ba\7\u062e\2\2\u00ba"+
		"\u00bb\7\u063b\2\2\u00bb\26\3\2\2\2\u00bc\u00bd\7\u0629\2\2\u00bd\u00be"+
		"\7\u0632\2\2\u00be\u00bf\7\u0629\2\2\u00bf\30\3\2\2\2\u00c0\u00c1\7\u0643"+
		"\2\2\u00c1\u00c2\7\u0629\2\2\u00c2\u00c3\7\u0648\2\2\u00c3\32\3\2\2\2"+
		"\u00c4\u00c5\7\u064a\2\2\u00c5\u00c6\7\u0629\2\2\u00c6\u00c7\7\u0646\2"+
		"\2\u00c7\u00c8\7\u0629\2\2\u00c8\34\3\2\2\2\u00c9\u00ca\7\u0645\2\2\u00ca"+
		"\u00cb\7\u0633\2\2\u00cb\u00cc\7\u0633\2\2\u00cc\36\3\2\2\2\u00cd\u00ce"+
		"\7\u0629\2\2\u00ce\u00cf\7\u0646\2\2\u00cf\u00d0\7\u064b\2\2\u00d0 \3"+
		"\2\2\2\u00d1\u00d2\7\u0629\2\2\u00d2\u00d3\7\u0638\2\2\u00d3\u00d4\7\u0643"+
		"\2\2\u00d4\"\3\2\2\2\u00d5\u00d6\7\u0639\2\2\u00d6\u00d7\7\u0629\2\2\u00d7"+
		"\u00d8\7\u0646\2\2\u00d8\u00d9\7\u0647\2\2\u00d9\u00da\7\u0629\2\2\u00da"+
		"$\3\2\2\2\u00db\u00dc\7\u0629\2\2\u00dc\u00dd\7\u0635\2\2\u00dd\u00de"+
		"\7\u062c\2\2\u00de\u00df\7\u0647\2\2\u00df\u00e0\7\u0633\2\2\u00e0&\3"+
		"\2\2\2\u00e1\u00e2\7\u0629\2\2\u00e2\u00e3\7\u063b\2\2\u00e3\u00e4\7\u0631"+
		"\2\2\u00e4(\3\2\2\2\u00e5\u00e6\7\u062f\2\2\u00e6\u00e7\7\u062c\2\2\u00e7"+
		"\u00e8\7\u064b\2\2\u00e8*\3\2\2\2\u00e9\u00ea\7\u0629\2\2\u00ea\u00eb"+
		"\7\u0644\2\2\u00eb\u00ec\7\u0633\2\2\u00ec\u00ed\7\u0629\2\2\u00ed,\3"+
		"\2\2\2\u00ee\u00ef\7\u0629\2\2\u00ef\u00f0\7\u0639\2\2\u00f0\u00f1\7\u062a"+
		"\2\2\u00f1\u00f2\7\u063b\2\2\u00f2.\3\2\2\2\u00f3\u00f4\7\u0637\2\2\u00f4"+
		"\u00f5\7\u062f\2\2\u00f5\60\3\2\2\2\u00f6\u00f7\7\u0630\2\2\u00f7\u00f8"+
		"\7\u0639\2\2\u00f8\u00f9\7\u0625\2\2\u00f9\62\3\2\2\2\u00fa\u00fb\7\u0637"+
		"\2\2\u00fb\u00fc\7\u062f\2\2\u00fc\u00fd\7\u064c\2\2\u00fd\u00fe\7\u062f"+
		"\2\2\u00fe\64\3\2\2\2\u00ff\u0100\7\u062f\2\2\u0100\u0101\7\u0644\2\2"+
		"\u0101\u0102\7\u064c\2\2\u0102\u0103\7\u0644\2\2\u0103\u0104\7\u064c\2"+
		"\2\u0104\66\3\2\2\2\u0105\u0106\7\u0647\2\2\u0106\u0107\7\u0648\2\2\u0107"+
		"\u0108\7\u0639\2\2\u0108\u0109\7\u0644\2\2\u0109\u010a\7\u064c\2\2\u010a"+
		"8\3\2\2\2\u010b\u010c\7\u062f\2\2\u010c\u010d\7\u0633\2\2\u010d\u010e"+
		"\7\u0643\2\2\u010e\u010f\7\u064c\2\2\u010f:\3\2\2\2\u0110\u0111\7\u0630"+
		"\2\2\u0111\u0112\7\u064c\2\2\u0112\u0113\7\u0639\2\2\u0113\u0114\7a\2"+
		"\2\u0114\u0115\7\u0633\2\2\u0115\u0116\7\u0647\2\2\u0116\u0117\7\u0634"+
		"\2\2\u0117\u0118\7\u064c\2\2\u0118<\3\2\2\2\u0119\u011a\7*\2\2\u011a>"+
		"\3\2\2\2\u011b\u011c\7+\2\2\u011c@\3\2\2\2\u011d\u011e\7]\2\2\u011eB\3"+
		"\2\2\2\u011f\u0120\7_\2\2\u0120D\3\2\2\2\u0121\u0122\7}\2\2\u0122F\3\2"+
		"\2\2\u0123\u0124\7\177\2\2\u0124H\3\2\2\2\u0125\u0126\7\u060e\2\2\u0126"+
		"J\3\2\2\2\u0127\u0128\7\u061d\2\2\u0128L\3\2\2\2\u0129\u012a\7<\2\2\u012a"+
		"N\3\2\2\2\u012b\u012c\7\60\2\2\u012cP\3\2\2\2\u012d\u012e\7?\2\2\u012e"+
		"R\3\2\2\2\u012f\u0130\7-\2\2\u0130T\3\2\2\2\u0131\u0132\7/\2\2\u0132V"+
		"\3\2\2\2\u0133\u0134\7,\2\2\u0134X\3\2\2\2\u0135\u0136\7\61\2\2\u0136"+
		"Z\3\2\2\2\u0137\u0138\7^\2\2\u0138\\\3\2\2\2\u0139\u013a\7\'\2\2\u013a"+
		"^\3\2\2\2\u013b\u013c\7`\2\2\u013c`\3\2\2\2\u013d\u013e\7(\2\2\u013e\u013f"+
		"\7(\2\2\u013fb\3\2\2\2\u0140\u0141\7~\2\2\u0141\u0142\7~\2\2\u0142d\3"+
		"\2\2\2\u0143\u0144\7#\2\2\u0144f\3\2\2\2\u0145\u0146\7?\2\2\u0146\u0147"+
		"\7?\2\2\u0147h\3\2\2\2\u0148\u0149\7?\2\2\u0149\u014a\7#\2\2\u014aj\3"+
		"\2\2\2\u014b\u014c\7@\2\2\u014c\u014d\7?\2\2\u014dl\3\2\2\2\u014e\u014f"+
		"\7>\2\2\u014f\u0150\7?\2\2\u0150n\3\2\2\2\u0151\u0152\7@\2\2\u0152p\3"+
		"\2\2\2\u0153\u0154\7>\2\2\u0154r\3\2\2\2\u0155\u015a\5}?\2\u0156\u0159"+
		"\5}?\2\u0157\u0159\5\177@\2\u0158\u0156\3\2\2\2\u0158\u0157\3\2\2\2\u0159"+
		"\u015c\3\2\2\2\u015a\u0158\3\2\2\2\u015a\u015b\3\2\2\2\u015bt\3\2\2\2"+
		"\u015c\u015a\3\2\2\2\u015d\u015e\5w<\2\u015e\u015f\7\60\2\2\u015f\u0160"+
		"\5w<\2\u0160v\3\2\2\2\u0161\u0163\5\177@\2\u0162\u0161\3\2\2\2\u0163\u0164"+
		"\3\2\2\2\u0164\u0162\3\2\2\2\u0164\u0165\3\2\2\2\u0165x\3\2\2\2\u0166"+
		"\u016a\7$\2\2\u0167\u0169\n\2\2\2\u0168\u0167\3\2\2\2\u0169\u016c\3\2"+
		"\2\2\u016a\u0168\3\2\2\2\u016a\u016b\3\2\2\2\u016b\u016d\3\2\2\2\u016c"+
		"\u016a\3\2\2\2\u016d\u016e\7$\2\2\u016ez\3\2\2\2\u016f\u0170\7)\2\2\u0170"+
		"\u0171\13\2\2\2\u0171\u0172\7)\2\2\u0172|\3\2\2\2\u0173\u0174\t\3\2\2"+
		"\u0174~\3\2\2\2\u0175\u0176\t\4\2\2\u0176\u0080\3\2\2\2\u0177\u0179\t"+
		"\5\2\2\u0178\u0177\3\2\2\2\u0179\u017a\3\2\2\2\u017a\u0178\3\2\2\2\u017a"+
		"\u017b\3\2\2\2\u017b\u017c\3\2\2\2\u017c\u017d\bA\2\2\u017d\u0082\3\2"+
		"\2\2\b\2\u0158\u015a\u0164\u016a\u017a\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}