#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FBA0
// Address: 0x21fba0 - 0x220160
void sub_0021FBA0_0x21fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FBA0_0x21fba0");
#endif

    switch (ctx->pc) {
        case 0x21fba0u: goto label_21fba0;
        case 0x21fba4u: goto label_21fba4;
        case 0x21fba8u: goto label_21fba8;
        case 0x21fbacu: goto label_21fbac;
        case 0x21fbb0u: goto label_21fbb0;
        case 0x21fbb4u: goto label_21fbb4;
        case 0x21fbb8u: goto label_21fbb8;
        case 0x21fbbcu: goto label_21fbbc;
        case 0x21fbc0u: goto label_21fbc0;
        case 0x21fbc4u: goto label_21fbc4;
        case 0x21fbc8u: goto label_21fbc8;
        case 0x21fbccu: goto label_21fbcc;
        case 0x21fbd0u: goto label_21fbd0;
        case 0x21fbd4u: goto label_21fbd4;
        case 0x21fbd8u: goto label_21fbd8;
        case 0x21fbdcu: goto label_21fbdc;
        case 0x21fbe0u: goto label_21fbe0;
        case 0x21fbe4u: goto label_21fbe4;
        case 0x21fbe8u: goto label_21fbe8;
        case 0x21fbecu: goto label_21fbec;
        case 0x21fbf0u: goto label_21fbf0;
        case 0x21fbf4u: goto label_21fbf4;
        case 0x21fbf8u: goto label_21fbf8;
        case 0x21fbfcu: goto label_21fbfc;
        case 0x21fc00u: goto label_21fc00;
        case 0x21fc04u: goto label_21fc04;
        case 0x21fc08u: goto label_21fc08;
        case 0x21fc0cu: goto label_21fc0c;
        case 0x21fc10u: goto label_21fc10;
        case 0x21fc14u: goto label_21fc14;
        case 0x21fc18u: goto label_21fc18;
        case 0x21fc1cu: goto label_21fc1c;
        case 0x21fc20u: goto label_21fc20;
        case 0x21fc24u: goto label_21fc24;
        case 0x21fc28u: goto label_21fc28;
        case 0x21fc2cu: goto label_21fc2c;
        case 0x21fc30u: goto label_21fc30;
        case 0x21fc34u: goto label_21fc34;
        case 0x21fc38u: goto label_21fc38;
        case 0x21fc3cu: goto label_21fc3c;
        case 0x21fc40u: goto label_21fc40;
        case 0x21fc44u: goto label_21fc44;
        case 0x21fc48u: goto label_21fc48;
        case 0x21fc4cu: goto label_21fc4c;
        case 0x21fc50u: goto label_21fc50;
        case 0x21fc54u: goto label_21fc54;
        case 0x21fc58u: goto label_21fc58;
        case 0x21fc5cu: goto label_21fc5c;
        case 0x21fc60u: goto label_21fc60;
        case 0x21fc64u: goto label_21fc64;
        case 0x21fc68u: goto label_21fc68;
        case 0x21fc6cu: goto label_21fc6c;
        case 0x21fc70u: goto label_21fc70;
        case 0x21fc74u: goto label_21fc74;
        case 0x21fc78u: goto label_21fc78;
        case 0x21fc7cu: goto label_21fc7c;
        case 0x21fc80u: goto label_21fc80;
        case 0x21fc84u: goto label_21fc84;
        case 0x21fc88u: goto label_21fc88;
        case 0x21fc8cu: goto label_21fc8c;
        case 0x21fc90u: goto label_21fc90;
        case 0x21fc94u: goto label_21fc94;
        case 0x21fc98u: goto label_21fc98;
        case 0x21fc9cu: goto label_21fc9c;
        case 0x21fca0u: goto label_21fca0;
        case 0x21fca4u: goto label_21fca4;
        case 0x21fca8u: goto label_21fca8;
        case 0x21fcacu: goto label_21fcac;
        case 0x21fcb0u: goto label_21fcb0;
        case 0x21fcb4u: goto label_21fcb4;
        case 0x21fcb8u: goto label_21fcb8;
        case 0x21fcbcu: goto label_21fcbc;
        case 0x21fcc0u: goto label_21fcc0;
        case 0x21fcc4u: goto label_21fcc4;
        case 0x21fcc8u: goto label_21fcc8;
        case 0x21fcccu: goto label_21fccc;
        case 0x21fcd0u: goto label_21fcd0;
        case 0x21fcd4u: goto label_21fcd4;
        case 0x21fcd8u: goto label_21fcd8;
        case 0x21fcdcu: goto label_21fcdc;
        case 0x21fce0u: goto label_21fce0;
        case 0x21fce4u: goto label_21fce4;
        case 0x21fce8u: goto label_21fce8;
        case 0x21fcecu: goto label_21fcec;
        case 0x21fcf0u: goto label_21fcf0;
        case 0x21fcf4u: goto label_21fcf4;
        case 0x21fcf8u: goto label_21fcf8;
        case 0x21fcfcu: goto label_21fcfc;
        case 0x21fd00u: goto label_21fd00;
        case 0x21fd04u: goto label_21fd04;
        case 0x21fd08u: goto label_21fd08;
        case 0x21fd0cu: goto label_21fd0c;
        case 0x21fd10u: goto label_21fd10;
        case 0x21fd14u: goto label_21fd14;
        case 0x21fd18u: goto label_21fd18;
        case 0x21fd1cu: goto label_21fd1c;
        case 0x21fd20u: goto label_21fd20;
        case 0x21fd24u: goto label_21fd24;
        case 0x21fd28u: goto label_21fd28;
        case 0x21fd2cu: goto label_21fd2c;
        case 0x21fd30u: goto label_21fd30;
        case 0x21fd34u: goto label_21fd34;
        case 0x21fd38u: goto label_21fd38;
        case 0x21fd3cu: goto label_21fd3c;
        case 0x21fd40u: goto label_21fd40;
        case 0x21fd44u: goto label_21fd44;
        case 0x21fd48u: goto label_21fd48;
        case 0x21fd4cu: goto label_21fd4c;
        case 0x21fd50u: goto label_21fd50;
        case 0x21fd54u: goto label_21fd54;
        case 0x21fd58u: goto label_21fd58;
        case 0x21fd5cu: goto label_21fd5c;
        case 0x21fd60u: goto label_21fd60;
        case 0x21fd64u: goto label_21fd64;
        case 0x21fd68u: goto label_21fd68;
        case 0x21fd6cu: goto label_21fd6c;
        case 0x21fd70u: goto label_21fd70;
        case 0x21fd74u: goto label_21fd74;
        case 0x21fd78u: goto label_21fd78;
        case 0x21fd7cu: goto label_21fd7c;
        case 0x21fd80u: goto label_21fd80;
        case 0x21fd84u: goto label_21fd84;
        case 0x21fd88u: goto label_21fd88;
        case 0x21fd8cu: goto label_21fd8c;
        case 0x21fd90u: goto label_21fd90;
        case 0x21fd94u: goto label_21fd94;
        case 0x21fd98u: goto label_21fd98;
        case 0x21fd9cu: goto label_21fd9c;
        case 0x21fda0u: goto label_21fda0;
        case 0x21fda4u: goto label_21fda4;
        case 0x21fda8u: goto label_21fda8;
        case 0x21fdacu: goto label_21fdac;
        case 0x21fdb0u: goto label_21fdb0;
        case 0x21fdb4u: goto label_21fdb4;
        case 0x21fdb8u: goto label_21fdb8;
        case 0x21fdbcu: goto label_21fdbc;
        case 0x21fdc0u: goto label_21fdc0;
        case 0x21fdc4u: goto label_21fdc4;
        case 0x21fdc8u: goto label_21fdc8;
        case 0x21fdccu: goto label_21fdcc;
        case 0x21fdd0u: goto label_21fdd0;
        case 0x21fdd4u: goto label_21fdd4;
        case 0x21fdd8u: goto label_21fdd8;
        case 0x21fddcu: goto label_21fddc;
        case 0x21fde0u: goto label_21fde0;
        case 0x21fde4u: goto label_21fde4;
        case 0x21fde8u: goto label_21fde8;
        case 0x21fdecu: goto label_21fdec;
        case 0x21fdf0u: goto label_21fdf0;
        case 0x21fdf4u: goto label_21fdf4;
        case 0x21fdf8u: goto label_21fdf8;
        case 0x21fdfcu: goto label_21fdfc;
        case 0x21fe00u: goto label_21fe00;
        case 0x21fe04u: goto label_21fe04;
        case 0x21fe08u: goto label_21fe08;
        case 0x21fe0cu: goto label_21fe0c;
        case 0x21fe10u: goto label_21fe10;
        case 0x21fe14u: goto label_21fe14;
        case 0x21fe18u: goto label_21fe18;
        case 0x21fe1cu: goto label_21fe1c;
        case 0x21fe20u: goto label_21fe20;
        case 0x21fe24u: goto label_21fe24;
        case 0x21fe28u: goto label_21fe28;
        case 0x21fe2cu: goto label_21fe2c;
        case 0x21fe30u: goto label_21fe30;
        case 0x21fe34u: goto label_21fe34;
        case 0x21fe38u: goto label_21fe38;
        case 0x21fe3cu: goto label_21fe3c;
        case 0x21fe40u: goto label_21fe40;
        case 0x21fe44u: goto label_21fe44;
        case 0x21fe48u: goto label_21fe48;
        case 0x21fe4cu: goto label_21fe4c;
        case 0x21fe50u: goto label_21fe50;
        case 0x21fe54u: goto label_21fe54;
        case 0x21fe58u: goto label_21fe58;
        case 0x21fe5cu: goto label_21fe5c;
        case 0x21fe60u: goto label_21fe60;
        case 0x21fe64u: goto label_21fe64;
        case 0x21fe68u: goto label_21fe68;
        case 0x21fe6cu: goto label_21fe6c;
        case 0x21fe70u: goto label_21fe70;
        case 0x21fe74u: goto label_21fe74;
        case 0x21fe78u: goto label_21fe78;
        case 0x21fe7cu: goto label_21fe7c;
        case 0x21fe80u: goto label_21fe80;
        case 0x21fe84u: goto label_21fe84;
        case 0x21fe88u: goto label_21fe88;
        case 0x21fe8cu: goto label_21fe8c;
        case 0x21fe90u: goto label_21fe90;
        case 0x21fe94u: goto label_21fe94;
        case 0x21fe98u: goto label_21fe98;
        case 0x21fe9cu: goto label_21fe9c;
        case 0x21fea0u: goto label_21fea0;
        case 0x21fea4u: goto label_21fea4;
        case 0x21fea8u: goto label_21fea8;
        case 0x21feacu: goto label_21feac;
        case 0x21feb0u: goto label_21feb0;
        case 0x21feb4u: goto label_21feb4;
        case 0x21feb8u: goto label_21feb8;
        case 0x21febcu: goto label_21febc;
        case 0x21fec0u: goto label_21fec0;
        case 0x21fec4u: goto label_21fec4;
        case 0x21fec8u: goto label_21fec8;
        case 0x21feccu: goto label_21fecc;
        case 0x21fed0u: goto label_21fed0;
        case 0x21fed4u: goto label_21fed4;
        case 0x21fed8u: goto label_21fed8;
        case 0x21fedcu: goto label_21fedc;
        case 0x21fee0u: goto label_21fee0;
        case 0x21fee4u: goto label_21fee4;
        case 0x21fee8u: goto label_21fee8;
        case 0x21feecu: goto label_21feec;
        case 0x21fef0u: goto label_21fef0;
        case 0x21fef4u: goto label_21fef4;
        case 0x21fef8u: goto label_21fef8;
        case 0x21fefcu: goto label_21fefc;
        case 0x21ff00u: goto label_21ff00;
        case 0x21ff04u: goto label_21ff04;
        case 0x21ff08u: goto label_21ff08;
        case 0x21ff0cu: goto label_21ff0c;
        case 0x21ff10u: goto label_21ff10;
        case 0x21ff14u: goto label_21ff14;
        case 0x21ff18u: goto label_21ff18;
        case 0x21ff1cu: goto label_21ff1c;
        case 0x21ff20u: goto label_21ff20;
        case 0x21ff24u: goto label_21ff24;
        case 0x21ff28u: goto label_21ff28;
        case 0x21ff2cu: goto label_21ff2c;
        case 0x21ff30u: goto label_21ff30;
        case 0x21ff34u: goto label_21ff34;
        case 0x21ff38u: goto label_21ff38;
        case 0x21ff3cu: goto label_21ff3c;
        case 0x21ff40u: goto label_21ff40;
        case 0x21ff44u: goto label_21ff44;
        case 0x21ff48u: goto label_21ff48;
        case 0x21ff4cu: goto label_21ff4c;
        case 0x21ff50u: goto label_21ff50;
        case 0x21ff54u: goto label_21ff54;
        case 0x21ff58u: goto label_21ff58;
        case 0x21ff5cu: goto label_21ff5c;
        case 0x21ff60u: goto label_21ff60;
        case 0x21ff64u: goto label_21ff64;
        case 0x21ff68u: goto label_21ff68;
        case 0x21ff6cu: goto label_21ff6c;
        case 0x21ff70u: goto label_21ff70;
        case 0x21ff74u: goto label_21ff74;
        case 0x21ff78u: goto label_21ff78;
        case 0x21ff7cu: goto label_21ff7c;
        case 0x21ff80u: goto label_21ff80;
        case 0x21ff84u: goto label_21ff84;
        case 0x21ff88u: goto label_21ff88;
        case 0x21ff8cu: goto label_21ff8c;
        case 0x21ff90u: goto label_21ff90;
        case 0x21ff94u: goto label_21ff94;
        case 0x21ff98u: goto label_21ff98;
        case 0x21ff9cu: goto label_21ff9c;
        case 0x21ffa0u: goto label_21ffa0;
        case 0x21ffa4u: goto label_21ffa4;
        case 0x21ffa8u: goto label_21ffa8;
        case 0x21ffacu: goto label_21ffac;
        case 0x21ffb0u: goto label_21ffb0;
        case 0x21ffb4u: goto label_21ffb4;
        case 0x21ffb8u: goto label_21ffb8;
        case 0x21ffbcu: goto label_21ffbc;
        case 0x21ffc0u: goto label_21ffc0;
        case 0x21ffc4u: goto label_21ffc4;
        case 0x21ffc8u: goto label_21ffc8;
        case 0x21ffccu: goto label_21ffcc;
        case 0x21ffd0u: goto label_21ffd0;
        case 0x21ffd4u: goto label_21ffd4;
        case 0x21ffd8u: goto label_21ffd8;
        case 0x21ffdcu: goto label_21ffdc;
        case 0x21ffe0u: goto label_21ffe0;
        case 0x21ffe4u: goto label_21ffe4;
        case 0x21ffe8u: goto label_21ffe8;
        case 0x21ffecu: goto label_21ffec;
        case 0x21fff0u: goto label_21fff0;
        case 0x21fff4u: goto label_21fff4;
        case 0x21fff8u: goto label_21fff8;
        case 0x21fffcu: goto label_21fffc;
        case 0x220000u: goto label_220000;
        case 0x220004u: goto label_220004;
        case 0x220008u: goto label_220008;
        case 0x22000cu: goto label_22000c;
        case 0x220010u: goto label_220010;
        case 0x220014u: goto label_220014;
        case 0x220018u: goto label_220018;
        case 0x22001cu: goto label_22001c;
        case 0x220020u: goto label_220020;
        case 0x220024u: goto label_220024;
        case 0x220028u: goto label_220028;
        case 0x22002cu: goto label_22002c;
        case 0x220030u: goto label_220030;
        case 0x220034u: goto label_220034;
        case 0x220038u: goto label_220038;
        case 0x22003cu: goto label_22003c;
        case 0x220040u: goto label_220040;
        case 0x220044u: goto label_220044;
        case 0x220048u: goto label_220048;
        case 0x22004cu: goto label_22004c;
        case 0x220050u: goto label_220050;
        case 0x220054u: goto label_220054;
        case 0x220058u: goto label_220058;
        case 0x22005cu: goto label_22005c;
        case 0x220060u: goto label_220060;
        case 0x220064u: goto label_220064;
        case 0x220068u: goto label_220068;
        case 0x22006cu: goto label_22006c;
        case 0x220070u: goto label_220070;
        case 0x220074u: goto label_220074;
        case 0x220078u: goto label_220078;
        case 0x22007cu: goto label_22007c;
        case 0x220080u: goto label_220080;
        case 0x220084u: goto label_220084;
        case 0x220088u: goto label_220088;
        case 0x22008cu: goto label_22008c;
        case 0x220090u: goto label_220090;
        case 0x220094u: goto label_220094;
        case 0x220098u: goto label_220098;
        case 0x22009cu: goto label_22009c;
        case 0x2200a0u: goto label_2200a0;
        case 0x2200a4u: goto label_2200a4;
        case 0x2200a8u: goto label_2200a8;
        case 0x2200acu: goto label_2200ac;
        case 0x2200b0u: goto label_2200b0;
        case 0x2200b4u: goto label_2200b4;
        case 0x2200b8u: goto label_2200b8;
        case 0x2200bcu: goto label_2200bc;
        case 0x2200c0u: goto label_2200c0;
        case 0x2200c4u: goto label_2200c4;
        case 0x2200c8u: goto label_2200c8;
        case 0x2200ccu: goto label_2200cc;
        case 0x2200d0u: goto label_2200d0;
        case 0x2200d4u: goto label_2200d4;
        case 0x2200d8u: goto label_2200d8;
        case 0x2200dcu: goto label_2200dc;
        case 0x2200e0u: goto label_2200e0;
        case 0x2200e4u: goto label_2200e4;
        case 0x2200e8u: goto label_2200e8;
        case 0x2200ecu: goto label_2200ec;
        case 0x2200f0u: goto label_2200f0;
        case 0x2200f4u: goto label_2200f4;
        case 0x2200f8u: goto label_2200f8;
        case 0x2200fcu: goto label_2200fc;
        case 0x220100u: goto label_220100;
        case 0x220104u: goto label_220104;
        case 0x220108u: goto label_220108;
        case 0x22010cu: goto label_22010c;
        case 0x220110u: goto label_220110;
        case 0x220114u: goto label_220114;
        case 0x220118u: goto label_220118;
        case 0x22011cu: goto label_22011c;
        case 0x220120u: goto label_220120;
        case 0x220124u: goto label_220124;
        case 0x220128u: goto label_220128;
        case 0x22012cu: goto label_22012c;
        case 0x220130u: goto label_220130;
        case 0x220134u: goto label_220134;
        case 0x220138u: goto label_220138;
        case 0x22013cu: goto label_22013c;
        case 0x220140u: goto label_220140;
        case 0x220144u: goto label_220144;
        case 0x220148u: goto label_220148;
        case 0x22014cu: goto label_22014c;
        case 0x220150u: goto label_220150;
        case 0x220154u: goto label_220154;
        case 0x220158u: goto label_220158;
        case 0x22015cu: goto label_22015c;
        default: break;
    }

    ctx->pc = 0x21fba0u;

label_21fba0:
    // 0x21fba0: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x21fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
label_21fba4:
    // 0x21fba4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21fba8:
    // 0x21fba8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_21fbac:
    // 0x21fbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21fbb0:
    // 0x21fbb0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x21fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_21fbb4:
    // 0x21fbb4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_21fbb8:
    // 0x21fbb8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21fbb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21fbbc:
    // 0x21fbbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_21fbc0:
    // 0x21fbc0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21fbc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21fbc4:
    // 0x21fbc4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21fbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_21fbc8:
    // 0x21fbc8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21fbc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21fbcc:
    // 0x21fbcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_21fbd0:
    // 0x21fbd0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21fbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21fbd4:
    // 0x21fbd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21fbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21fbd8:
    // 0x21fbd8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x21fbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21fbdc:
    // 0x21fbdc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x21fbdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_21fbe0:
    // 0x21fbe0: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x21fbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21fbe4:
    // 0x21fbe4: 0xc4c100dc  lwc1        $f1, 0xDC($a2)
    ctx->pc = 0x21fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fbe8:
    // 0x21fbe8: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x21fbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_21fbec:
    // 0x21fbec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x21fbecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_21fbf0:
    // 0x21fbf0: 0xe7a10370  swc1        $f1, 0x370($sp)
    ctx->pc = 0x21fbf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_21fbf4:
    // 0x21fbf4: 0xc4c8005c  lwc1        $f8, 0x5C($a2)
    ctx->pc = 0x21fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_21fbf8:
    // 0x21fbf8: 0xc4c7006c  lwc1        $f7, 0x6C($a2)
    ctx->pc = 0x21fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_21fbfc:
    // 0x21fbfc: 0xc4c20060  lwc1        $f2, 0x60($a2)
    ctx->pc = 0x21fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21fc00:
    // 0x21fc00: 0x4608a041  sub.s       $f1, $f20, $f8
    ctx->pc = 0x21fc00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[8]);
label_21fc04:
    // 0x21fc04: 0x46070982  mul.s       $f6, $f1, $f7
    ctx->pc = 0x21fc04u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_21fc08:
    // 0x21fc08: 0x46060141  sub.s       $f5, $f0, $f6
    ctx->pc = 0x21fc08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_21fc0c:
    // 0x21fc0c: 0xc4c30050  lwc1        $f3, 0x50($a2)
    ctx->pc = 0x21fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21fc10:
    // 0x21fc10: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x21fc10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_21fc14:
    // 0x21fc14: 0xc4c00064  lwc1        $f0, 0x64($a2)
    ctx->pc = 0x21fc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fc18:
    // 0x21fc18: 0x4603291c  madd.s      $f4, $f5, $f3
    ctx->pc = 0x21fc18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
label_21fc1c:
    // 0x21fc1c: 0xc4c10054  lwc1        $f1, 0x54($a2)
    ctx->pc = 0x21fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fc20:
    // 0x21fc20: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x21fc20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_21fc24:
    // 0x21fc24: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x21fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fc28:
    // 0x21fc28: 0x460128dc  madd.s      $f3, $f5, $f1
    ctx->pc = 0x21fc28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_21fc2c:
    // 0x21fc2c: 0xc4c10068  lwc1        $f1, 0x68($a2)
    ctx->pc = 0x21fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fc30:
    // 0x21fc30: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x21fc30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_21fc34:
    // 0x21fc34: 0xc4c20058  lwc1        $f2, 0x58($a2)
    ctx->pc = 0x21fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21fc38:
    // 0x21fc38: 0x4601301a  mula.s      $f6, $f1
    ctx->pc = 0x21fc38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_21fc3c:
    // 0x21fc3c: 0xe7a40320  swc1        $f4, 0x320($sp)
    ctx->pc = 0x21fc3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_21fc40:
    // 0x21fc40: 0xe7a00330  swc1        $f0, 0x330($sp)
    ctx->pc = 0x21fc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_21fc44:
    // 0x21fc44: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x21fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fc48:
    // 0x21fc48: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x21fc48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_21fc4c:
    // 0x21fc4c: 0x4607301a  mula.s      $f6, $f7
    ctx->pc = 0x21fc4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_21fc50:
    // 0x21fc50: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x21fc50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_21fc54:
    // 0x21fc54: 0xe7a00334  swc1        $f0, 0x334($sp)
    ctx->pc = 0x21fc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 820), bits); }
label_21fc58:
    // 0x21fc58: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x21fc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fc5c:
    // 0x21fc5c: 0x4608285c  madd.s      $f1, $f5, $f8
    ctx->pc = 0x21fc5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
label_21fc60:
    // 0x21fc60: 0xe7a30324  swc1        $f3, 0x324($sp)
    ctx->pc = 0x21fc60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
label_21fc64:
    // 0x21fc64: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21fc64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_21fc68:
    // 0x21fc68: 0xe7a00338  swc1        $f0, 0x338($sp)
    ctx->pc = 0x21fc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
label_21fc6c:
    // 0x21fc6c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x21fc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fc70:
    // 0x21fc70: 0xe7a20328  swc1        $f2, 0x328($sp)
    ctx->pc = 0x21fc70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_21fc74:
    // 0x21fc74: 0xe7a1032c  swc1        $f1, 0x32C($sp)
    ctx->pc = 0x21fc74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 812), bits); }
label_21fc78:
    // 0x21fc78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21fc78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_21fc7c:
    // 0x21fc7c: 0xe7a0033c  swc1        $f0, 0x33C($sp)
    ctx->pc = 0x21fc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 828), bits); }
label_21fc80:
    // 0x21fc80: 0x8cd90000  lw          $t9, 0x0($a2)
    ctx->pc = 0x21fc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21fc84:
    // 0x21fc84: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x21fc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_21fc88:
    // 0x21fc88: 0x320f809  jalr        $t9
label_21fc8c:
    if (ctx->pc == 0x21FC8Cu) {
        ctx->pc = 0x21FC8Cu;
            // 0x21fc8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21FC90u;
        goto label_21fc90;
    }
    ctx->pc = 0x21FC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21FC90u);
        ctx->pc = 0x21FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC88u;
            // 0x21fc8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21FC90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21FC90u; }
            if (ctx->pc != 0x21FC90u) { return; }
        }
        }
    }
    ctx->pc = 0x21FC90u;
label_21fc90:
    // 0x21fc90: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x21fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fc94:
    // 0x21fc94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21fc98:
    // 0x21fc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21fc9c:
    // 0x21fc9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fca0:
    // 0x21fca0: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x21fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_21fca4:
    // 0x21fca4: 0xe7a10310  swc1        $f1, 0x310($sp)
    ctx->pc = 0x21fca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_21fca8:
    // 0x21fca8: 0xc648005c  lwc1        $f8, 0x5C($s2)
    ctx->pc = 0x21fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_21fcac:
    // 0x21fcac: 0xc647006c  lwc1        $f7, 0x6C($s2)
    ctx->pc = 0x21fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_21fcb0:
    // 0x21fcb0: 0xc6420060  lwc1        $f2, 0x60($s2)
    ctx->pc = 0x21fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21fcb4:
    // 0x21fcb4: 0x4608a041  sub.s       $f1, $f20, $f8
    ctx->pc = 0x21fcb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[8]);
label_21fcb8:
    // 0x21fcb8: 0x46070982  mul.s       $f6, $f1, $f7
    ctx->pc = 0x21fcb8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_21fcbc:
    // 0x21fcbc: 0x46060141  sub.s       $f5, $f0, $f6
    ctx->pc = 0x21fcbcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_21fcc0:
    // 0x21fcc0: 0xc6430050  lwc1        $f3, 0x50($s2)
    ctx->pc = 0x21fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21fcc4:
    // 0x21fcc4: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x21fcc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_21fcc8:
    // 0x21fcc8: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x21fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fccc:
    // 0x21fccc: 0x4603291c  madd.s      $f4, $f5, $f3
    ctx->pc = 0x21fcccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
label_21fcd0:
    // 0x21fcd0: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x21fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fcd4:
    // 0x21fcd4: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x21fcd4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_21fcd8:
    // 0x21fcd8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x21fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fcdc:
    // 0x21fcdc: 0x460128dc  madd.s      $f3, $f5, $f1
    ctx->pc = 0x21fcdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_21fce0:
    // 0x21fce0: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x21fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fce4:
    // 0x21fce4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x21fce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_21fce8:
    // 0x21fce8: 0xc6420058  lwc1        $f2, 0x58($s2)
    ctx->pc = 0x21fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21fcec:
    // 0x21fcec: 0x4601301a  mula.s      $f6, $f1
    ctx->pc = 0x21fcecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_21fcf0:
    // 0x21fcf0: 0xe7a402c0  swc1        $f4, 0x2C0($sp)
    ctx->pc = 0x21fcf0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_21fcf4:
    // 0x21fcf4: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x21fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_21fcf8:
    // 0x21fcf8: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x21fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fcfc:
    // 0x21fcfc: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x21fcfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_21fd00:
    // 0x21fd00: 0x4607301a  mula.s      $f6, $f7
    ctx->pc = 0x21fd00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_21fd04:
    // 0x21fd04: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x21fd04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_21fd08:
    // 0x21fd08: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x21fd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_21fd0c:
    // 0x21fd0c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x21fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd10:
    // 0x21fd10: 0x4608285c  madd.s      $f1, $f5, $f8
    ctx->pc = 0x21fd10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
label_21fd14:
    // 0x21fd14: 0xe7a302c4  swc1        $f3, 0x2C4($sp)
    ctx->pc = 0x21fd14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_21fd18:
    // 0x21fd18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21fd18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_21fd1c:
    // 0x21fd1c: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x21fd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_21fd20:
    // 0x21fd20: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x21fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd24:
    // 0x21fd24: 0xe7a202c8  swc1        $f2, 0x2C8($sp)
    ctx->pc = 0x21fd24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_21fd28:
    // 0x21fd28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21fd28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_21fd2c:
    // 0x21fd2c: 0xe7a002dc  swc1        $f0, 0x2DC($sp)
    ctx->pc = 0x21fd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
label_21fd30:
    // 0x21fd30: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x21fd30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21fd34:
    // 0x21fd34: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x21fd34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_21fd38:
    // 0x21fd38: 0x320f809  jalr        $t9
label_21fd3c:
    if (ctx->pc == 0x21FD3Cu) {
        ctx->pc = 0x21FD3Cu;
            // 0x21fd3c: 0xe7a102cc  swc1        $f1, 0x2CC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
        ctx->pc = 0x21FD40u;
        goto label_21fd40;
    }
    ctx->pc = 0x21FD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21FD40u);
        ctx->pc = 0x21FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD38u;
            // 0x21fd3c: 0xe7a102cc  swc1        $f1, 0x2CC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21FD40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21FD40u; }
            if (ctx->pc != 0x21FD40u) { return; }
        }
        }
    }
    ctx->pc = 0x21FD40u;
label_21fd40:
    // 0x21fd40: 0xc66000e0  lwc1        $f0, 0xE0($s3)
    ctx->pc = 0x21fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd44:
    // 0x21fd44: 0x26aa0010  addiu       $t2, $s5, 0x10
    ctx->pc = 0x21fd44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_21fd48:
    // 0x21fd48: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_21fd4c:
    // 0x21fd4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21fd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fd50:
    // 0x21fd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fd54:
    // 0x21fd54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21fd58:
    // 0x21fd58: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x21fd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_21fd5c:
    // 0x21fd5c: 0xc66000e4  lwc1        $f0, 0xE4($s3)
    ctx->pc = 0x21fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd60:
    // 0x21fd60: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x21fd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_21fd64:
    // 0x21fd64: 0xc66000e8  lwc1        $f0, 0xE8($s3)
    ctx->pc = 0x21fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd68:
    // 0x21fd68: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x21fd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_21fd6c:
    // 0x21fd6c: 0xc66000ec  lwc1        $f0, 0xEC($s3)
    ctx->pc = 0x21fd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd70:
    // 0x21fd70: 0xe7a002ac  swc1        $f0, 0x2AC($sp)
    ctx->pc = 0x21fd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_21fd74:
    // 0x21fd74: 0xc66000f0  lwc1        $f0, 0xF0($s3)
    ctx->pc = 0x21fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd78:
    // 0x21fd78: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x21fd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_21fd7c:
    // 0x21fd7c: 0xc66000f4  lwc1        $f0, 0xF4($s3)
    ctx->pc = 0x21fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd80:
    // 0x21fd80: 0xe7a002b4  swc1        $f0, 0x2B4($sp)
    ctx->pc = 0x21fd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_21fd84:
    // 0x21fd84: 0xc66000f8  lwc1        $f0, 0xF8($s3)
    ctx->pc = 0x21fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd88:
    // 0x21fd88: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x21fd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_21fd8c:
    // 0x21fd8c: 0xc66000fc  lwc1        $f0, 0xFC($s3)
    ctx->pc = 0x21fd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd90:
    // 0x21fd90: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x21fd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
label_21fd94:
    // 0x21fd94: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x21fd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fd98:
    // 0x21fd98: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x21fd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_21fd9c:
    // 0x21fd9c: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x21fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fda0:
    // 0x21fda0: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x21fda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_21fda4:
    // 0x21fda4: 0xc64000e8  lwc1        $f0, 0xE8($s2)
    ctx->pc = 0x21fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fda8:
    // 0x21fda8: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x21fda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_21fdac:
    // 0x21fdac: 0xc64000ec  lwc1        $f0, 0xEC($s2)
    ctx->pc = 0x21fdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fdb0:
    // 0x21fdb0: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x21fdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_21fdb4:
    // 0x21fdb4: 0xc64000f0  lwc1        $f0, 0xF0($s2)
    ctx->pc = 0x21fdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fdb8:
    // 0x21fdb8: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x21fdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_21fdbc:
    // 0x21fdbc: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x21fdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fdc0:
    // 0x21fdc0: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x21fdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_21fdc4:
    // 0x21fdc4: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x21fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fdc8:
    // 0x21fdc8: 0xe7a00298  swc1        $f0, 0x298($sp)
    ctx->pc = 0x21fdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_21fdcc:
    // 0x21fdcc: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x21fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fdd0:
    // 0x21fdd0: 0xe7a0029c  swc1        $f0, 0x29C($sp)
    ctx->pc = 0x21fdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
label_21fdd4:
    // 0x21fdd4: 0xc6610060  lwc1        $f1, 0x60($s3)
    ctx->pc = 0x21fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fdd8:
    // 0x21fdd8: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x21fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fddc:
    // 0x21fddc: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x21fddcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21fde0:
    // 0x21fde0: 0xe7a50260  swc1        $f5, 0x260($sp)
    ctx->pc = 0x21fde0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_21fde4:
    // 0x21fde4: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x21fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fde8:
    // 0x21fde8: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x21fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fdec:
    // 0x21fdec: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x21fdecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21fdf0:
    // 0x21fdf0: 0xe7a40264  swc1        $f4, 0x264($sp)
    ctx->pc = 0x21fdf0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_21fdf4:
    // 0x21fdf4: 0xc6610068  lwc1        $f1, 0x68($s3)
    ctx->pc = 0x21fdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fdf8:
    // 0x21fdf8: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x21fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fdfc:
    // 0x21fdfc: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x21fdfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21fe00:
    // 0x21fe00: 0xe7a30268  swc1        $f3, 0x268($sp)
    ctx->pc = 0x21fe00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_21fe04:
    // 0x21fe04: 0xc662006c  lwc1        $f2, 0x6C($s3)
    ctx->pc = 0x21fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21fe08:
    // 0x21fe08: 0xc661005c  lwc1        $f1, 0x5C($s3)
    ctx->pc = 0x21fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fe0c:
    // 0x21fe0c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x21fe0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_21fe10:
    // 0x21fe10: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x21fe10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_21fe14:
    // 0x21fe14: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x21fe14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_21fe18:
    // 0x21fe18: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x21fe18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_21fe1c:
    // 0x21fe1c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x21fe1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_21fe20:
    // 0x21fe20: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x21fe20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_21fe24:
    // 0x21fe24: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x21fe24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_21fe28:
    // 0x21fe28: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x21fe28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_21fe2c:
    // 0x21fe2c: 0xe7a1026c  swc1        $f1, 0x26C($sp)
    ctx->pc = 0x21fe2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
label_21fe30:
    // 0x21fe30: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x21fe30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
label_21fe34:
    // 0x21fe34: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x21fe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fe38:
    // 0x21fe38: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21fe38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21fe3c:
    // 0x21fe3c: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x21fe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_21fe40:
    // 0x21fe40: 0xc66000a4  lwc1        $f0, 0xA4($s3)
    ctx->pc = 0x21fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fe44:
    // 0x21fe44: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21fe44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21fe48:
    // 0x21fe48: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x21fe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_21fe4c:
    // 0x21fe4c: 0xc66000a8  lwc1        $f0, 0xA8($s3)
    ctx->pc = 0x21fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fe50:
    // 0x21fe50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21fe50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21fe54:
    // 0x21fe54: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x21fe54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_21fe58:
    // 0x21fe58: 0xc66000ac  lwc1        $f0, 0xAC($s3)
    ctx->pc = 0x21fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fe5c:
    // 0x21fe5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21fe5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21fe60:
    // 0x21fe60: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x21fe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_21fe64:
    // 0x21fe64: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x21fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fe68:
    // 0x21fe68: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x21fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fe6c:
    // 0x21fe6c: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x21fe6cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21fe70:
    // 0x21fe70: 0xe7a50240  swc1        $f5, 0x240($sp)
    ctx->pc = 0x21fe70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_21fe74:
    // 0x21fe74: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x21fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fe78:
    // 0x21fe78: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x21fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fe7c:
    // 0x21fe7c: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x21fe7cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21fe80:
    // 0x21fe80: 0xe7a40244  swc1        $f4, 0x244($sp)
    ctx->pc = 0x21fe80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_21fe84:
    // 0x21fe84: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x21fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fe88:
    // 0x21fe88: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x21fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fe8c:
    // 0x21fe8c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x21fe8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21fe90:
    // 0x21fe90: 0xe7a30248  swc1        $f3, 0x248($sp)
    ctx->pc = 0x21fe90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_21fe94:
    // 0x21fe94: 0xc642006c  lwc1        $f2, 0x6C($s2)
    ctx->pc = 0x21fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21fe98:
    // 0x21fe98: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x21fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21fe9c:
    // 0x21fe9c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x21fe9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_21fea0:
    // 0x21fea0: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x21fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_21fea4:
    // 0x21fea4: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x21fea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_21fea8:
    // 0x21fea8: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x21fea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_21feac:
    // 0x21feac: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x21feacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_21feb0:
    // 0x21feb0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x21feb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_21feb4:
    // 0x21feb4: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x21feb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_21feb8:
    // 0x21feb8: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x21feb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_21febc:
    // 0x21febc: 0xe7a1024c  swc1        $f1, 0x24C($sp)
    ctx->pc = 0x21febcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_21fec0:
    // 0x21fec0: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x21fec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_21fec4:
    // 0x21fec4: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x21fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fec8:
    // 0x21fec8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21fec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21fecc:
    // 0x21fecc: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x21feccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_21fed0:
    // 0x21fed0: 0xc64000a4  lwc1        $f0, 0xA4($s2)
    ctx->pc = 0x21fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fed4:
    // 0x21fed4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21fed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21fed8:
    // 0x21fed8: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x21fed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_21fedc:
    // 0x21fedc: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x21fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fee0:
    // 0x21fee0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21fee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21fee4:
    // 0x21fee4: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x21fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_21fee8:
    // 0x21fee8: 0xc64000ac  lwc1        $f0, 0xAC($s2)
    ctx->pc = 0x21fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21feec:
    // 0x21feec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21feecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21fef0:
    // 0x21fef0: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x21fef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_21fef4:
    // 0x21fef4: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x21fef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21fef8:
    // 0x21fef8: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x21fef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_21fefc:
    // 0x21fefc: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x21fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ff00:
    // 0x21ff00: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x21ff00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_21ff04:
    // 0x21ff04: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x21ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21ff08:
    // 0x21ff08: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x21ff08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_21ff0c:
    // 0x21ff0c: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x21ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ff10:
    // 0x21ff10: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x21ff10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_21ff14:
    // 0x21ff14: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x21ff14u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_21ff18:
    // 0x21ff18: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x21ff18u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_21ff1c:
    // 0x21ff1c: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x21ff1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_21ff20:
    // 0x21ff20: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x21ff20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21ff24:
    // 0x21ff24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_21ff28:
    if (ctx->pc == 0x21FF28u) {
        ctx->pc = 0x21FF2Cu;
        goto label_21ff2c;
    }
    ctx->pc = 0x21FF24u;
    {
        const bool branch_taken_0x21ff24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ff24) {
            ctx->pc = 0x21FF38u;
            goto label_21ff38;
        }
    }
    ctx->pc = 0x21FF2Cu;
label_21ff2c:
    // 0x21ff2c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21ff2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21ff30:
    // 0x21ff30: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x21ff30u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
label_21ff34:
    // 0x21ff34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21ff34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ff38:
    // 0x21ff38: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x21ff38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21ff3c:
    // 0x21ff3c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_21ff40:
    if (ctx->pc == 0x21FF40u) {
        ctx->pc = 0x21FF40u;
            // 0x21ff40: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->pc = 0x21FF44u;
        goto label_21ff44;
    }
    ctx->pc = 0x21FF3Cu;
    {
        const bool branch_taken_0x21ff3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ff3c) {
            ctx->pc = 0x21FF40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF3Cu;
            // 0x21ff40: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21FF4Cu;
            goto label_21ff4c;
        }
    }
    ctx->pc = 0x21FF44u;
label_21ff44:
    // 0x21ff44: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21ff44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21ff48:
    // 0x21ff48: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x21ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_21ff4c:
    // 0x21ff4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21ff50:
    // 0x21ff50: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x21ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_21ff54:
    // 0x21ff54: 0x1422821  addu        $a1, $t2, $v0
    ctx->pc = 0x21ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_21ff58:
    // 0x21ff58: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x21ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_21ff5c:
    // 0x21ff5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21ff60:
    // 0x21ff60: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x21ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_21ff64:
    // 0x21ff64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21ff68:
    // 0x21ff68: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x21ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ff6c:
    // 0x21ff6c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21ff70:
    // 0x21ff70: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x21ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21ff74:
    // 0x21ff74: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x21ff74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_21ff78:
    // 0x21ff78: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x21ff78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_21ff7c:
    // 0x21ff7c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ff80:
    // 0x21ff80: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21ff80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_21ff84:
    // 0x21ff84: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21ff84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_21ff88:
    // 0x21ff88: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x21ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21ff8c:
    // 0x21ff8c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x21ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21ff90:
    // 0x21ff90: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x21ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ff94:
    // 0x21ff94: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x21ff94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_21ff98:
    // 0x21ff98: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x21ff98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_21ff9c:
    // 0x21ff9c: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x21ff9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_21ffa0:
    // 0x21ffa0: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x21ffa0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21ffa4:
    // 0x21ffa4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_21ffa8:
    if (ctx->pc == 0x21FFA8u) {
        ctx->pc = 0x21FFA8u;
            // 0x21ffa8: 0x27ab00b0  addiu       $t3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x21FFACu;
        goto label_21ffac;
    }
    ctx->pc = 0x21FFA4u;
    {
        const bool branch_taken_0x21ffa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFA4u;
            // 0x21ffa8: 0x27ab00b0  addiu       $t3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffa4) {
            ctx->pc = 0x21FFC8u;
            goto label_21ffc8;
        }
    }
    ctx->pc = 0x21FFACu;
label_21ffac:
    // 0x21ffac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21ffb0:
    // 0x21ffb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ffb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21ffb4:
    // 0x21ffb4: 0x0  nop
    ctx->pc = 0x21ffb4u;
    // NOP
label_21ffb8:
    // 0x21ffb8: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x21ffb8u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
label_21ffbc:
    // 0x21ffbc: 0x0  nop
    ctx->pc = 0x21ffbcu;
    // NOP
label_21ffc0:
    // 0x21ffc0: 0x0  nop
    ctx->pc = 0x21ffc0u;
    // NOP
label_21ffc4:
    // 0x21ffc4: 0x0  nop
    ctx->pc = 0x21ffc4u;
    // NOP
label_21ffc8:
    // 0x21ffc8: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x21ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ffcc:
    // 0x21ffcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ffccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ffd0:
    // 0x21ffd0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21ffd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21ffd4:
    // 0x21ffd4: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x21ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_21ffd8:
    // 0x21ffd8: 0x27a702a0  addiu       $a3, $sp, 0x2A0
    ctx->pc = 0x21ffd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_21ffdc:
    // 0x21ffdc: 0x27a802d0  addiu       $t0, $sp, 0x2D0
    ctx->pc = 0x21ffdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_21ffe0:
    // 0x21ffe0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21ffe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_21ffe4:
    // 0x21ffe4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x21ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_21ffe8:
    // 0x21ffe8: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x21ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ffec:
    // 0x21ffec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21ffecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_21fff0:
    // 0x21fff0: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x21fff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_21fff4:
    // 0x21fff4: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x21fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21fff8:
    // 0x21fff8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21fff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_21fffc:
    // 0x21fffc: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x21fffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_220000:
    // 0x220000: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x220000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220004:
    // 0x220004: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x220004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_220008:
    // 0x220008: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x220008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_22000c:
    // 0x22000c: 0xc7a600b8  lwc1        $f6, 0xB8($sp)
    ctx->pc = 0x22000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_220010:
    // 0x220010: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x220010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_220014:
    // 0x220014: 0xc5430008  lwc1        $f3, 0x8($t2)
    ctx->pc = 0x220014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_220018:
    // 0x220018: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x220018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22001c:
    // 0x22001c: 0x4606101a  mula.s      $f2, $f6
    ctx->pc = 0x22001cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_220020:
    // 0x220020: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x220020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_220024:
    // 0x220024: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x220024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_220028:
    // 0x220028: 0x4601181d  msub.s      $f0, $f3, $f1
    ctx->pc = 0x220028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_22002c:
    // 0x22002c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x22002cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_220030:
    // 0x220030: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x220030u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_220034:
    // 0x220034: 0x4606281d  msub.s      $f0, $f5, $f6
    ctx->pc = 0x220034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
label_220038:
    // 0x220038: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x220038u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_22003c:
    // 0x22003c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x22003cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_220040:
    // 0x220040: 0x4604101d  msub.s      $f0, $f2, $f4
    ctx->pc = 0x220040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_220044:
    // 0x220044: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x220044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_220048:
    // 0x220048: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x220048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_22004c:
    // 0x22004c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x22004cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_220050:
    // 0x220050: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x220050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_220054:
    // 0x220054: 0x320f809  jalr        $t9
label_220058:
    if (ctx->pc == 0x220058u) {
        ctx->pc = 0x220058u;
            // 0x220058: 0x27a90280  addiu       $t1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x22005Cu;
        goto label_22005c;
    }
    ctx->pc = 0x220054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22005Cu);
        ctx->pc = 0x220058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220054u;
            // 0x220058: 0x27a90280  addiu       $t1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22005Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22005Cu; }
            if (ctx->pc != 0x22005Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22005Cu;
label_22005c:
    // 0x22005c: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x22005cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_220060:
    // 0x220060: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x220060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_220064:
    // 0x220064: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x220064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_220068:
    // 0x220068: 0xc084a82  jal         func_212A08
label_22006c:
    if (ctx->pc == 0x22006Cu) {
        ctx->pc = 0x22006Cu;
            // 0x22006c: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x220070u;
        goto label_220070;
    }
    ctx->pc = 0x220068u;
    SET_GPR_U32(ctx, 31, 0x220070u);
    ctx->pc = 0x22006Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220068u;
            // 0x22006c: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212A08u;
    if (runtime->hasFunction(0x212A08u)) {
        auto targetFn = runtime->lookupFunction(0x212A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220070u; }
        if (ctx->pc != 0x220070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212A08_0x212a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220070u; }
        if (ctx->pc != 0x220070u) { return; }
    }
    ctx->pc = 0x220070u;
label_220070:
    // 0x220070: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x220070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_220074:
    // 0x220074: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x220074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_220078:
    // 0x220078: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x220078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_22007c:
    // 0x22007c: 0xc084b5c  jal         func_212D70
label_220080:
    if (ctx->pc == 0x220080u) {
        ctx->pc = 0x220080u;
            // 0x220080: 0x27a70280  addiu       $a3, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x220084u;
        goto label_220084;
    }
    ctx->pc = 0x22007Cu;
    SET_GPR_U32(ctx, 31, 0x220084u);
    ctx->pc = 0x220080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22007Cu;
            // 0x220080: 0x27a70280  addiu       $a3, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212D70u;
    if (runtime->hasFunction(0x212D70u)) {
        auto targetFn = runtime->lookupFunction(0x212D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220084u; }
        if (ctx->pc != 0x220084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212D70_0x212d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220084u; }
        if (ctx->pc != 0x220084u) { return; }
    }
    ctx->pc = 0x220084u;
label_220084:
    // 0x220084: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x220084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_220088:
    // 0x220088: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x220088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22008c:
    // 0x22008c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_220090:
    // 0x220090: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x220090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_220094:
    // 0x220094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220098:
    // 0x220098: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x220098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_22009c:
    // 0x22009c: 0x27a702a0  addiu       $a3, $sp, 0x2A0
    ctx->pc = 0x22009cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2200a0:
    // 0x2200a0: 0x27a802d0  addiu       $t0, $sp, 0x2D0
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_2200a4:
    // 0x2200a4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2200a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2200a8:
    // 0x2200a8: 0x320f809  jalr        $t9
label_2200ac:
    if (ctx->pc == 0x2200ACu) {
        ctx->pc = 0x2200ACu;
            // 0x2200ac: 0x27a90280  addiu       $t1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2200B0u;
        goto label_2200b0;
    }
    ctx->pc = 0x2200A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2200B0u);
        ctx->pc = 0x2200ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2200A8u;
            // 0x2200ac: 0x27a90280  addiu       $t1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2200B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2200B0u; }
            if (ctx->pc != 0x2200B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2200B0u;
label_2200b0:
    // 0x2200b0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2200b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2200b4:
    // 0x2200b4: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x2200b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2200b8:
    // 0x2200b8: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x2200b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2200bc:
    // 0x2200bc: 0xc084c2e  jal         func_2130B8
label_2200c0:
    if (ctx->pc == 0x2200C0u) {
        ctx->pc = 0x2200C0u;
            // 0x2200c0: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2200C4u;
        goto label_2200c4;
    }
    ctx->pc = 0x2200BCu;
    SET_GPR_U32(ctx, 31, 0x2200C4u);
    ctx->pc = 0x2200C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2200BCu;
            // 0x2200c0: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2130B8u;
    if (runtime->hasFunction(0x2130B8u)) {
        auto targetFn = runtime->lookupFunction(0x2130B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200C4u; }
        if (ctx->pc != 0x2200C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002130B8_0x2130b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200C4u; }
        if (ctx->pc != 0x2200C4u) { return; }
    }
    ctx->pc = 0x2200C4u;
label_2200c4:
    // 0x2200c4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2200c8:
    // 0x2200c8: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x2200c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2200cc:
    // 0x2200cc: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_2200d0:
    // 0x2200d0: 0xc084c2e  jal         func_2130B8
label_2200d4:
    if (ctx->pc == 0x2200D4u) {
        ctx->pc = 0x2200D4u;
            // 0x2200d4: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2200D8u;
        goto label_2200d8;
    }
    ctx->pc = 0x2200D0u;
    SET_GPR_U32(ctx, 31, 0x2200D8u);
    ctx->pc = 0x2200D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2200D0u;
            // 0x2200d4: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2130B8u;
    if (runtime->hasFunction(0x2130B8u)) {
        auto targetFn = runtime->lookupFunction(0x2130B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200D8u; }
        if (ctx->pc != 0x2200D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002130B8_0x2130b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2200D8u; }
        if (ctx->pc != 0x2200D8u) { return; }
    }
    ctx->pc = 0x2200D8u;
label_2200d8:
    // 0x2200d8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2200d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2200dc:
    // 0x2200dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2200dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2200e0:
    // 0x2200e0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2200e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2200e4:
    // 0x2200e4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2200e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2200e8:
    // 0x2200e8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2200e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2200ec:
    // 0x2200ec: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2200ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2200f0:
    // 0x2200f0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2200f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2200f4:
    // 0x2200f4: 0x320f809  jalr        $t9
label_2200f8:
    if (ctx->pc == 0x2200F8u) {
        ctx->pc = 0x2200F8u;
            // 0x2200f8: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x2200FCu;
        goto label_2200fc;
    }
    ctx->pc = 0x2200F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2200FCu);
        ctx->pc = 0x2200F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2200F4u;
            // 0x2200f8: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2200FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2200FCu; }
            if (ctx->pc != 0x2200FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2200FCu;
label_2200fc:
    // 0x2200fc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2200fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_220100:
    // 0x220100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x220100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_220104:
    // 0x220104: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x220104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_220108:
    // 0x220108: 0x320f809  jalr        $t9
label_22010c:
    if (ctx->pc == 0x22010Cu) {
        ctx->pc = 0x22010Cu;
            // 0x22010c: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x220110u;
        goto label_220110;
    }
    ctx->pc = 0x220108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x220110u);
        ctx->pc = 0x22010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220108u;
            // 0x22010c: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220110u; }
            if (ctx->pc != 0x220110u) { return; }
        }
        }
    }
    ctx->pc = 0x220110u;
label_220110:
    // 0x220110: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x220110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_220114:
    // 0x220114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220118:
    // 0x220118: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x220118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_22011c:
    // 0x22011c: 0x320f809  jalr        $t9
label_220120:
    if (ctx->pc == 0x220120u) {
        ctx->pc = 0x220120u;
            // 0x220120: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x220124u;
        goto label_220124;
    }
    ctx->pc = 0x22011Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x220124u);
        ctx->pc = 0x220120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22011Cu;
            // 0x220120: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220124u; }
            if (ctx->pc != 0x220124u) { return; }
        }
        }
    }
    ctx->pc = 0x220124u;
label_220124:
    // 0x220124: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x220124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_220128:
    // 0x220128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22012c:
    // 0x22012c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x22012cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_220130:
    // 0x220130: 0x320f809  jalr        $t9
label_220134:
    if (ctx->pc == 0x220134u) {
        ctx->pc = 0x220134u;
            // 0x220134: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x220138u;
        goto label_220138;
    }
    ctx->pc = 0x220130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x220138u);
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220130u;
            // 0x220134: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220138u; }
            if (ctx->pc != 0x220138u) { return; }
        }
        }
    }
    ctx->pc = 0x220138u;
label_220138:
    // 0x220138: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x220138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22013c:
    // 0x22013c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_220140:
    // 0x220140: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x220140u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_220144:
    // 0x220144: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x220144u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_220148:
    // 0x220148: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x220148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22014c:
    // 0x22014c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22014cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_220150:
    // 0x220150: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x220150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_220154:
    // 0x220154: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x220154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_220158:
    // 0x220158: 0x3e00008  jr          $ra
label_22015c:
    if (ctx->pc == 0x22015Cu) {
        ctx->pc = 0x22015Cu;
            // 0x22015c: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->pc = 0x220160u;
        goto label_fallthrough_0x220158;
    }
    ctx->pc = 0x220158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22015Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220158u;
            // 0x22015c: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x220158:
    ctx->pc = 0x220160u;
}
