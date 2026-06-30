#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033C040
// Address: 0x33c040 - 0x33c390
void sub_0033C040_0x33c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C040_0x33c040");
#endif

    switch (ctx->pc) {
        case 0x33c040u: goto label_33c040;
        case 0x33c044u: goto label_33c044;
        case 0x33c048u: goto label_33c048;
        case 0x33c04cu: goto label_33c04c;
        case 0x33c050u: goto label_33c050;
        case 0x33c054u: goto label_33c054;
        case 0x33c058u: goto label_33c058;
        case 0x33c05cu: goto label_33c05c;
        case 0x33c060u: goto label_33c060;
        case 0x33c064u: goto label_33c064;
        case 0x33c068u: goto label_33c068;
        case 0x33c06cu: goto label_33c06c;
        case 0x33c070u: goto label_33c070;
        case 0x33c074u: goto label_33c074;
        case 0x33c078u: goto label_33c078;
        case 0x33c07cu: goto label_33c07c;
        case 0x33c080u: goto label_33c080;
        case 0x33c084u: goto label_33c084;
        case 0x33c088u: goto label_33c088;
        case 0x33c08cu: goto label_33c08c;
        case 0x33c090u: goto label_33c090;
        case 0x33c094u: goto label_33c094;
        case 0x33c098u: goto label_33c098;
        case 0x33c09cu: goto label_33c09c;
        case 0x33c0a0u: goto label_33c0a0;
        case 0x33c0a4u: goto label_33c0a4;
        case 0x33c0a8u: goto label_33c0a8;
        case 0x33c0acu: goto label_33c0ac;
        case 0x33c0b0u: goto label_33c0b0;
        case 0x33c0b4u: goto label_33c0b4;
        case 0x33c0b8u: goto label_33c0b8;
        case 0x33c0bcu: goto label_33c0bc;
        case 0x33c0c0u: goto label_33c0c0;
        case 0x33c0c4u: goto label_33c0c4;
        case 0x33c0c8u: goto label_33c0c8;
        case 0x33c0ccu: goto label_33c0cc;
        case 0x33c0d0u: goto label_33c0d0;
        case 0x33c0d4u: goto label_33c0d4;
        case 0x33c0d8u: goto label_33c0d8;
        case 0x33c0dcu: goto label_33c0dc;
        case 0x33c0e0u: goto label_33c0e0;
        case 0x33c0e4u: goto label_33c0e4;
        case 0x33c0e8u: goto label_33c0e8;
        case 0x33c0ecu: goto label_33c0ec;
        case 0x33c0f0u: goto label_33c0f0;
        case 0x33c0f4u: goto label_33c0f4;
        case 0x33c0f8u: goto label_33c0f8;
        case 0x33c0fcu: goto label_33c0fc;
        case 0x33c100u: goto label_33c100;
        case 0x33c104u: goto label_33c104;
        case 0x33c108u: goto label_33c108;
        case 0x33c10cu: goto label_33c10c;
        case 0x33c110u: goto label_33c110;
        case 0x33c114u: goto label_33c114;
        case 0x33c118u: goto label_33c118;
        case 0x33c11cu: goto label_33c11c;
        case 0x33c120u: goto label_33c120;
        case 0x33c124u: goto label_33c124;
        case 0x33c128u: goto label_33c128;
        case 0x33c12cu: goto label_33c12c;
        case 0x33c130u: goto label_33c130;
        case 0x33c134u: goto label_33c134;
        case 0x33c138u: goto label_33c138;
        case 0x33c13cu: goto label_33c13c;
        case 0x33c140u: goto label_33c140;
        case 0x33c144u: goto label_33c144;
        case 0x33c148u: goto label_33c148;
        case 0x33c14cu: goto label_33c14c;
        case 0x33c150u: goto label_33c150;
        case 0x33c154u: goto label_33c154;
        case 0x33c158u: goto label_33c158;
        case 0x33c15cu: goto label_33c15c;
        case 0x33c160u: goto label_33c160;
        case 0x33c164u: goto label_33c164;
        case 0x33c168u: goto label_33c168;
        case 0x33c16cu: goto label_33c16c;
        case 0x33c170u: goto label_33c170;
        case 0x33c174u: goto label_33c174;
        case 0x33c178u: goto label_33c178;
        case 0x33c17cu: goto label_33c17c;
        case 0x33c180u: goto label_33c180;
        case 0x33c184u: goto label_33c184;
        case 0x33c188u: goto label_33c188;
        case 0x33c18cu: goto label_33c18c;
        case 0x33c190u: goto label_33c190;
        case 0x33c194u: goto label_33c194;
        case 0x33c198u: goto label_33c198;
        case 0x33c19cu: goto label_33c19c;
        case 0x33c1a0u: goto label_33c1a0;
        case 0x33c1a4u: goto label_33c1a4;
        case 0x33c1a8u: goto label_33c1a8;
        case 0x33c1acu: goto label_33c1ac;
        case 0x33c1b0u: goto label_33c1b0;
        case 0x33c1b4u: goto label_33c1b4;
        case 0x33c1b8u: goto label_33c1b8;
        case 0x33c1bcu: goto label_33c1bc;
        case 0x33c1c0u: goto label_33c1c0;
        case 0x33c1c4u: goto label_33c1c4;
        case 0x33c1c8u: goto label_33c1c8;
        case 0x33c1ccu: goto label_33c1cc;
        case 0x33c1d0u: goto label_33c1d0;
        case 0x33c1d4u: goto label_33c1d4;
        case 0x33c1d8u: goto label_33c1d8;
        case 0x33c1dcu: goto label_33c1dc;
        case 0x33c1e0u: goto label_33c1e0;
        case 0x33c1e4u: goto label_33c1e4;
        case 0x33c1e8u: goto label_33c1e8;
        case 0x33c1ecu: goto label_33c1ec;
        case 0x33c1f0u: goto label_33c1f0;
        case 0x33c1f4u: goto label_33c1f4;
        case 0x33c1f8u: goto label_33c1f8;
        case 0x33c1fcu: goto label_33c1fc;
        case 0x33c200u: goto label_33c200;
        case 0x33c204u: goto label_33c204;
        case 0x33c208u: goto label_33c208;
        case 0x33c20cu: goto label_33c20c;
        case 0x33c210u: goto label_33c210;
        case 0x33c214u: goto label_33c214;
        case 0x33c218u: goto label_33c218;
        case 0x33c21cu: goto label_33c21c;
        case 0x33c220u: goto label_33c220;
        case 0x33c224u: goto label_33c224;
        case 0x33c228u: goto label_33c228;
        case 0x33c22cu: goto label_33c22c;
        case 0x33c230u: goto label_33c230;
        case 0x33c234u: goto label_33c234;
        case 0x33c238u: goto label_33c238;
        case 0x33c23cu: goto label_33c23c;
        case 0x33c240u: goto label_33c240;
        case 0x33c244u: goto label_33c244;
        case 0x33c248u: goto label_33c248;
        case 0x33c24cu: goto label_33c24c;
        case 0x33c250u: goto label_33c250;
        case 0x33c254u: goto label_33c254;
        case 0x33c258u: goto label_33c258;
        case 0x33c25cu: goto label_33c25c;
        case 0x33c260u: goto label_33c260;
        case 0x33c264u: goto label_33c264;
        case 0x33c268u: goto label_33c268;
        case 0x33c26cu: goto label_33c26c;
        case 0x33c270u: goto label_33c270;
        case 0x33c274u: goto label_33c274;
        case 0x33c278u: goto label_33c278;
        case 0x33c27cu: goto label_33c27c;
        case 0x33c280u: goto label_33c280;
        case 0x33c284u: goto label_33c284;
        case 0x33c288u: goto label_33c288;
        case 0x33c28cu: goto label_33c28c;
        case 0x33c290u: goto label_33c290;
        case 0x33c294u: goto label_33c294;
        case 0x33c298u: goto label_33c298;
        case 0x33c29cu: goto label_33c29c;
        case 0x33c2a0u: goto label_33c2a0;
        case 0x33c2a4u: goto label_33c2a4;
        case 0x33c2a8u: goto label_33c2a8;
        case 0x33c2acu: goto label_33c2ac;
        case 0x33c2b0u: goto label_33c2b0;
        case 0x33c2b4u: goto label_33c2b4;
        case 0x33c2b8u: goto label_33c2b8;
        case 0x33c2bcu: goto label_33c2bc;
        case 0x33c2c0u: goto label_33c2c0;
        case 0x33c2c4u: goto label_33c2c4;
        case 0x33c2c8u: goto label_33c2c8;
        case 0x33c2ccu: goto label_33c2cc;
        case 0x33c2d0u: goto label_33c2d0;
        case 0x33c2d4u: goto label_33c2d4;
        case 0x33c2d8u: goto label_33c2d8;
        case 0x33c2dcu: goto label_33c2dc;
        case 0x33c2e0u: goto label_33c2e0;
        case 0x33c2e4u: goto label_33c2e4;
        case 0x33c2e8u: goto label_33c2e8;
        case 0x33c2ecu: goto label_33c2ec;
        case 0x33c2f0u: goto label_33c2f0;
        case 0x33c2f4u: goto label_33c2f4;
        case 0x33c2f8u: goto label_33c2f8;
        case 0x33c2fcu: goto label_33c2fc;
        case 0x33c300u: goto label_33c300;
        case 0x33c304u: goto label_33c304;
        case 0x33c308u: goto label_33c308;
        case 0x33c30cu: goto label_33c30c;
        case 0x33c310u: goto label_33c310;
        case 0x33c314u: goto label_33c314;
        case 0x33c318u: goto label_33c318;
        case 0x33c31cu: goto label_33c31c;
        case 0x33c320u: goto label_33c320;
        case 0x33c324u: goto label_33c324;
        case 0x33c328u: goto label_33c328;
        case 0x33c32cu: goto label_33c32c;
        case 0x33c330u: goto label_33c330;
        case 0x33c334u: goto label_33c334;
        case 0x33c338u: goto label_33c338;
        case 0x33c33cu: goto label_33c33c;
        case 0x33c340u: goto label_33c340;
        case 0x33c344u: goto label_33c344;
        case 0x33c348u: goto label_33c348;
        case 0x33c34cu: goto label_33c34c;
        case 0x33c350u: goto label_33c350;
        case 0x33c354u: goto label_33c354;
        case 0x33c358u: goto label_33c358;
        case 0x33c35cu: goto label_33c35c;
        case 0x33c360u: goto label_33c360;
        case 0x33c364u: goto label_33c364;
        case 0x33c368u: goto label_33c368;
        case 0x33c36cu: goto label_33c36c;
        case 0x33c370u: goto label_33c370;
        case 0x33c374u: goto label_33c374;
        case 0x33c378u: goto label_33c378;
        case 0x33c37cu: goto label_33c37c;
        case 0x33c380u: goto label_33c380;
        case 0x33c384u: goto label_33c384;
        case 0x33c388u: goto label_33c388;
        case 0x33c38cu: goto label_33c38c;
        default: break;
    }

    ctx->pc = 0x33c040u;

label_33c040:
    // 0x33c040: 0x3e00008  jr          $ra
label_33c044:
    if (ctx->pc == 0x33C044u) {
        ctx->pc = 0x33C044u;
            // 0x33c044: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x33C048u;
        goto label_33c048;
    }
    ctx->pc = 0x33C040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C040u;
            // 0x33c044: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C048u;
label_33c048:
    // 0x33c048: 0x0  nop
    ctx->pc = 0x33c048u;
    // NOP
label_33c04c:
    // 0x33c04c: 0x0  nop
    ctx->pc = 0x33c04cu;
    // NOP
label_33c050:
    // 0x33c050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33c054:
    // 0x33c054: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33c054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33c058:
    // 0x33c058: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33c05c:
    // 0x33c05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33c05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33c060:
    // 0x33c060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33c060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33c064:
    // 0x33c064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33c068:
    // 0x33c068: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33c068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c06c:
    // 0x33c06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33c070:
    // 0x33c070: 0x8c900d74  lw          $s0, 0xD74($a0)
    ctx->pc = 0x33c070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_33c074:
    // 0x33c074: 0x8c910550  lw          $s1, 0x550($a0)
    ctx->pc = 0x33c074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_33c078:
    // 0x33c078: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x33c078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_33c07c:
    // 0x33c07c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33c080:
    // 0x33c080: 0xc0a545c  jal         func_295170
label_33c084:
    if (ctx->pc == 0x33C084u) {
        ctx->pc = 0x33C084u;
            // 0x33c084: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x33C088u;
        goto label_33c088;
    }
    ctx->pc = 0x33C080u;
    SET_GPR_U32(ctx, 31, 0x33C088u);
    ctx->pc = 0x33C084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C080u;
            // 0x33c084: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C088u; }
        if (ctx->pc != 0x33C088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C088u; }
        if (ctx->pc != 0x33C088u) { return; }
    }
    ctx->pc = 0x33C088u;
label_33c088:
    // 0x33c088: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x33c088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_33c08c:
    // 0x33c08c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33c090:
    // 0x33c090: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x33c090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33c094:
    // 0x33c094: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x33c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_33c098:
    // 0x33c098: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33c09c:
    // 0x33c09c: 0xc08bf20  jal         func_22FC80
label_33c0a0:
    if (ctx->pc == 0x33C0A0u) {
        ctx->pc = 0x33C0A0u;
            // 0x33c0a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C0A4u;
        goto label_33c0a4;
    }
    ctx->pc = 0x33C09Cu;
    SET_GPR_U32(ctx, 31, 0x33C0A4u);
    ctx->pc = 0x33C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C09Cu;
            // 0x33c0a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C0A4u; }
        if (ctx->pc != 0x33C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C0A4u; }
        if (ctx->pc != 0x33C0A4u) { return; }
    }
    ctx->pc = 0x33C0A4u;
label_33c0a4:
    // 0x33c0a4: 0x924211a5  lbu         $v0, 0x11A5($s2)
    ctx->pc = 0x33c0a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4517)));
label_33c0a8:
    // 0x33c0a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33c0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33c0ac:
    // 0x33c0ac: 0xc075ee8  jal         func_1D7BA0
label_33c0b0:
    if (ctx->pc == 0x33C0B0u) {
        ctx->pc = 0x33C0B0u;
            // 0x33c0b0: 0xa24211a4  sb          $v0, 0x11A4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4516), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x33C0B4u;
        goto label_33c0b4;
    }
    ctx->pc = 0x33C0ACu;
    SET_GPR_U32(ctx, 31, 0x33C0B4u);
    ctx->pc = 0x33C0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C0ACu;
            // 0x33c0b0: 0xa24211a4  sb          $v0, 0x11A4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4516), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7BA0u;
    if (runtime->hasFunction(0x1D7BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C0B4u; }
        if (ctx->pc != 0x33C0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7BA0_0x1d7ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C0B4u; }
        if (ctx->pc != 0x33C0B4u) { return; }
    }
    ctx->pc = 0x33C0B4u;
label_33c0b4:
    // 0x33c0b4: 0x8e420e38  lw          $v0, 0xE38($s2)
    ctx->pc = 0x33c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_33c0b8:
    // 0x33c0b8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x33c0b8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_33c0bc:
    // 0x33c0bc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_33c0c0:
    if (ctx->pc == 0x33C0C0u) {
        ctx->pc = 0x33C0C0u;
            // 0x33c0c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C0C4u;
        goto label_33c0c4;
    }
    ctx->pc = 0x33C0BCu;
    {
        const bool branch_taken_0x33c0bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33C0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C0BCu;
            // 0x33c0c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c0bc) {
            ctx->pc = 0x33C0D4u;
            goto label_33c0d4;
        }
    }
    ctx->pc = 0x33C0C4u;
label_33c0c4:
    // 0x33c0c4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x33c0c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_33c0c8:
    // 0x33c0c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_33c0cc:
    if (ctx->pc == 0x33C0CCu) {
        ctx->pc = 0x33C0D0u;
        goto label_33c0d0;
    }
    ctx->pc = 0x33C0C8u;
    {
        const bool branch_taken_0x33c0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c0c8) {
            ctx->pc = 0x33C0D4u;
            goto label_33c0d4;
        }
    }
    ctx->pc = 0x33C0D0u;
label_33c0d0:
    // 0x33c0d0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x33c0d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c0d4:
    // 0x33c0d4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_33c0d8:
    if (ctx->pc == 0x33C0D8u) {
        ctx->pc = 0x33C0D8u;
            // 0x33c0d8: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x33C0DCu;
        goto label_33c0dc;
    }
    ctx->pc = 0x33C0D4u;
    {
        const bool branch_taken_0x33c0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c0d4) {
            ctx->pc = 0x33C0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C0D4u;
            // 0x33c0d8: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C0F4u;
            goto label_33c0f4;
        }
    }
    ctx->pc = 0x33C0DCu;
label_33c0dc:
    // 0x33c0dc: 0xc075eb4  jal         func_1D7AD0
label_33c0e0:
    if (ctx->pc == 0x33C0E0u) {
        ctx->pc = 0x33C0E0u;
            // 0x33c0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C0E4u;
        goto label_33c0e4;
    }
    ctx->pc = 0x33C0DCu;
    SET_GPR_U32(ctx, 31, 0x33C0E4u);
    ctx->pc = 0x33C0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C0DCu;
            // 0x33c0e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C0E4u; }
        if (ctx->pc != 0x33C0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C0E4u; }
        if (ctx->pc != 0x33C0E4u) { return; }
    }
    ctx->pc = 0x33C0E4u;
label_33c0e4:
    // 0x33c0e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_33c0e8:
    if (ctx->pc == 0x33C0E8u) {
        ctx->pc = 0x33C0ECu;
        goto label_33c0ec;
    }
    ctx->pc = 0x33C0E4u;
    {
        const bool branch_taken_0x33c0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c0e4) {
            ctx->pc = 0x33C0F0u;
            goto label_33c0f0;
        }
    }
    ctx->pc = 0x33C0ECu;
label_33c0ec:
    // 0x33c0ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33c0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c0f0:
    // 0x33c0f0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x33c0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_33c0f4:
    // 0x33c0f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c0f8:
    // 0x33c0f8: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_33c0fc:
    if (ctx->pc == 0x33C0FCu) {
        ctx->pc = 0x33C100u;
        goto label_33c100;
    }
    ctx->pc = 0x33C0F8u;
    {
        const bool branch_taken_0x33c0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33c0f8) {
            ctx->pc = 0x33C18Cu;
            goto label_33c18c;
        }
    }
    ctx->pc = 0x33C100u;
label_33c100:
    // 0x33c100: 0xc040180  jal         func_100600
label_33c104:
    if (ctx->pc == 0x33C104u) {
        ctx->pc = 0x33C104u;
            // 0x33c104: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x33C108u;
        goto label_33c108;
    }
    ctx->pc = 0x33C100u;
    SET_GPR_U32(ctx, 31, 0x33C108u);
    ctx->pc = 0x33C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C100u;
            // 0x33c104: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C108u; }
        if (ctx->pc != 0x33C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C108u; }
        if (ctx->pc != 0x33C108u) { return; }
    }
    ctx->pc = 0x33C108u;
label_33c108:
    // 0x33c108: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_33c10c:
    if (ctx->pc == 0x33C10Cu) {
        ctx->pc = 0x33C10Cu;
            // 0x33c10c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C110u;
        goto label_33c110;
    }
    ctx->pc = 0x33C108u;
    {
        const bool branch_taken_0x33c108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C108u;
            // 0x33c10c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c108) {
            ctx->pc = 0x33C18Cu;
            goto label_33c18c;
        }
    }
    ctx->pc = 0x33C110u;
label_33c110:
    // 0x33c110: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33c110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33c114:
    // 0x33c114: 0x825311aa  lb          $s3, 0x11AA($s2)
    ctx->pc = 0x33c114u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_33c118:
    // 0x33c118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c11c:
    // 0x33c11c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33c11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33c120:
    // 0x33c120: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x33c120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_33c124:
    // 0x33c124: 0xc10ca68  jal         func_4329A0
label_33c128:
    if (ctx->pc == 0x33C128u) {
        ctx->pc = 0x33C128u;
            // 0x33c128: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33C12Cu;
        goto label_33c12c;
    }
    ctx->pc = 0x33C124u;
    SET_GPR_U32(ctx, 31, 0x33C12Cu);
    ctx->pc = 0x33C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C124u;
            // 0x33c128: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C12Cu; }
        if (ctx->pc != 0x33C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C12Cu; }
        if (ctx->pc != 0x33C12Cu) { return; }
    }
    ctx->pc = 0x33C12Cu;
label_33c12c:
    // 0x33c12c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33c130:
    // 0x33c130: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x33c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
label_33c134:
    // 0x33c134: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x33c134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_33c138:
    // 0x33c138: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33c138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_33c13c:
    // 0x33c13c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33c140:
    // 0x33c140: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x33c140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_33c144:
    // 0x33c144: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33c144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33c148:
    // 0x33c148: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x33c148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_33c14c:
    // 0x33c14c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33c150:
    // 0x33c150: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x33c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_33c154:
    // 0x33c154: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33c154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33c158:
    // 0x33c158: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x33c158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_33c15c:
    // 0x33c15c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33c160:
    // 0x33c160: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x33c160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_33c164:
    // 0x33c164: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33c164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33c168:
    // 0x33c168: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x33c168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_33c16c:
    // 0x33c16c: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x33c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_33c170:
    // 0x33c170: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33c174:
    // 0x33c174: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x33c174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_33c178:
    // 0x33c178: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x33c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_33c17c:
    // 0x33c17c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33c180:
    // 0x33c180: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x33c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_33c184:
    // 0x33c184: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x33c184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_33c188:
    // 0x33c188: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x33c188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_33c18c:
    // 0x33c18c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33c190:
    // 0x33c190: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_33c194:
    // 0x33c194: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x33c194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33c198:
    // 0x33c198: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x33c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_33c19c:
    // 0x33c19c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_33c1a0:
    if (ctx->pc == 0x33C1A0u) {
        ctx->pc = 0x33C1A0u;
            // 0x33c1a0: 0xae400dc4  sw          $zero, 0xDC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3524), GPR_U32(ctx, 0));
        ctx->pc = 0x33C1A4u;
        goto label_33c1a4;
    }
    ctx->pc = 0x33C19Cu;
    {
        const bool branch_taken_0x33c19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33c19c) {
            ctx->pc = 0x33C1A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C19Cu;
            // 0x33c1a0: 0xae400dc4  sw          $zero, 0xDC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C1B8u;
            goto label_33c1b8;
        }
    }
    ctx->pc = 0x33C1A4u;
label_33c1a4:
    // 0x33c1a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33c1a8:
    // 0x33c1a8: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x33c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_33c1ac:
    // 0x33c1ac: 0xc13b730  jal         func_4EDCC0
label_33c1b0:
    if (ctx->pc == 0x33C1B0u) {
        ctx->pc = 0x33C1B0u;
            // 0x33c1b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C1B4u;
        goto label_33c1b4;
    }
    ctx->pc = 0x33C1ACu;
    SET_GPR_U32(ctx, 31, 0x33C1B4u);
    ctx->pc = 0x33C1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C1ACu;
            // 0x33c1b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EDCC0u;
    if (runtime->hasFunction(0x4EDCC0u)) {
        auto targetFn = runtime->lookupFunction(0x4EDCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C1B4u; }
        if (ctx->pc != 0x33C1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EDCC0_0x4edcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C1B4u; }
        if (ctx->pc != 0x33C1B4u) { return; }
    }
    ctx->pc = 0x33C1B4u;
label_33c1b4:
    // 0x33c1b4: 0xae400dc4  sw          $zero, 0xDC4($s2)
    ctx->pc = 0x33c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3524), GPR_U32(ctx, 0));
label_33c1b8:
    // 0x33c1b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c1bc:
    // 0x33c1bc: 0x8223010c  lb          $v1, 0x10C($s1)
    ctx->pc = 0x33c1bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_33c1c0:
    // 0x33c1c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33c1c4:
    // 0x33c1c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33c1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33c1c8:
    // 0x33c1c8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x33c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33c1cc:
    // 0x33c1cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x33c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_33c1d0:
    // 0x33c1d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33c1d4:
    // 0x33c1d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_33c1d8:
    // 0x33c1d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x33c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_33c1dc:
    // 0x33c1dc: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x33c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_33c1e0:
    // 0x33c1e0: 0x8e420d70  lw          $v0, 0xD70($s2)
    ctx->pc = 0x33c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_33c1e4:
    // 0x33c1e4: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x33c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_33c1e8:
    // 0x33c1e8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_33c1ec:
    if (ctx->pc == 0x33C1ECu) {
        ctx->pc = 0x33C1ECu;
            // 0x33c1ec: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x33C1F0u;
        goto label_33c1f0;
    }
    ctx->pc = 0x33C1E8u;
    {
        const bool branch_taken_0x33c1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c1e8) {
            ctx->pc = 0x33C1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C1E8u;
            // 0x33c1ec: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C250u;
            goto label_33c250;
        }
    }
    ctx->pc = 0x33C1F0u;
label_33c1f0:
    // 0x33c1f0: 0xc0eff1c  jal         func_3BFC70
label_33c1f4:
    if (ctx->pc == 0x33C1F4u) {
        ctx->pc = 0x33C1F4u;
            // 0x33c1f4: 0x8e440a60  lw          $a0, 0xA60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2656)));
        ctx->pc = 0x33C1F8u;
        goto label_33c1f8;
    }
    ctx->pc = 0x33C1F0u;
    SET_GPR_U32(ctx, 31, 0x33C1F8u);
    ctx->pc = 0x33C1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C1F0u;
            // 0x33c1f4: 0x8e440a60  lw          $a0, 0xA60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (runtime->hasFunction(0x3BFC70u)) {
        auto targetFn = runtime->lookupFunction(0x3BFC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C1F8u; }
        if (ctx->pc != 0x33C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFC70_0x3bfc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C1F8u; }
        if (ctx->pc != 0x33C1F8u) { return; }
    }
    ctx->pc = 0x33C1F8u;
label_33c1f8:
    // 0x33c1f8: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x33c1f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_33c1fc:
    // 0x33c1fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_33c200:
    // 0x33c200: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x33c200u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_33c204:
    // 0x33c204: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33c204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33c208:
    // 0x33c208: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33c208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33c20c:
    // 0x33c20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c210:
    // 0x33c210: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33c210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33c214:
    // 0x33c214: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x33c214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_33c218:
    // 0x33c218: 0x320f809  jalr        $t9
label_33c21c:
    if (ctx->pc == 0x33C21Cu) {
        ctx->pc = 0x33C21Cu;
            // 0x33c21c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x33C220u;
        goto label_33c220;
    }
    ctx->pc = 0x33C218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C220u);
        ctx->pc = 0x33C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C218u;
            // 0x33c21c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C220u; }
            if (ctx->pc != 0x33C220u) { return; }
        }
        }
    }
    ctx->pc = 0x33C220u;
label_33c220:
    // 0x33c220: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x33c220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_33c224:
    // 0x33c224: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33c224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_33c228:
    // 0x33c228: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x33c228u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_33c22c:
    // 0x33c22c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33c22cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33c230:
    // 0x33c230: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33c230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33c234:
    // 0x33c234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c238:
    // 0x33c238: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33c238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33c23c:
    // 0x33c23c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x33c23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33c240:
    // 0x33c240: 0x320f809  jalr        $t9
label_33c244:
    if (ctx->pc == 0x33C244u) {
        ctx->pc = 0x33C244u;
            // 0x33c244: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x33C248u;
        goto label_33c248;
    }
    ctx->pc = 0x33C240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C248u);
        ctx->pc = 0x33C244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C240u;
            // 0x33c244: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C248u; }
            if (ctx->pc != 0x33C248u) { return; }
        }
        }
    }
    ctx->pc = 0x33C248u;
label_33c248:
    // 0x33c248: 0x10000014  b           . + 4 + (0x14 << 2)
label_33c24c:
    if (ctx->pc == 0x33C24Cu) {
        ctx->pc = 0x33C24Cu;
            // 0x33c24c: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x33C250u;
        goto label_33c250;
    }
    ctx->pc = 0x33C248u;
    {
        const bool branch_taken_0x33c248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C248u;
            // 0x33c24c: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c248) {
            ctx->pc = 0x33C29Cu;
            goto label_33c29c;
        }
    }
    ctx->pc = 0x33C250u;
label_33c250:
    // 0x33c250: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_33c254:
    // 0x33c254: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x33c254u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_33c258:
    // 0x33c258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c25c:
    // 0x33c25c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33c25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33c260:
    // 0x33c260: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33c260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33c264:
    // 0x33c264: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33c264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33c268:
    // 0x33c268: 0x320f809  jalr        $t9
label_33c26c:
    if (ctx->pc == 0x33C26Cu) {
        ctx->pc = 0x33C26Cu;
            // 0x33c26c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x33C270u;
        goto label_33c270;
    }
    ctx->pc = 0x33C268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C270u);
        ctx->pc = 0x33C26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C268u;
            // 0x33c26c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C270u; }
            if (ctx->pc != 0x33C270u) { return; }
        }
        }
    }
    ctx->pc = 0x33C270u;
label_33c270:
    // 0x33c270: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x33c270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_33c274:
    // 0x33c274: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33c274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_33c278:
    // 0x33c278: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x33c278u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_33c27c:
    // 0x33c27c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33c27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33c280:
    // 0x33c280: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33c280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33c284:
    // 0x33c284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c288:
    // 0x33c288: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x33c288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_33c28c:
    // 0x33c28c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x33c28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33c290:
    // 0x33c290: 0x320f809  jalr        $t9
label_33c294:
    if (ctx->pc == 0x33C294u) {
        ctx->pc = 0x33C294u;
            // 0x33c294: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x33C298u;
        goto label_33c298;
    }
    ctx->pc = 0x33C290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C298u);
        ctx->pc = 0x33C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C290u;
            // 0x33c294: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C298u; }
            if (ctx->pc != 0x33C298u) { return; }
        }
        }
    }
    ctx->pc = 0x33C298u;
label_33c298:
    // 0x33c298: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x33c298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_33c29c:
    // 0x33c29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33c29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c2a0:
    // 0x33c2a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33c2a4:
    // 0x33c2a4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x33c2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_33c2a8:
    // 0x33c2a8: 0x320f809  jalr        $t9
label_33c2ac:
    if (ctx->pc == 0x33C2ACu) {
        ctx->pc = 0x33C2ACu;
            // 0x33c2ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x33C2B0u;
        goto label_33c2b0;
    }
    ctx->pc = 0x33C2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C2B0u);
        ctx->pc = 0x33C2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C2A8u;
            // 0x33c2ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C2B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C2B0u; }
            if (ctx->pc != 0x33C2B0u) { return; }
        }
        }
    }
    ctx->pc = 0x33C2B0u;
label_33c2b0:
    // 0x33c2b0: 0xae400e30  sw          $zero, 0xE30($s2)
    ctx->pc = 0x33c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 0));
label_33c2b4:
    // 0x33c2b4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x33c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_33c2b8:
    // 0x33c2b8: 0xae400e1c  sw          $zero, 0xE1C($s2)
    ctx->pc = 0x33c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3612), GPR_U32(ctx, 0));
label_33c2bc:
    // 0x33c2bc: 0x8e440db4  lw          $a0, 0xDB4($s2)
    ctx->pc = 0x33c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3508)));
label_33c2c0:
    // 0x33c2c0: 0x5483002a  bnel        $a0, $v1, . + 4 + (0x2A << 2)
label_33c2c4:
    if (ctx->pc == 0x33C2C4u) {
        ctx->pc = 0x33C2C4u;
            // 0x33c2c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x33C2C8u;
        goto label_33c2c8;
    }
    ctx->pc = 0x33C2C0u;
    {
        const bool branch_taken_0x33c2c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33c2c0) {
            ctx->pc = 0x33C2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C2C0u;
            // 0x33c2c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C36Cu;
            goto label_33c36c;
        }
    }
    ctx->pc = 0x33C2C8u;
label_33c2c8:
    // 0x33c2c8: 0xa24011cc  sb          $zero, 0x11CC($s2)
    ctx->pc = 0x33c2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4556), (uint8_t)GPR_U32(ctx, 0));
label_33c2cc:
    // 0x33c2cc: 0x8e4511c4  lw          $a1, 0x11C4($s2)
    ctx->pc = 0x33c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4548)));
label_33c2d0:
    // 0x33c2d0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_33c2d4:
    if (ctx->pc == 0x33C2D4u) {
        ctx->pc = 0x33C2D4u;
            // 0x33c2d4: 0x8e4511c8  lw          $a1, 0x11C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
        ctx->pc = 0x33C2D8u;
        goto label_33c2d8;
    }
    ctx->pc = 0x33C2D0u;
    {
        const bool branch_taken_0x33c2d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c2d0) {
            ctx->pc = 0x33C2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C2D0u;
            // 0x33c2d4: 0x8e4511c8  lw          $a1, 0x11C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C2F0u;
            goto label_33c2f0;
        }
    }
    ctx->pc = 0x33C2D8u;
label_33c2d8:
    // 0x33c2d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33c2dc:
    // 0x33c2dc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x33c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33c2e0:
    // 0x33c2e0: 0xc057b7c  jal         func_15EDF0
label_33c2e4:
    if (ctx->pc == 0x33C2E4u) {
        ctx->pc = 0x33C2E4u;
            // 0x33c2e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x33C2E8u;
        goto label_33c2e8;
    }
    ctx->pc = 0x33C2E0u;
    SET_GPR_U32(ctx, 31, 0x33C2E8u);
    ctx->pc = 0x33C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C2E0u;
            // 0x33c2e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C2E8u; }
        if (ctx->pc != 0x33C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C2E8u; }
        if (ctx->pc != 0x33C2E8u) { return; }
    }
    ctx->pc = 0x33C2E8u;
label_33c2e8:
    // 0x33c2e8: 0xae4011c4  sw          $zero, 0x11C4($s2)
    ctx->pc = 0x33c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4548), GPR_U32(ctx, 0));
label_33c2ec:
    // 0x33c2ec: 0x8e4511c8  lw          $a1, 0x11C8($s2)
    ctx->pc = 0x33c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
label_33c2f0:
    // 0x33c2f0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_33c2f4:
    if (ctx->pc == 0x33C2F4u) {
        ctx->pc = 0x33C2F4u;
            // 0x33c2f4: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x33C2F8u;
        goto label_33c2f8;
    }
    ctx->pc = 0x33C2F0u;
    {
        const bool branch_taken_0x33c2f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c2f0) {
            ctx->pc = 0x33C2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C2F0u;
            // 0x33c2f4: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C310u;
            goto label_33c310;
        }
    }
    ctx->pc = 0x33C2F8u;
label_33c2f8:
    // 0x33c2f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33c2fc:
    // 0x33c2fc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x33c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33c300:
    // 0x33c300: 0xc057b7c  jal         func_15EDF0
label_33c304:
    if (ctx->pc == 0x33C304u) {
        ctx->pc = 0x33C304u;
            // 0x33c304: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x33C308u;
        goto label_33c308;
    }
    ctx->pc = 0x33C300u;
    SET_GPR_U32(ctx, 31, 0x33C308u);
    ctx->pc = 0x33C304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C300u;
            // 0x33c304: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C308u; }
        if (ctx->pc != 0x33C308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C308u; }
        if (ctx->pc != 0x33C308u) { return; }
    }
    ctx->pc = 0x33C308u;
label_33c308:
    // 0x33c308: 0xae4011c8  sw          $zero, 0x11C8($s2)
    ctx->pc = 0x33c308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4552), GPR_U32(ctx, 0));
label_33c30c:
    // 0x33c30c: 0x92440094  lbu         $a0, 0x94($s2)
    ctx->pc = 0x33c30cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
label_33c310:
    // 0x33c310: 0xc072b78  jal         func_1CADE0
label_33c314:
    if (ctx->pc == 0x33C314u) {
        ctx->pc = 0x33C318u;
        goto label_33c318;
    }
    ctx->pc = 0x33C310u;
    SET_GPR_U32(ctx, 31, 0x33C318u);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C318u; }
        if (ctx->pc != 0x33C318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C318u; }
        if (ctx->pc != 0x33C318u) { return; }
    }
    ctx->pc = 0x33C318u;
label_33c318:
    // 0x33c318: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_33c31c:
    if (ctx->pc == 0x33C31Cu) {
        ctx->pc = 0x33C31Cu;
            // 0x33c31c: 0x8e500d74  lw          $s0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x33C320u;
        goto label_33c320;
    }
    ctx->pc = 0x33C318u;
    {
        const bool branch_taken_0x33c318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c318) {
            ctx->pc = 0x33C31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C318u;
            // 0x33c31c: 0x8e500d74  lw          $s0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C32Cu;
            goto label_33c32c;
        }
    }
    ctx->pc = 0x33C320u;
label_33c320:
    // 0x33c320: 0xc072aaa  jal         func_1CAAA8
label_33c324:
    if (ctx->pc == 0x33C324u) {
        ctx->pc = 0x33C324u;
            // 0x33c324: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->pc = 0x33C328u;
        goto label_33c328;
    }
    ctx->pc = 0x33C320u;
    SET_GPR_U32(ctx, 31, 0x33C328u);
    ctx->pc = 0x33C324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C320u;
            // 0x33c324: 0x92440094  lbu         $a0, 0x94($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C328u; }
        if (ctx->pc != 0x33C328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C328u; }
        if (ctx->pc != 0x33C328u) { return; }
    }
    ctx->pc = 0x33C328u;
label_33c328:
    // 0x33c328: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x33c328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_33c32c:
    // 0x33c32c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x33c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_33c330:
    // 0x33c330: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x33c330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33c334:
    // 0x33c334: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x33c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_33c338:
    // 0x33c338: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33c33c:
    // 0x33c33c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x33c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_33c340:
    // 0x33c340: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x33c340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_33c344:
    // 0x33c344: 0xc0a545c  jal         func_295170
label_33c348:
    if (ctx->pc == 0x33C348u) {
        ctx->pc = 0x33C348u;
            // 0x33c348: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x33C34Cu;
        goto label_33c34c;
    }
    ctx->pc = 0x33C344u;
    SET_GPR_U32(ctx, 31, 0x33C34Cu);
    ctx->pc = 0x33C348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C344u;
            // 0x33c348: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C34Cu; }
        if (ctx->pc != 0x33C34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C34Cu; }
        if (ctx->pc != 0x33C34Cu) { return; }
    }
    ctx->pc = 0x33C34Cu;
label_33c34c:
    // 0x33c34c: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x33c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_33c350:
    // 0x33c350: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33c350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33c354:
    // 0x33c354: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x33c354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33c358:
    // 0x33c358: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x33c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_33c35c:
    // 0x33c35c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33c360:
    // 0x33c360: 0xc08bf20  jal         func_22FC80
label_33c364:
    if (ctx->pc == 0x33C364u) {
        ctx->pc = 0x33C364u;
            // 0x33c364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C368u;
        goto label_33c368;
    }
    ctx->pc = 0x33C360u;
    SET_GPR_U32(ctx, 31, 0x33C368u);
    ctx->pc = 0x33C364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C360u;
            // 0x33c364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C368u; }
        if (ctx->pc != 0x33C368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C368u; }
        if (ctx->pc != 0x33C368u) { return; }
    }
    ctx->pc = 0x33C368u;
label_33c368:
    // 0x33c368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33c36c:
    // 0x33c36c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33c36cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33c370:
    // 0x33c370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33c370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33c374:
    // 0x33c374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33c378:
    // 0x33c378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33c37c:
    // 0x33c37c: 0x3e00008  jr          $ra
label_33c380:
    if (ctx->pc == 0x33C380u) {
        ctx->pc = 0x33C380u;
            // 0x33c380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x33C384u;
        goto label_33c384;
    }
    ctx->pc = 0x33C37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C37Cu;
            // 0x33c380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C384u;
label_33c384:
    // 0x33c384: 0x0  nop
    ctx->pc = 0x33c384u;
    // NOP
label_33c388:
    // 0x33c388: 0x0  nop
    ctx->pc = 0x33c388u;
    // NOP
label_33c38c:
    // 0x33c38c: 0x0  nop
    ctx->pc = 0x33c38cu;
    // NOP
}
