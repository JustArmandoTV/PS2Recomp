#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBDA0
// Address: 0x2dbda0 - 0x2dc230
void sub_002DBDA0_0x2dbda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBDA0_0x2dbda0");
#endif

    switch (ctx->pc) {
        case 0x2dbda0u: goto label_2dbda0;
        case 0x2dbda4u: goto label_2dbda4;
        case 0x2dbda8u: goto label_2dbda8;
        case 0x2dbdacu: goto label_2dbdac;
        case 0x2dbdb0u: goto label_2dbdb0;
        case 0x2dbdb4u: goto label_2dbdb4;
        case 0x2dbdb8u: goto label_2dbdb8;
        case 0x2dbdbcu: goto label_2dbdbc;
        case 0x2dbdc0u: goto label_2dbdc0;
        case 0x2dbdc4u: goto label_2dbdc4;
        case 0x2dbdc8u: goto label_2dbdc8;
        case 0x2dbdccu: goto label_2dbdcc;
        case 0x2dbdd0u: goto label_2dbdd0;
        case 0x2dbdd4u: goto label_2dbdd4;
        case 0x2dbdd8u: goto label_2dbdd8;
        case 0x2dbddcu: goto label_2dbddc;
        case 0x2dbde0u: goto label_2dbde0;
        case 0x2dbde4u: goto label_2dbde4;
        case 0x2dbde8u: goto label_2dbde8;
        case 0x2dbdecu: goto label_2dbdec;
        case 0x2dbdf0u: goto label_2dbdf0;
        case 0x2dbdf4u: goto label_2dbdf4;
        case 0x2dbdf8u: goto label_2dbdf8;
        case 0x2dbdfcu: goto label_2dbdfc;
        case 0x2dbe00u: goto label_2dbe00;
        case 0x2dbe04u: goto label_2dbe04;
        case 0x2dbe08u: goto label_2dbe08;
        case 0x2dbe0cu: goto label_2dbe0c;
        case 0x2dbe10u: goto label_2dbe10;
        case 0x2dbe14u: goto label_2dbe14;
        case 0x2dbe18u: goto label_2dbe18;
        case 0x2dbe1cu: goto label_2dbe1c;
        case 0x2dbe20u: goto label_2dbe20;
        case 0x2dbe24u: goto label_2dbe24;
        case 0x2dbe28u: goto label_2dbe28;
        case 0x2dbe2cu: goto label_2dbe2c;
        case 0x2dbe30u: goto label_2dbe30;
        case 0x2dbe34u: goto label_2dbe34;
        case 0x2dbe38u: goto label_2dbe38;
        case 0x2dbe3cu: goto label_2dbe3c;
        case 0x2dbe40u: goto label_2dbe40;
        case 0x2dbe44u: goto label_2dbe44;
        case 0x2dbe48u: goto label_2dbe48;
        case 0x2dbe4cu: goto label_2dbe4c;
        case 0x2dbe50u: goto label_2dbe50;
        case 0x2dbe54u: goto label_2dbe54;
        case 0x2dbe58u: goto label_2dbe58;
        case 0x2dbe5cu: goto label_2dbe5c;
        case 0x2dbe60u: goto label_2dbe60;
        case 0x2dbe64u: goto label_2dbe64;
        case 0x2dbe68u: goto label_2dbe68;
        case 0x2dbe6cu: goto label_2dbe6c;
        case 0x2dbe70u: goto label_2dbe70;
        case 0x2dbe74u: goto label_2dbe74;
        case 0x2dbe78u: goto label_2dbe78;
        case 0x2dbe7cu: goto label_2dbe7c;
        case 0x2dbe80u: goto label_2dbe80;
        case 0x2dbe84u: goto label_2dbe84;
        case 0x2dbe88u: goto label_2dbe88;
        case 0x2dbe8cu: goto label_2dbe8c;
        case 0x2dbe90u: goto label_2dbe90;
        case 0x2dbe94u: goto label_2dbe94;
        case 0x2dbe98u: goto label_2dbe98;
        case 0x2dbe9cu: goto label_2dbe9c;
        case 0x2dbea0u: goto label_2dbea0;
        case 0x2dbea4u: goto label_2dbea4;
        case 0x2dbea8u: goto label_2dbea8;
        case 0x2dbeacu: goto label_2dbeac;
        case 0x2dbeb0u: goto label_2dbeb0;
        case 0x2dbeb4u: goto label_2dbeb4;
        case 0x2dbeb8u: goto label_2dbeb8;
        case 0x2dbebcu: goto label_2dbebc;
        case 0x2dbec0u: goto label_2dbec0;
        case 0x2dbec4u: goto label_2dbec4;
        case 0x2dbec8u: goto label_2dbec8;
        case 0x2dbeccu: goto label_2dbecc;
        case 0x2dbed0u: goto label_2dbed0;
        case 0x2dbed4u: goto label_2dbed4;
        case 0x2dbed8u: goto label_2dbed8;
        case 0x2dbedcu: goto label_2dbedc;
        case 0x2dbee0u: goto label_2dbee0;
        case 0x2dbee4u: goto label_2dbee4;
        case 0x2dbee8u: goto label_2dbee8;
        case 0x2dbeecu: goto label_2dbeec;
        case 0x2dbef0u: goto label_2dbef0;
        case 0x2dbef4u: goto label_2dbef4;
        case 0x2dbef8u: goto label_2dbef8;
        case 0x2dbefcu: goto label_2dbefc;
        case 0x2dbf00u: goto label_2dbf00;
        case 0x2dbf04u: goto label_2dbf04;
        case 0x2dbf08u: goto label_2dbf08;
        case 0x2dbf0cu: goto label_2dbf0c;
        case 0x2dbf10u: goto label_2dbf10;
        case 0x2dbf14u: goto label_2dbf14;
        case 0x2dbf18u: goto label_2dbf18;
        case 0x2dbf1cu: goto label_2dbf1c;
        case 0x2dbf20u: goto label_2dbf20;
        case 0x2dbf24u: goto label_2dbf24;
        case 0x2dbf28u: goto label_2dbf28;
        case 0x2dbf2cu: goto label_2dbf2c;
        case 0x2dbf30u: goto label_2dbf30;
        case 0x2dbf34u: goto label_2dbf34;
        case 0x2dbf38u: goto label_2dbf38;
        case 0x2dbf3cu: goto label_2dbf3c;
        case 0x2dbf40u: goto label_2dbf40;
        case 0x2dbf44u: goto label_2dbf44;
        case 0x2dbf48u: goto label_2dbf48;
        case 0x2dbf4cu: goto label_2dbf4c;
        case 0x2dbf50u: goto label_2dbf50;
        case 0x2dbf54u: goto label_2dbf54;
        case 0x2dbf58u: goto label_2dbf58;
        case 0x2dbf5cu: goto label_2dbf5c;
        case 0x2dbf60u: goto label_2dbf60;
        case 0x2dbf64u: goto label_2dbf64;
        case 0x2dbf68u: goto label_2dbf68;
        case 0x2dbf6cu: goto label_2dbf6c;
        case 0x2dbf70u: goto label_2dbf70;
        case 0x2dbf74u: goto label_2dbf74;
        case 0x2dbf78u: goto label_2dbf78;
        case 0x2dbf7cu: goto label_2dbf7c;
        case 0x2dbf80u: goto label_2dbf80;
        case 0x2dbf84u: goto label_2dbf84;
        case 0x2dbf88u: goto label_2dbf88;
        case 0x2dbf8cu: goto label_2dbf8c;
        case 0x2dbf90u: goto label_2dbf90;
        case 0x2dbf94u: goto label_2dbf94;
        case 0x2dbf98u: goto label_2dbf98;
        case 0x2dbf9cu: goto label_2dbf9c;
        case 0x2dbfa0u: goto label_2dbfa0;
        case 0x2dbfa4u: goto label_2dbfa4;
        case 0x2dbfa8u: goto label_2dbfa8;
        case 0x2dbfacu: goto label_2dbfac;
        case 0x2dbfb0u: goto label_2dbfb0;
        case 0x2dbfb4u: goto label_2dbfb4;
        case 0x2dbfb8u: goto label_2dbfb8;
        case 0x2dbfbcu: goto label_2dbfbc;
        case 0x2dbfc0u: goto label_2dbfc0;
        case 0x2dbfc4u: goto label_2dbfc4;
        case 0x2dbfc8u: goto label_2dbfc8;
        case 0x2dbfccu: goto label_2dbfcc;
        case 0x2dbfd0u: goto label_2dbfd0;
        case 0x2dbfd4u: goto label_2dbfd4;
        case 0x2dbfd8u: goto label_2dbfd8;
        case 0x2dbfdcu: goto label_2dbfdc;
        case 0x2dbfe0u: goto label_2dbfe0;
        case 0x2dbfe4u: goto label_2dbfe4;
        case 0x2dbfe8u: goto label_2dbfe8;
        case 0x2dbfecu: goto label_2dbfec;
        case 0x2dbff0u: goto label_2dbff0;
        case 0x2dbff4u: goto label_2dbff4;
        case 0x2dbff8u: goto label_2dbff8;
        case 0x2dbffcu: goto label_2dbffc;
        case 0x2dc000u: goto label_2dc000;
        case 0x2dc004u: goto label_2dc004;
        case 0x2dc008u: goto label_2dc008;
        case 0x2dc00cu: goto label_2dc00c;
        case 0x2dc010u: goto label_2dc010;
        case 0x2dc014u: goto label_2dc014;
        case 0x2dc018u: goto label_2dc018;
        case 0x2dc01cu: goto label_2dc01c;
        case 0x2dc020u: goto label_2dc020;
        case 0x2dc024u: goto label_2dc024;
        case 0x2dc028u: goto label_2dc028;
        case 0x2dc02cu: goto label_2dc02c;
        case 0x2dc030u: goto label_2dc030;
        case 0x2dc034u: goto label_2dc034;
        case 0x2dc038u: goto label_2dc038;
        case 0x2dc03cu: goto label_2dc03c;
        case 0x2dc040u: goto label_2dc040;
        case 0x2dc044u: goto label_2dc044;
        case 0x2dc048u: goto label_2dc048;
        case 0x2dc04cu: goto label_2dc04c;
        case 0x2dc050u: goto label_2dc050;
        case 0x2dc054u: goto label_2dc054;
        case 0x2dc058u: goto label_2dc058;
        case 0x2dc05cu: goto label_2dc05c;
        case 0x2dc060u: goto label_2dc060;
        case 0x2dc064u: goto label_2dc064;
        case 0x2dc068u: goto label_2dc068;
        case 0x2dc06cu: goto label_2dc06c;
        case 0x2dc070u: goto label_2dc070;
        case 0x2dc074u: goto label_2dc074;
        case 0x2dc078u: goto label_2dc078;
        case 0x2dc07cu: goto label_2dc07c;
        case 0x2dc080u: goto label_2dc080;
        case 0x2dc084u: goto label_2dc084;
        case 0x2dc088u: goto label_2dc088;
        case 0x2dc08cu: goto label_2dc08c;
        case 0x2dc090u: goto label_2dc090;
        case 0x2dc094u: goto label_2dc094;
        case 0x2dc098u: goto label_2dc098;
        case 0x2dc09cu: goto label_2dc09c;
        case 0x2dc0a0u: goto label_2dc0a0;
        case 0x2dc0a4u: goto label_2dc0a4;
        case 0x2dc0a8u: goto label_2dc0a8;
        case 0x2dc0acu: goto label_2dc0ac;
        case 0x2dc0b0u: goto label_2dc0b0;
        case 0x2dc0b4u: goto label_2dc0b4;
        case 0x2dc0b8u: goto label_2dc0b8;
        case 0x2dc0bcu: goto label_2dc0bc;
        case 0x2dc0c0u: goto label_2dc0c0;
        case 0x2dc0c4u: goto label_2dc0c4;
        case 0x2dc0c8u: goto label_2dc0c8;
        case 0x2dc0ccu: goto label_2dc0cc;
        case 0x2dc0d0u: goto label_2dc0d0;
        case 0x2dc0d4u: goto label_2dc0d4;
        case 0x2dc0d8u: goto label_2dc0d8;
        case 0x2dc0dcu: goto label_2dc0dc;
        case 0x2dc0e0u: goto label_2dc0e0;
        case 0x2dc0e4u: goto label_2dc0e4;
        case 0x2dc0e8u: goto label_2dc0e8;
        case 0x2dc0ecu: goto label_2dc0ec;
        case 0x2dc0f0u: goto label_2dc0f0;
        case 0x2dc0f4u: goto label_2dc0f4;
        case 0x2dc0f8u: goto label_2dc0f8;
        case 0x2dc0fcu: goto label_2dc0fc;
        case 0x2dc100u: goto label_2dc100;
        case 0x2dc104u: goto label_2dc104;
        case 0x2dc108u: goto label_2dc108;
        case 0x2dc10cu: goto label_2dc10c;
        case 0x2dc110u: goto label_2dc110;
        case 0x2dc114u: goto label_2dc114;
        case 0x2dc118u: goto label_2dc118;
        case 0x2dc11cu: goto label_2dc11c;
        case 0x2dc120u: goto label_2dc120;
        case 0x2dc124u: goto label_2dc124;
        case 0x2dc128u: goto label_2dc128;
        case 0x2dc12cu: goto label_2dc12c;
        case 0x2dc130u: goto label_2dc130;
        case 0x2dc134u: goto label_2dc134;
        case 0x2dc138u: goto label_2dc138;
        case 0x2dc13cu: goto label_2dc13c;
        case 0x2dc140u: goto label_2dc140;
        case 0x2dc144u: goto label_2dc144;
        case 0x2dc148u: goto label_2dc148;
        case 0x2dc14cu: goto label_2dc14c;
        case 0x2dc150u: goto label_2dc150;
        case 0x2dc154u: goto label_2dc154;
        case 0x2dc158u: goto label_2dc158;
        case 0x2dc15cu: goto label_2dc15c;
        case 0x2dc160u: goto label_2dc160;
        case 0x2dc164u: goto label_2dc164;
        case 0x2dc168u: goto label_2dc168;
        case 0x2dc16cu: goto label_2dc16c;
        case 0x2dc170u: goto label_2dc170;
        case 0x2dc174u: goto label_2dc174;
        case 0x2dc178u: goto label_2dc178;
        case 0x2dc17cu: goto label_2dc17c;
        case 0x2dc180u: goto label_2dc180;
        case 0x2dc184u: goto label_2dc184;
        case 0x2dc188u: goto label_2dc188;
        case 0x2dc18cu: goto label_2dc18c;
        case 0x2dc190u: goto label_2dc190;
        case 0x2dc194u: goto label_2dc194;
        case 0x2dc198u: goto label_2dc198;
        case 0x2dc19cu: goto label_2dc19c;
        case 0x2dc1a0u: goto label_2dc1a0;
        case 0x2dc1a4u: goto label_2dc1a4;
        case 0x2dc1a8u: goto label_2dc1a8;
        case 0x2dc1acu: goto label_2dc1ac;
        case 0x2dc1b0u: goto label_2dc1b0;
        case 0x2dc1b4u: goto label_2dc1b4;
        case 0x2dc1b8u: goto label_2dc1b8;
        case 0x2dc1bcu: goto label_2dc1bc;
        case 0x2dc1c0u: goto label_2dc1c0;
        case 0x2dc1c4u: goto label_2dc1c4;
        case 0x2dc1c8u: goto label_2dc1c8;
        case 0x2dc1ccu: goto label_2dc1cc;
        case 0x2dc1d0u: goto label_2dc1d0;
        case 0x2dc1d4u: goto label_2dc1d4;
        case 0x2dc1d8u: goto label_2dc1d8;
        case 0x2dc1dcu: goto label_2dc1dc;
        case 0x2dc1e0u: goto label_2dc1e0;
        case 0x2dc1e4u: goto label_2dc1e4;
        case 0x2dc1e8u: goto label_2dc1e8;
        case 0x2dc1ecu: goto label_2dc1ec;
        case 0x2dc1f0u: goto label_2dc1f0;
        case 0x2dc1f4u: goto label_2dc1f4;
        case 0x2dc1f8u: goto label_2dc1f8;
        case 0x2dc1fcu: goto label_2dc1fc;
        case 0x2dc200u: goto label_2dc200;
        case 0x2dc204u: goto label_2dc204;
        case 0x2dc208u: goto label_2dc208;
        case 0x2dc20cu: goto label_2dc20c;
        case 0x2dc210u: goto label_2dc210;
        case 0x2dc214u: goto label_2dc214;
        case 0x2dc218u: goto label_2dc218;
        case 0x2dc21cu: goto label_2dc21c;
        case 0x2dc220u: goto label_2dc220;
        case 0x2dc224u: goto label_2dc224;
        case 0x2dc228u: goto label_2dc228;
        case 0x2dc22cu: goto label_2dc22c;
        default: break;
    }

    ctx->pc = 0x2dbda0u;

label_2dbda0:
    // 0x2dbda0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2dbda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2dbda4:
    // 0x2dbda4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dbda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2dbda8:
    // 0x2dbda8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2dbda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2dbdac:
    // 0x2dbdac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dbdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2dbdb0:
    // 0x2dbdb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dbdb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dbdb4:
    // 0x2dbdb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dbdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2dbdb8:
    // 0x2dbdb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dbdb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dbdbc:
    // 0x2dbdbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2dbdc0:
    // 0x2dbdc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2dbdc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2dbdc4:
    // 0x2dbdc4: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x2dbdc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2dbdc8:
    // 0x2dbdc8: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x2dbdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
label_2dbdcc:
    // 0x2dbdcc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2dbdccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2dbdd0:
    // 0x2dbdd0: 0xc0b7148  jal         func_2DC520
label_2dbdd4:
    if (ctx->pc == 0x2DBDD4u) {
        ctx->pc = 0x2DBDD4u;
            // 0x2dbdd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDD8u;
        goto label_2dbdd8;
    }
    ctx->pc = 0x2DBDD0u;
    SET_GPR_U32(ctx, 31, 0x2DBDD8u);
    ctx->pc = 0x2DBDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDD0u;
            // 0x2dbdd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC520u;
    if (runtime->hasFunction(0x2DC520u)) {
        auto targetFn = runtime->lookupFunction(0x2DC520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDD8u; }
        if (ctx->pc != 0x2DBDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC520_0x2dc520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDD8u; }
        if (ctx->pc != 0x2DBDD8u) { return; }
    }
    ctx->pc = 0x2DBDD8u;
label_2dbdd8:
    // 0x2dbdd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2dbddc:
    // 0x2dbddc: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x2dbddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_2dbde0:
    // 0x2dbde0: 0x24422e60  addiu       $v0, $v0, 0x2E60
    ctx->pc = 0x2dbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11872));
label_2dbde4:
    // 0x2dbde4: 0xc0b7124  jal         func_2DC490
label_2dbde8:
    if (ctx->pc == 0x2DBDE8u) {
        ctx->pc = 0x2DBDE8u;
            // 0x2dbde8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2DBDECu;
        goto label_2dbdec;
    }
    ctx->pc = 0x2DBDE4u;
    SET_GPR_U32(ctx, 31, 0x2DBDECu);
    ctx->pc = 0x2DBDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDE4u;
            // 0x2dbde8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC490u;
    if (runtime->hasFunction(0x2DC490u)) {
        auto targetFn = runtime->lookupFunction(0x2DC490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDECu; }
        if (ctx->pc != 0x2DBDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC490_0x2dc490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDECu; }
        if (ctx->pc != 0x2DBDECu) { return; }
    }
    ctx->pc = 0x2DBDECu;
label_2dbdec:
    // 0x2dbdec: 0xc0b70e8  jal         func_2DC3A0
label_2dbdf0:
    if (ctx->pc == 0x2DBDF0u) {
        ctx->pc = 0x2DBDF0u;
            // 0x2dbdf0: 0x260401fc  addiu       $a0, $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
        ctx->pc = 0x2DBDF4u;
        goto label_2dbdf4;
    }
    ctx->pc = 0x2DBDECu;
    SET_GPR_U32(ctx, 31, 0x2DBDF4u);
    ctx->pc = 0x2DBDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDECu;
            // 0x2dbdf0: 0x260401fc  addiu       $a0, $s0, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC3A0u;
    if (runtime->hasFunction(0x2DC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDF4u; }
        if (ctx->pc != 0x2DBDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC3A0_0x2dc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDF4u; }
        if (ctx->pc != 0x2DBDF4u) { return; }
    }
    ctx->pc = 0x2DBDF4u;
label_2dbdf4:
    // 0x2dbdf4: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x2dbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
label_2dbdf8:
    // 0x2dbdf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dbdfc:
    // 0x2dbdfc: 0xae6202b0  sw          $v0, 0x2B0($s3)
    ctx->pc = 0x2dbdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 688), GPR_U32(ctx, 2));
label_2dbe00:
    // 0x2dbe00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2dbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dbe04:
    // 0x2dbe04: 0xe67402b8  swc1        $f20, 0x2B8($s3)
    ctx->pc = 0x2dbe04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 696), bits); }
label_2dbe08:
    // 0x2dbe08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2dbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2dbe0c:
    // 0x2dbe0c: 0xae6002c0  sw          $zero, 0x2C0($s3)
    ctx->pc = 0x2dbe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 704), GPR_U32(ctx, 0));
label_2dbe10:
    // 0x2dbe10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dbe14:
    // 0x2dbe14: 0xa26002c5  sb          $zero, 0x2C5($s3)
    ctx->pc = 0x2dbe14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 709), (uint8_t)GPR_U32(ctx, 0));
label_2dbe18:
    // 0x2dbe18: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2dbe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2dbe1c:
    // 0x2dbe1c: 0xae6402c8  sw          $a0, 0x2C8($s3)
    ctx->pc = 0x2dbe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 712), GPR_U32(ctx, 4));
label_2dbe20:
    // 0x2dbe20: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2dbe20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2dbe24:
    // 0x2dbe24: 0xae6002cc  sw          $zero, 0x2CC($s3)
    ctx->pc = 0x2dbe24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 716), GPR_U32(ctx, 0));
label_2dbe28:
    // 0x2dbe28: 0x8c71e3e0  lw          $s1, -0x1C20($v1)
    ctx->pc = 0x2dbe28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_2dbe2c:
    // 0x2dbe2c: 0xa26002c4  sb          $zero, 0x2C4($s3)
    ctx->pc = 0x2dbe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 708), (uint8_t)GPR_U32(ctx, 0));
label_2dbe30:
    // 0x2dbe30: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2dbe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2dbe34:
    // 0x2dbe34: 0xc0a7a88  jal         func_29EA20
label_2dbe38:
    if (ctx->pc == 0x2DBE38u) {
        ctx->pc = 0x2DBE38u;
            // 0x2dbe38: 0x265002c0  addiu       $s0, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x2DBE3Cu;
        goto label_2dbe3c;
    }
    ctx->pc = 0x2DBE34u;
    SET_GPR_U32(ctx, 31, 0x2DBE3Cu);
    ctx->pc = 0x2DBE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE34u;
            // 0x2dbe38: 0x265002c0  addiu       $s0, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE3Cu; }
        if (ctx->pc != 0x2DBE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE3Cu; }
        if (ctx->pc != 0x2DBE3Cu) { return; }
    }
    ctx->pc = 0x2DBE3Cu;
label_2dbe3c:
    // 0x2dbe3c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2dbe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2dbe40:
    // 0x2dbe40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe44:
    // 0x2dbe44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2dbe48:
    if (ctx->pc == 0x2DBE48u) {
        ctx->pc = 0x2DBE48u;
            // 0x2dbe48: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DBE4Cu;
        goto label_2dbe4c;
    }
    ctx->pc = 0x2DBE44u;
    {
        const bool branch_taken_0x2dbe44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE44u;
            // 0x2dbe48: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe44) {
            ctx->pc = 0x2DBE58u;
            goto label_2dbe58;
        }
    }
    ctx->pc = 0x2DBE4Cu;
label_2dbe4c:
    // 0x2dbe4c: 0xc0827ac  jal         func_209EB0
label_2dbe50:
    if (ctx->pc == 0x2DBE50u) {
        ctx->pc = 0x2DBE50u;
            // 0x2dbe50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2DBE54u;
        goto label_2dbe54;
    }
    ctx->pc = 0x2DBE4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBE54u);
    ctx->pc = 0x2DBE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE4Cu;
            // 0x2dbe50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE54u; }
        if (ctx->pc != 0x2DBE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE54u; }
        if (ctx->pc != 0x2DBE54u) { return; }
    }
    ctx->pc = 0x2DBE54u;
label_2dbe54:
    // 0x2dbe54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe58:
    // 0x2dbe58: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x2dbe58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
label_2dbe5c:
    // 0x2dbe5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dbe60:
    // 0x2dbe60: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2dbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2dbe64:
    // 0x2dbe64: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x2dbe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2dbe68:
    // 0x2dbe68: 0xc0a7a88  jal         func_29EA20
label_2dbe6c:
    if (ctx->pc == 0x2DBE6Cu) {
        ctx->pc = 0x2DBE6Cu;
            // 0x2dbe6c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x2DBE70u;
        goto label_2dbe70;
    }
    ctx->pc = 0x2DBE68u;
    SET_GPR_U32(ctx, 31, 0x2DBE70u);
    ctx->pc = 0x2DBE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE68u;
            // 0x2dbe6c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE70u; }
        if (ctx->pc != 0x2DBE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE70u; }
        if (ctx->pc != 0x2DBE70u) { return; }
    }
    ctx->pc = 0x2DBE70u;
label_2dbe70:
    // 0x2dbe70: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x2dbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2dbe74:
    // 0x2dbe74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe78:
    // 0x2dbe78: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2dbe7c:
    if (ctx->pc == 0x2DBE7Cu) {
        ctx->pc = 0x2DBE7Cu;
            // 0x2dbe7c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DBE80u;
        goto label_2dbe80;
    }
    ctx->pc = 0x2DBE78u;
    {
        const bool branch_taken_0x2dbe78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE78u;
            // 0x2dbe7c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe78) {
            ctx->pc = 0x2DBE9Cu;
            goto label_2dbe9c;
        }
    }
    ctx->pc = 0x2DBE80u;
label_2dbe80:
    // 0x2dbe80: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x2dbe80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2dbe84:
    // 0x2dbe84: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2dbe84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_2dbe88:
    // 0x2dbe88: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x2dbe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_2dbe8c:
    // 0x2dbe8c: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x2dbe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_2dbe90:
    // 0x2dbe90: 0xc08afe0  jal         func_22BF80
label_2dbe94:
    if (ctx->pc == 0x2DBE94u) {
        ctx->pc = 0x2DBE94u;
            // 0x2dbe94: 0x34470004  ori         $a3, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x2DBE98u;
        goto label_2dbe98;
    }
    ctx->pc = 0x2DBE90u;
    SET_GPR_U32(ctx, 31, 0x2DBE98u);
    ctx->pc = 0x2DBE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE90u;
            // 0x2dbe94: 0x34470004  ori         $a3, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE98u; }
        if (ctx->pc != 0x2DBE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE98u; }
        if (ctx->pc != 0x2DBE98u) { return; }
    }
    ctx->pc = 0x2DBE98u;
label_2dbe98:
    // 0x2dbe98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe9c:
    // 0x2dbe9c: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x2dbe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
label_2dbea0:
    // 0x2dbea0: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2dbea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2dbea4:
    // 0x2dbea4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2dbea4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2dbea8:
    // 0x2dbea8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2dbeac:
    if (ctx->pc == 0x2DBEACu) {
        ctx->pc = 0x2DBEACu;
            // 0x2dbeac: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x2DBEB0u;
        goto label_2dbeb0;
    }
    ctx->pc = 0x2DBEA8u;
    {
        const bool branch_taken_0x2dbea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbea8) {
            ctx->pc = 0x2DBEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBEA8u;
            // 0x2dbeac: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DBEE8u;
            goto label_2dbee8;
        }
    }
    ctx->pc = 0x2DBEB0u;
label_2dbeb0:
    // 0x2dbeb0: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2dbeb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2dbeb4:
    // 0x2dbeb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dbeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2dbeb8:
    // 0x2dbeb8: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2dbeb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2dbebc:
    // 0x2dbebc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dbebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2dbec0:
    // 0x2dbec0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dbec0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2dbec4:
    // 0x2dbec4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2dbec8:
    if (ctx->pc == 0x2DBEC8u) {
        ctx->pc = 0x2DBECCu;
        goto label_2dbecc;
    }
    ctx->pc = 0x2DBEC4u;
    {
        const bool branch_taken_0x2dbec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbec4) {
            ctx->pc = 0x2DBEE4u;
            goto label_2dbee4;
        }
    }
    ctx->pc = 0x2DBECCu;
label_2dbecc:
    // 0x2dbecc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2dbed0:
    if (ctx->pc == 0x2DBED0u) {
        ctx->pc = 0x2DBED4u;
        goto label_2dbed4;
    }
    ctx->pc = 0x2DBECCu;
    {
        const bool branch_taken_0x2dbecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbecc) {
            ctx->pc = 0x2DBEE4u;
            goto label_2dbee4;
        }
    }
    ctx->pc = 0x2DBED4u;
label_2dbed4:
    // 0x2dbed4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dbed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dbed8:
    // 0x2dbed8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dbed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dbedc:
    // 0x2dbedc: 0x320f809  jalr        $t9
label_2dbee0:
    if (ctx->pc == 0x2DBEE0u) {
        ctx->pc = 0x2DBEE0u;
            // 0x2dbee0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DBEE4u;
        goto label_2dbee4;
    }
    ctx->pc = 0x2DBEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DBEE4u);
        ctx->pc = 0x2DBEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBEDCu;
            // 0x2dbee0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DBEE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEE4u; }
            if (ctx->pc != 0x2DBEE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2DBEE4u;
label_2dbee4:
    // 0x2dbee4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2dbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2dbee8:
    // 0x2dbee8: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x2dbee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
label_2dbeec:
    // 0x2dbeec: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2dbeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2dbef0:
    // 0x2dbef0: 0xc08c798  jal         func_231E60
label_2dbef4:
    if (ctx->pc == 0x2DBEF4u) {
        ctx->pc = 0x2DBEF4u;
            // 0x2dbef4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2DBEF8u;
        goto label_2dbef8;
    }
    ctx->pc = 0x2DBEF0u;
    SET_GPR_U32(ctx, 31, 0x2DBEF8u);
    ctx->pc = 0x2DBEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBEF0u;
            // 0x2dbef4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEF8u; }
        if (ctx->pc != 0x2DBEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEF8u; }
        if (ctx->pc != 0x2DBEF8u) { return; }
    }
    ctx->pc = 0x2DBEF8u;
label_2dbef8:
    // 0x2dbef8: 0xc08d414  jal         func_235050
label_2dbefc:
    if (ctx->pc == 0x2DBEFCu) {
        ctx->pc = 0x2DBEFCu;
            // 0x2dbefc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x2DBF00u;
        goto label_2dbf00;
    }
    ctx->pc = 0x2DBEF8u;
    SET_GPR_U32(ctx, 31, 0x2DBF00u);
    ctx->pc = 0x2DBEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBEF8u;
            // 0x2dbefc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF00u; }
        if (ctx->pc != 0x2DBF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF00u; }
        if (ctx->pc != 0x2DBF00u) { return; }
    }
    ctx->pc = 0x2DBF00u;
label_2dbf00:
    // 0x2dbf00: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2dbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_2dbf04:
    // 0x2dbf04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2dbf08:
    // 0x2dbf08: 0xae6202b4  sw          $v0, 0x2B4($s3)
    ctx->pc = 0x2dbf08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 692), GPR_U32(ctx, 2));
label_2dbf0c:
    // 0x2dbf0c: 0xc0b6e68  jal         func_2DB9A0
label_2dbf10:
    if (ctx->pc == 0x2DBF10u) {
        ctx->pc = 0x2DBF10u;
            // 0x2dbf10: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x2DBF14u;
        goto label_2dbf14;
    }
    ctx->pc = 0x2DBF0Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF14u);
    ctx->pc = 0x2DBF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF0Cu;
            // 0x2dbf10: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF14u; }
        if (ctx->pc != 0x2DBF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF14u; }
        if (ctx->pc != 0x2DBF14u) { return; }
    }
    ctx->pc = 0x2DBF14u;
label_2dbf14:
    // 0x2dbf14: 0xc0b6e68  jal         func_2DB9A0
label_2dbf18:
    if (ctx->pc == 0x2DBF18u) {
        ctx->pc = 0x2DBF18u;
            // 0x2dbf18: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2DBF1Cu;
        goto label_2dbf1c;
    }
    ctx->pc = 0x2DBF14u;
    SET_GPR_U32(ctx, 31, 0x2DBF1Cu);
    ctx->pc = 0x2DBF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF14u;
            // 0x2dbf18: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF1Cu; }
        if (ctx->pc != 0x2DBF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF1Cu; }
        if (ctx->pc != 0x2DBF1Cu) { return; }
    }
    ctx->pc = 0x2DBF1Cu;
label_2dbf1c:
    // 0x2dbf1c: 0xc0b6e68  jal         func_2DB9A0
label_2dbf20:
    if (ctx->pc == 0x2DBF20u) {
        ctx->pc = 0x2DBF20u;
            // 0x2dbf20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2DBF24u;
        goto label_2dbf24;
    }
    ctx->pc = 0x2DBF1Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF24u);
    ctx->pc = 0x2DBF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF1Cu;
            // 0x2dbf20: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF24u; }
        if (ctx->pc != 0x2DBF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF24u; }
        if (ctx->pc != 0x2DBF24u) { return; }
    }
    ctx->pc = 0x2DBF24u;
label_2dbf24:
    // 0x2dbf24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dbf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dbf28:
    // 0x2dbf28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dbf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2dbf2c:
    // 0x2dbf2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2dbf2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2dbf30:
    // 0x2dbf30: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2dbf30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2dbf34:
    // 0x2dbf34: 0xc0b6e3c  jal         func_2DB8F0
label_2dbf38:
    if (ctx->pc == 0x2DBF38u) {
        ctx->pc = 0x2DBF38u;
            // 0x2dbf38: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DBF3Cu;
        goto label_2dbf3c;
    }
    ctx->pc = 0x2DBF34u;
    SET_GPR_U32(ctx, 31, 0x2DBF3Cu);
    ctx->pc = 0x2DBF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF34u;
            // 0x2dbf38: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF3Cu; }
        if (ctx->pc != 0x2DBF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF3Cu; }
        if (ctx->pc != 0x2DBF3Cu) { return; }
    }
    ctx->pc = 0x2DBF3Cu;
label_2dbf3c:
    // 0x2dbf3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dbf3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dbf40:
    // 0x2dbf40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2dbf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2dbf44:
    // 0x2dbf44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2dbf44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2dbf48:
    // 0x2dbf48: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2dbf48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2dbf4c:
    // 0x2dbf4c: 0xc0b6e3c  jal         func_2DB8F0
label_2dbf50:
    if (ctx->pc == 0x2DBF50u) {
        ctx->pc = 0x2DBF50u;
            // 0x2dbf50: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DBF54u;
        goto label_2dbf54;
    }
    ctx->pc = 0x2DBF4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF54u);
    ctx->pc = 0x2DBF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF4Cu;
            // 0x2dbf50: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF54u; }
        if (ctx->pc != 0x2DBF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF54u; }
        if (ctx->pc != 0x2DBF54u) { return; }
    }
    ctx->pc = 0x2DBF54u;
label_2dbf54:
    // 0x2dbf54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dbf58:
    // 0x2dbf58: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2dbf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2dbf5c:
    // 0x2dbf5c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2dbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_2dbf60:
    // 0x2dbf60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dbf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dbf64:
    // 0x2dbf64: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2dbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2dbf68:
    // 0x2dbf68: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2dbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_2dbf6c:
    // 0x2dbf6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2dbf6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dbf70:
    // 0x2dbf70: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2dbf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2dbf74:
    // 0x2dbf74: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x2dbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_2dbf78:
    // 0x2dbf78: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2dbf78u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2dbf7c:
    // 0x2dbf7c: 0xc0b6e3c  jal         func_2DB8F0
label_2dbf80:
    if (ctx->pc == 0x2DBF80u) {
        ctx->pc = 0x2DBF80u;
            // 0x2dbf80: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DBF84u;
        goto label_2dbf84;
    }
    ctx->pc = 0x2DBF7Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF84u);
    ctx->pc = 0x2DBF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF7Cu;
            // 0x2dbf80: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF84u; }
        if (ctx->pc != 0x2DBF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBF84u; }
        if (ctx->pc != 0x2DBF84u) { return; }
    }
    ctx->pc = 0x2DBF84u;
label_2dbf84:
    // 0x2dbf84: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2dbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2dbf88:
    // 0x2dbf88: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2dbf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2dbf8c:
    // 0x2dbf8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2dbf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2dbf90:
    // 0x2dbf90: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2dbf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_2dbf94:
    // 0x2dbf94: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2dbf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2dbf98:
    // 0x2dbf98: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2dbf98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2dbf9c:
    // 0x2dbf9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dbfa0:
    // 0x2dbfa0: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2dbfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_2dbfa4:
    // 0x2dbfa4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2dbfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_2dbfa8:
    // 0x2dbfa8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2dbfac:
    // 0x2dbfac: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2dbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_2dbfb0:
    // 0x2dbfb0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2dbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2dbfb4:
    // 0x2dbfb4: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x2dbfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_2dbfb8:
    // 0x2dbfb8: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2dbfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_2dbfbc:
    // 0x2dbfbc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2dbfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_2dbfc0:
    // 0x2dbfc0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2dbfc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2dbfc4:
    // 0x2dbfc4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2dbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_2dbfc8:
    // 0x2dbfc8: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2dbfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_2dbfcc:
    // 0x2dbfcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dbfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2dbfd0:
    // 0x2dbfd0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2dbfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2dbfd4:
    // 0x2dbfd4: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2dbfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_2dbfd8:
    // 0x2dbfd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2dbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dbfdc:
    // 0x2dbfdc: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2dbfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_2dbfe0:
    // 0x2dbfe0: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x2dbfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
label_2dbfe4:
    // 0x2dbfe4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2dbfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_2dbfe8:
    // 0x2dbfe8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2dbfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dbfec:
    // 0x2dbfec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2dbfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dbff0:
    // 0x2dbff0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2dbff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dbff4:
    // 0x2dbff4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2dbff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2dbff8:
    // 0x2dbff8: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x2dbff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_2dbffc:
    // 0x2dbffc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2dbffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2dc000:
    // 0x2dc000: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2dc000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_2dc004:
    // 0x2dc004: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2dc004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2dc008:
    // 0x2dc008: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2dc008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_2dc00c:
    // 0x2dc00c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2dc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2dc010:
    // 0x2dc010: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2dc010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc014:
    // 0x2dc014: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2dc014u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2dc018:
    // 0x2dc018: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2dc018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2dc01c:
    // 0x2dc01c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2dc01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc020:
    // 0x2dc020: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dc020u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2dc024:
    // 0x2dc024: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2dc024u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2dc028:
    // 0x2dc028: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2dc028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2dc02c:
    // 0x2dc02c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2dc02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc030:
    // 0x2dc030: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x2dc030u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_2dc034:
    // 0x2dc034: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dc034u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2dc038:
    // 0x2dc038: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2dc038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2dc03c:
    // 0x2dc03c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2dc03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc040:
    // 0x2dc040: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x2dc040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_2dc044:
    // 0x2dc044: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x2dc044u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dc048:
    // 0x2dc048: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2dc048u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2dc04c:
    // 0x2dc04c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2dc050:
    if (ctx->pc == 0x2DC050u) {
        ctx->pc = 0x2DC050u;
            // 0x2dc050: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x2DC054u;
        goto label_2dc054;
    }
    ctx->pc = 0x2DC04Cu;
    {
        const bool branch_taken_0x2dc04c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC04Cu;
            // 0x2dc050: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc04c) {
            ctx->pc = 0x2DC06Cu;
            goto label_2dc06c;
        }
    }
    ctx->pc = 0x2DC054u;
label_2dc054:
    // 0x2dc054: 0x0  nop
    ctx->pc = 0x2dc054u;
    // NOP
label_2dc058:
    // 0x2dc058: 0x0  nop
    ctx->pc = 0x2dc058u;
    // NOP
label_2dc05c:
    // 0x2dc05c: 0x46001916  rsqrt.s     $f4, $f3, $f0
    ctx->pc = 0x2dc05cu;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[3]);
label_2dc060:
    // 0x2dc060: 0x0  nop
    ctx->pc = 0x2dc060u;
    // NOP
label_2dc064:
    // 0x2dc064: 0x0  nop
    ctx->pc = 0x2dc064u;
    // NOP
label_2dc068:
    // 0x2dc068: 0x0  nop
    ctx->pc = 0x2dc068u;
    // NOP
label_2dc06c:
    // 0x2dc06c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2dc06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc070:
    // 0x2dc070: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dc070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dc074:
    // 0x2dc074: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2dc074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dc078:
    // 0x2dc078: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2dc078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2dc07c:
    // 0x2dc07c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2dc07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc080:
    // 0x2dc080: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2dc080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2dc084:
    // 0x2dc084: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x2dc084u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2dc088:
    // 0x2dc088: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2dc088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2dc08c:
    // 0x2dc08c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2dc08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dc090:
    // 0x2dc090: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2dc090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2dc094:
    // 0x2dc094: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2dc094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2dc098:
    // 0x2dc098: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2dc098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2dc09c:
    // 0x2dc09c: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2dc09cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2dc0a0:
    // 0x2dc0a0: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2dc0a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2dc0a4:
    // 0x2dc0a4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2dc0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2dc0a8:
    // 0x2dc0a8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2dc0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2dc0ac:
    // 0x2dc0ac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2dc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2dc0b0:
    // 0x2dc0b0: 0xc0a7a88  jal         func_29EA20
label_2dc0b4:
    if (ctx->pc == 0x2DC0B4u) {
        ctx->pc = 0x2DC0B4u;
            // 0x2dc0b4: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x2DC0B8u;
        goto label_2dc0b8;
    }
    ctx->pc = 0x2DC0B0u;
    SET_GPR_U32(ctx, 31, 0x2DC0B8u);
    ctx->pc = 0x2DC0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0B0u;
            // 0x2dc0b4: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0B8u; }
        if (ctx->pc != 0x2DC0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0B8u; }
        if (ctx->pc != 0x2DC0B8u) { return; }
    }
    ctx->pc = 0x2DC0B8u;
label_2dc0b8:
    // 0x2dc0b8: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x2dc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2dc0bc:
    // 0x2dc0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0c0:
    // 0x2dc0c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2dc0c4:
    if (ctx->pc == 0x2DC0C4u) {
        ctx->pc = 0x2DC0C4u;
            // 0x2dc0c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DC0C8u;
        goto label_2dc0c8;
    }
    ctx->pc = 0x2DC0C0u;
    {
        const bool branch_taken_0x2dc0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0C0u;
            // 0x2dc0c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0c0) {
            ctx->pc = 0x2DC0D4u;
            goto label_2dc0d4;
        }
    }
    ctx->pc = 0x2DC0C8u;
label_2dc0c8:
    // 0x2dc0c8: 0xc0a46e0  jal         func_291B80
label_2dc0cc:
    if (ctx->pc == 0x2DC0CCu) {
        ctx->pc = 0x2DC0CCu;
            // 0x2dc0cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2DC0D0u;
        goto label_2dc0d0;
    }
    ctx->pc = 0x2DC0C8u;
    SET_GPR_U32(ctx, 31, 0x2DC0D0u);
    ctx->pc = 0x2DC0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0C8u;
            // 0x2dc0cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291B80u;
    if (runtime->hasFunction(0x291B80u)) {
        auto targetFn = runtime->lookupFunction(0x291B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0D0u; }
        if (ctx->pc != 0x2DC0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291B80_0x291b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0D0u; }
        if (ctx->pc != 0x2DC0D0u) { return; }
    }
    ctx->pc = 0x2DC0D0u;
label_2dc0d0:
    // 0x2dc0d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0d4:
    // 0x2dc0d4: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x2dc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_2dc0d8:
    // 0x2dc0d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0dc:
    // 0x2dc0dc: 0x26640290  addiu       $a0, $s3, 0x290
    ctx->pc = 0x2dc0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_2dc0e0:
    // 0x2dc0e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2dc0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dc0e4:
    // 0x2dc0e4: 0xc04a576  jal         func_1295D8
label_2dc0e8:
    if (ctx->pc == 0x2DC0E8u) {
        ctx->pc = 0x2DC0E8u;
            // 0x2dc0e8: 0xae720278  sw          $s2, 0x278($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 18));
        ctx->pc = 0x2DC0ECu;
        goto label_2dc0ec;
    }
    ctx->pc = 0x2DC0E4u;
    SET_GPR_U32(ctx, 31, 0x2DC0ECu);
    ctx->pc = 0x2DC0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0E4u;
            // 0x2dc0e8: 0xae720278  sw          $s2, 0x278($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0ECu; }
        if (ctx->pc != 0x2DC0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0ECu; }
        if (ctx->pc != 0x2DC0ECu) { return; }
    }
    ctx->pc = 0x2DC0ECu;
label_2dc0ec:
    // 0x2dc0ec: 0x26640280  addiu       $a0, $s3, 0x280
    ctx->pc = 0x2dc0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_2dc0f0:
    // 0x2dc0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0f4:
    // 0x2dc0f4: 0xc04a576  jal         func_1295D8
label_2dc0f8:
    if (ctx->pc == 0x2DC0F8u) {
        ctx->pc = 0x2DC0F8u;
            // 0x2dc0f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2DC0FCu;
        goto label_2dc0fc;
    }
    ctx->pc = 0x2DC0F4u;
    SET_GPR_U32(ctx, 31, 0x2DC0FCu);
    ctx->pc = 0x2DC0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC0F4u;
            // 0x2dc0f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0FCu; }
        if (ctx->pc != 0x2DC0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC0FCu; }
        if (ctx->pc != 0x2DC0FCu) { return; }
    }
    ctx->pc = 0x2DC0FCu;
label_2dc0fc:
    // 0x2dc0fc: 0x266402a0  addiu       $a0, $s3, 0x2A0
    ctx->pc = 0x2dc0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
label_2dc100:
    // 0x2dc100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc104:
    // 0x2dc104: 0xc04a576  jal         func_1295D8
label_2dc108:
    if (ctx->pc == 0x2DC108u) {
        ctx->pc = 0x2DC108u;
            // 0x2dc108: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2DC10Cu;
        goto label_2dc10c;
    }
    ctx->pc = 0x2DC104u;
    SET_GPR_U32(ctx, 31, 0x2DC10Cu);
    ctx->pc = 0x2DC108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC104u;
            // 0x2dc108: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC10Cu; }
        if (ctx->pc != 0x2DC10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC10Cu; }
        if (ctx->pc != 0x2DC10Cu) { return; }
    }
    ctx->pc = 0x2DC10Cu;
label_2dc10c:
    // 0x2dc10c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dc10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dc110:
    // 0x2dc110: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dc110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc114:
    // 0x2dc114: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2dc114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dc118:
    // 0x2dc118: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2dc118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dc11c:
    // 0x2dc11c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dc11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dc120:
    // 0x2dc120: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dc120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc124:
    // 0x2dc124: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc128:
    // 0x2dc128: 0x3e00008  jr          $ra
label_2dc12c:
    if (ctx->pc == 0x2DC12Cu) {
        ctx->pc = 0x2DC12Cu;
            // 0x2dc12c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2DC130u;
        goto label_2dc130;
    }
    ctx->pc = 0x2DC128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC128u;
            // 0x2dc12c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC130u;
label_2dc130:
    // 0x2dc130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2dc134:
    // 0x2dc134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dc134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2dc138:
    // 0x2dc138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dc13c:
    // 0x2dc13c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dc140:
    // 0x2dc140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dc144:
    // 0x2dc144: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_2dc148:
    if (ctx->pc == 0x2DC148u) {
        ctx->pc = 0x2DC148u;
            // 0x2dc148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC14Cu;
        goto label_2dc14c;
    }
    ctx->pc = 0x2DC144u;
    {
        const bool branch_taken_0x2dc144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC144u;
            // 0x2dc148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc144) {
            ctx->pc = 0x2DC214u;
            goto label_2dc214;
        }
    }
    ctx->pc = 0x2DC14Cu;
label_2dc14c:
    // 0x2dc14c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2dc150:
    // 0x2dc150: 0x262401fc  addiu       $a0, $s1, 0x1FC
    ctx->pc = 0x2dc150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 508));
label_2dc154:
    // 0x2dc154: 0x24422e60  addiu       $v0, $v0, 0x2E60
    ctx->pc = 0x2dc154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11872));
label_2dc158:
    // 0x2dc158: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2dc15c:
    if (ctx->pc == 0x2DC15Cu) {
        ctx->pc = 0x2DC15Cu;
            // 0x2dc15c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2DC160u;
        goto label_2dc160;
    }
    ctx->pc = 0x2DC158u;
    {
        const bool branch_taken_0x2dc158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC158u;
            // 0x2dc15c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc158) {
            ctx->pc = 0x2DC174u;
            goto label_2dc174;
        }
    }
    ctx->pc = 0x2DC160u;
label_2dc160:
    // 0x2dc160: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2dc160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2dc164:
    // 0x2dc164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc168:
    // 0x2dc168: 0x2442a078  addiu       $v0, $v0, -0x5F88
    ctx->pc = 0x2dc168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942840));
label_2dc16c:
    // 0x2dc16c: 0xc0b708c  jal         func_2DC230
label_2dc170:
    if (ctx->pc == 0x2DC170u) {
        ctx->pc = 0x2DC170u;
            // 0x2dc170: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->pc = 0x2DC174u;
        goto label_2dc174;
    }
    ctx->pc = 0x2DC16Cu;
    SET_GPR_U32(ctx, 31, 0x2DC174u);
    ctx->pc = 0x2DC170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC16Cu;
            // 0x2dc170: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (runtime->hasFunction(0x2DC230u)) {
        auto targetFn = runtime->lookupFunction(0x2DC230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC174u; }
        if (ctx->pc != 0x2DC174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC230_0x2dc230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC174u; }
        if (ctx->pc != 0x2DC174u) { return; }
    }
    ctx->pc = 0x2DC174u;
label_2dc174:
    // 0x2dc174: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x2dc174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_2dc178:
    // 0x2dc178: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2dc17c:
    if (ctx->pc == 0x2DC17Cu) {
        ctx->pc = 0x2DC180u;
        goto label_2dc180;
    }
    ctx->pc = 0x2DC178u;
    {
        const bool branch_taken_0x2dc178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc178) {
            ctx->pc = 0x2DC194u;
            goto label_2dc194;
        }
    }
    ctx->pc = 0x2DC180u;
label_2dc180:
    // 0x2dc180: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2dc180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2dc184:
    // 0x2dc184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc188:
    // 0x2dc188: 0x2442a088  addiu       $v0, $v0, -0x5F78
    ctx->pc = 0x2dc188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942856));
label_2dc18c:
    // 0x2dc18c: 0xc0b708c  jal         func_2DC230
label_2dc190:
    if (ctx->pc == 0x2DC190u) {
        ctx->pc = 0x2DC190u;
            // 0x2dc190: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
        ctx->pc = 0x2DC194u;
        goto label_2dc194;
    }
    ctx->pc = 0x2DC18Cu;
    SET_GPR_U32(ctx, 31, 0x2DC194u);
    ctx->pc = 0x2DC190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC18Cu;
            // 0x2dc190: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (runtime->hasFunction(0x2DC230u)) {
        auto targetFn = runtime->lookupFunction(0x2DC230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC194u; }
        if (ctx->pc != 0x2DC194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC230_0x2dc230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC194u; }
        if (ctx->pc != 0x2DC194u) { return; }
    }
    ctx->pc = 0x2DC194u;
label_2dc194:
    // 0x2dc194: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_2dc198:
    if (ctx->pc == 0x2DC198u) {
        ctx->pc = 0x2DC198u;
            // 0x2dc198: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2DC19Cu;
        goto label_2dc19c;
    }
    ctx->pc = 0x2DC194u;
    {
        const bool branch_taken_0x2dc194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc194) {
            ctx->pc = 0x2DC198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC194u;
            // 0x2dc198: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1C4u;
            goto label_2dc1c4;
        }
    }
    ctx->pc = 0x2DC19Cu;
label_2dc19c:
    // 0x2dc19c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dc19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2dc1a0:
    // 0x2dc1a0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2dc1a4:
    // 0x2dc1a4: 0x2442dfc0  addiu       $v0, $v0, -0x2040
    ctx->pc = 0x2dc1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959040));
label_2dc1a8:
    // 0x2dc1a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dc1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dc1ac:
    // 0x2dc1ac: 0xc07f8cc  jal         func_1FE330
label_2dc1b0:
    if (ctx->pc == 0x2DC1B0u) {
        ctx->pc = 0x2DC1B0u;
            // 0x2dc1b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2DC1B4u;
        goto label_2dc1b4;
    }
    ctx->pc = 0x2DC1ACu;
    SET_GPR_U32(ctx, 31, 0x2DC1B4u);
    ctx->pc = 0x2DC1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC1ACu;
            // 0x2dc1b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE330u;
    if (runtime->hasFunction(0x1FE330u)) {
        auto targetFn = runtime->lookupFunction(0x1FE330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1B4u; }
        if (ctx->pc != 0x2DC1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE330_0x1fe330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1B4u; }
        if (ctx->pc != 0x2DC1B4u) { return; }
    }
    ctx->pc = 0x2DC1B4u;
label_2dc1b4:
    // 0x2dc1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc1b8:
    // 0x2dc1b8: 0xc0794dc  jal         func_1E5370
label_2dc1bc:
    if (ctx->pc == 0x2DC1BCu) {
        ctx->pc = 0x2DC1BCu;
            // 0x2dc1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1C0u;
        goto label_2dc1c0;
    }
    ctx->pc = 0x2DC1B8u;
    SET_GPR_U32(ctx, 31, 0x2DC1C0u);
    ctx->pc = 0x2DC1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC1B8u;
            // 0x2dc1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5370u;
    if (runtime->hasFunction(0x1E5370u)) {
        auto targetFn = runtime->lookupFunction(0x1E5370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1C0u; }
        if (ctx->pc != 0x2DC1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5370_0x1e5370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1C0u; }
        if (ctx->pc != 0x2DC1C0u) { return; }
    }
    ctx->pc = 0x2DC1C0u;
label_2dc1c0:
    // 0x2dc1c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dc1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2dc1c4:
    // 0x2dc1c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dc1c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2dc1c8:
    // 0x2dc1c8: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_2dc1cc:
    if (ctx->pc == 0x2DC1CCu) {
        ctx->pc = 0x2DC1CCu;
            // 0x2dc1cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1D0u;
        goto label_2dc1d0;
    }
    ctx->pc = 0x2DC1C8u;
    {
        const bool branch_taken_0x2dc1c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dc1c8) {
            ctx->pc = 0x2DC1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC1C8u;
            // 0x2dc1cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC218u;
            goto label_2dc218;
        }
    }
    ctx->pc = 0x2DC1D0u;
label_2dc1d0:
    // 0x2dc1d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dc1d4:
    // 0x2dc1d4: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x2dc1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2dc1d8:
    // 0x2dc1d8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x2dc1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2dc1dc:
    // 0x2dc1dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2dc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2dc1e0:
    // 0x2dc1e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2dc1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dc1e4:
    // 0x2dc1e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2dc1e8:
    if (ctx->pc == 0x2DC1E8u) {
        ctx->pc = 0x2DC1E8u;
            // 0x2dc1e8: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->pc = 0x2DC1ECu;
        goto label_2dc1ec;
    }
    ctx->pc = 0x2DC1E4u;
    {
        const bool branch_taken_0x2dc1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc1e4) {
            ctx->pc = 0x2DC1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC1E4u;
            // 0x2dc1e8: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC200u;
            goto label_2dc200;
        }
    }
    ctx->pc = 0x2DC1ECu;
label_2dc1ec:
    // 0x2dc1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dc1f0:
    // 0x2dc1f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2dc1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2dc1f4:
    // 0x2dc1f4: 0xc0a79ec  jal         func_29E7B0
label_2dc1f8:
    if (ctx->pc == 0x2DC1F8u) {
        ctx->pc = 0x2DC1F8u;
            // 0x2dc1f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1FCu;
        goto label_2dc1fc;
    }
    ctx->pc = 0x2DC1F4u;
    SET_GPR_U32(ctx, 31, 0x2DC1FCu);
    ctx->pc = 0x2DC1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC1F4u;
            // 0x2dc1f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1FCu; }
        if (ctx->pc != 0x2DC1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC1FCu; }
        if (ctx->pc != 0x2DC1FCu) { return; }
    }
    ctx->pc = 0x2DC1FCu;
label_2dc1fc:
    // 0x2dc1fc: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2dc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2dc200:
    // 0x2dc200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dc204:
    // 0x2dc204: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2dc204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_2dc208:
    // 0x2dc208: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2dc208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2dc20c:
    // 0x2dc20c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2dc20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2dc210:
    // 0x2dc210: 0xae110084  sw          $s1, 0x84($s0)
    ctx->pc = 0x2dc210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
label_2dc214:
    // 0x2dc214: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dc214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc218:
    // 0x2dc218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dc218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc21c:
    // 0x2dc21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc220:
    // 0x2dc220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc224:
    // 0x2dc224: 0x3e00008  jr          $ra
label_2dc228:
    if (ctx->pc == 0x2DC228u) {
        ctx->pc = 0x2DC228u;
            // 0x2dc228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2DC22Cu;
        goto label_2dc22c;
    }
    ctx->pc = 0x2DC224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC224u;
            // 0x2dc228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC22Cu;
label_2dc22c:
    // 0x2dc22c: 0x0  nop
    ctx->pc = 0x2dc22cu;
    // NOP
}
