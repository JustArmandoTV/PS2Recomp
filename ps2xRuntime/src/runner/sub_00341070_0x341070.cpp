#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00341070
// Address: 0x341070 - 0x3411f0
void sub_00341070_0x341070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341070_0x341070");
#endif

    switch (ctx->pc) {
        case 0x341070u: goto label_341070;
        case 0x341074u: goto label_341074;
        case 0x341078u: goto label_341078;
        case 0x34107cu: goto label_34107c;
        case 0x341080u: goto label_341080;
        case 0x341084u: goto label_341084;
        case 0x341088u: goto label_341088;
        case 0x34108cu: goto label_34108c;
        case 0x341090u: goto label_341090;
        case 0x341094u: goto label_341094;
        case 0x341098u: goto label_341098;
        case 0x34109cu: goto label_34109c;
        case 0x3410a0u: goto label_3410a0;
        case 0x3410a4u: goto label_3410a4;
        case 0x3410a8u: goto label_3410a8;
        case 0x3410acu: goto label_3410ac;
        case 0x3410b0u: goto label_3410b0;
        case 0x3410b4u: goto label_3410b4;
        case 0x3410b8u: goto label_3410b8;
        case 0x3410bcu: goto label_3410bc;
        case 0x3410c0u: goto label_3410c0;
        case 0x3410c4u: goto label_3410c4;
        case 0x3410c8u: goto label_3410c8;
        case 0x3410ccu: goto label_3410cc;
        case 0x3410d0u: goto label_3410d0;
        case 0x3410d4u: goto label_3410d4;
        case 0x3410d8u: goto label_3410d8;
        case 0x3410dcu: goto label_3410dc;
        case 0x3410e0u: goto label_3410e0;
        case 0x3410e4u: goto label_3410e4;
        case 0x3410e8u: goto label_3410e8;
        case 0x3410ecu: goto label_3410ec;
        case 0x3410f0u: goto label_3410f0;
        case 0x3410f4u: goto label_3410f4;
        case 0x3410f8u: goto label_3410f8;
        case 0x3410fcu: goto label_3410fc;
        case 0x341100u: goto label_341100;
        case 0x341104u: goto label_341104;
        case 0x341108u: goto label_341108;
        case 0x34110cu: goto label_34110c;
        case 0x341110u: goto label_341110;
        case 0x341114u: goto label_341114;
        case 0x341118u: goto label_341118;
        case 0x34111cu: goto label_34111c;
        case 0x341120u: goto label_341120;
        case 0x341124u: goto label_341124;
        case 0x341128u: goto label_341128;
        case 0x34112cu: goto label_34112c;
        case 0x341130u: goto label_341130;
        case 0x341134u: goto label_341134;
        case 0x341138u: goto label_341138;
        case 0x34113cu: goto label_34113c;
        case 0x341140u: goto label_341140;
        case 0x341144u: goto label_341144;
        case 0x341148u: goto label_341148;
        case 0x34114cu: goto label_34114c;
        case 0x341150u: goto label_341150;
        case 0x341154u: goto label_341154;
        case 0x341158u: goto label_341158;
        case 0x34115cu: goto label_34115c;
        case 0x341160u: goto label_341160;
        case 0x341164u: goto label_341164;
        case 0x341168u: goto label_341168;
        case 0x34116cu: goto label_34116c;
        case 0x341170u: goto label_341170;
        case 0x341174u: goto label_341174;
        case 0x341178u: goto label_341178;
        case 0x34117cu: goto label_34117c;
        case 0x341180u: goto label_341180;
        case 0x341184u: goto label_341184;
        case 0x341188u: goto label_341188;
        case 0x34118cu: goto label_34118c;
        case 0x341190u: goto label_341190;
        case 0x341194u: goto label_341194;
        case 0x341198u: goto label_341198;
        case 0x34119cu: goto label_34119c;
        case 0x3411a0u: goto label_3411a0;
        case 0x3411a4u: goto label_3411a4;
        case 0x3411a8u: goto label_3411a8;
        case 0x3411acu: goto label_3411ac;
        case 0x3411b0u: goto label_3411b0;
        case 0x3411b4u: goto label_3411b4;
        case 0x3411b8u: goto label_3411b8;
        case 0x3411bcu: goto label_3411bc;
        case 0x3411c0u: goto label_3411c0;
        case 0x3411c4u: goto label_3411c4;
        case 0x3411c8u: goto label_3411c8;
        case 0x3411ccu: goto label_3411cc;
        case 0x3411d0u: goto label_3411d0;
        case 0x3411d4u: goto label_3411d4;
        case 0x3411d8u: goto label_3411d8;
        case 0x3411dcu: goto label_3411dc;
        case 0x3411e0u: goto label_3411e0;
        case 0x3411e4u: goto label_3411e4;
        case 0x3411e8u: goto label_3411e8;
        case 0x3411ecu: goto label_3411ec;
        default: break;
    }

    ctx->pc = 0x341070u;

label_341070:
    // 0x341070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x341070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_341074:
    // 0x341074: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x341074u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_341078:
    // 0x341078: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x341078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_34107c:
    // 0x34107c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x34107cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_341080:
    // 0x341080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x341080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_341084:
    // 0x341084: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x341084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_341088:
    // 0x341088: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x341088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34108c:
    // 0x34108c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34108cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341090:
    // 0x341090: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x341090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_341094:
    // 0x341094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341098:
    // 0x341098: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x341098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34109c:
    // 0x34109c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x34109cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3410a0:
    // 0x3410a0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3410a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3410a4:
    // 0x3410a4: 0xc0cd08c  jal         func_334230
label_3410a8:
    if (ctx->pc == 0x3410A8u) {
        ctx->pc = 0x3410A8u;
            // 0x3410a8: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->pc = 0x3410ACu;
        goto label_3410ac;
    }
    ctx->pc = 0x3410A4u;
    SET_GPR_U32(ctx, 31, 0x3410ACu);
    ctx->pc = 0x3410A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3410A4u;
            // 0x3410a8: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3410ACu; }
        if (ctx->pc != 0x3410ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3410ACu; }
        if (ctx->pc != 0x3410ACu) { return; }
    }
    ctx->pc = 0x3410ACu;
label_3410ac:
    // 0x3410ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3410acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3410b0:
    // 0x3410b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3410b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3410b4:
    // 0x3410b4: 0x24635470  addiu       $v1, $v1, 0x5470
    ctx->pc = 0x3410b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21616));
label_3410b8:
    // 0x3410b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3410b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3410bc:
    // 0x3410bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3410bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3410c0:
    // 0x3410c0: 0xa2000cc0  sb          $zero, 0xCC0($s0)
    ctx->pc = 0x3410c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3264), (uint8_t)GPR_U32(ctx, 0));
label_3410c4:
    // 0x3410c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3410c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3410c8:
    // 0x3410c8: 0xa2000cc3  sb          $zero, 0xCC3($s0)
    ctx->pc = 0x3410c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3267), (uint8_t)GPR_U32(ctx, 0));
label_3410cc:
    // 0x3410cc: 0xae110cc4  sw          $s1, 0xCC4($s0)
    ctx->pc = 0x3410ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3268), GPR_U32(ctx, 17));
label_3410d0:
    // 0x3410d0: 0xae000cc8  sw          $zero, 0xCC8($s0)
    ctx->pc = 0x3410d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3272), GPR_U32(ctx, 0));
label_3410d4:
    // 0x3410d4: 0xae000d00  sw          $zero, 0xD00($s0)
    ctx->pc = 0x3410d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3328), GPR_U32(ctx, 0));
label_3410d8:
    // 0x3410d8: 0xae000d04  sw          $zero, 0xD04($s0)
    ctx->pc = 0x3410d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3332), GPR_U32(ctx, 0));
label_3410dc:
    // 0x3410dc: 0xae000d08  sw          $zero, 0xD08($s0)
    ctx->pc = 0x3410dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3336), GPR_U32(ctx, 0));
label_3410e0:
    // 0x3410e0: 0xae000d0c  sw          $zero, 0xD0C($s0)
    ctx->pc = 0x3410e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3340), GPR_U32(ctx, 0));
label_3410e4:
    // 0x3410e4: 0xa2000d11  sb          $zero, 0xD11($s0)
    ctx->pc = 0x3410e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3345), (uint8_t)GPR_U32(ctx, 0));
label_3410e8:
    // 0x3410e8: 0xae000d14  sw          $zero, 0xD14($s0)
    ctx->pc = 0x3410e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3348), GPR_U32(ctx, 0));
label_3410ec:
    // 0x3410ec: 0xae000d28  sw          $zero, 0xD28($s0)
    ctx->pc = 0x3410ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3368), GPR_U32(ctx, 0));
label_3410f0:
    // 0x3410f0: 0xae000d2c  sw          $zero, 0xD2C($s0)
    ctx->pc = 0x3410f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3372), GPR_U32(ctx, 0));
label_3410f4:
    // 0x3410f4: 0xa2000d3a  sb          $zero, 0xD3A($s0)
    ctx->pc = 0x3410f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3386), (uint8_t)GPR_U32(ctx, 0));
label_3410f8:
    // 0x3410f8: 0xa2000d3b  sb          $zero, 0xD3B($s0)
    ctx->pc = 0x3410f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3387), (uint8_t)GPR_U32(ctx, 0));
label_3410fc:
    // 0x3410fc: 0xac4060a8  sw          $zero, 0x60A8($v0)
    ctx->pc = 0x3410fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24744), GPR_U32(ctx, 0));
label_341100:
    // 0x341100: 0xae000d1c  sw          $zero, 0xD1C($s0)
    ctx->pc = 0x341100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3356), GPR_U32(ctx, 0));
label_341104:
    // 0x341104: 0xa2030cc1  sb          $v1, 0xCC1($s0)
    ctx->pc = 0x341104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3265), (uint8_t)GPR_U32(ctx, 3));
label_341108:
    // 0x341108: 0xae000d20  sw          $zero, 0xD20($s0)
    ctx->pc = 0x341108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3360), GPR_U32(ctx, 0));
label_34110c:
    // 0x34110c: 0xae000d44  sw          $zero, 0xD44($s0)
    ctx->pc = 0x34110cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3396), GPR_U32(ctx, 0));
label_341110:
    // 0x341110: 0xae000d48  sw          $zero, 0xD48($s0)
    ctx->pc = 0x341110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3400), GPR_U32(ctx, 0));
label_341114:
    // 0x341114: 0xa2000cc2  sb          $zero, 0xCC2($s0)
    ctx->pc = 0x341114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3266), (uint8_t)GPR_U32(ctx, 0));
label_341118:
    // 0x341118: 0xa2000d10  sb          $zero, 0xD10($s0)
    ctx->pc = 0x341118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3344), (uint8_t)GPR_U32(ctx, 0));
label_34111c:
    // 0x34111c: 0xa2000d32  sb          $zero, 0xD32($s0)
    ctx->pc = 0x34111cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3378), (uint8_t)GPR_U32(ctx, 0));
label_341120:
    // 0x341120: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x341120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_341124:
    // 0x341124: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x341124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_341128:
    // 0x341128: 0x320f809  jalr        $t9
label_34112c:
    if (ctx->pc == 0x34112Cu) {
        ctx->pc = 0x34112Cu;
            // 0x34112c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x341130u;
        goto label_341130;
    }
    ctx->pc = 0x341128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x341130u);
        ctx->pc = 0x34112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341128u;
            // 0x34112c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x341130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x341130u; }
            if (ctx->pc != 0x341130u) { return; }
        }
        }
    }
    ctx->pc = 0x341130u;
label_341130:
    // 0x341130: 0x26040d33  addiu       $a0, $s0, 0xD33
    ctx->pc = 0x341130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3379));
label_341134:
    // 0x341134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x341134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341138:
    // 0x341138: 0xc04a576  jal         func_1295D8
label_34113c:
    if (ctx->pc == 0x34113Cu) {
        ctx->pc = 0x34113Cu;
            // 0x34113c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x341140u;
        goto label_341140;
    }
    ctx->pc = 0x341138u;
    SET_GPR_U32(ctx, 31, 0x341140u);
    ctx->pc = 0x34113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x341138u;
            // 0x34113c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341140u; }
        if (ctx->pc != 0x341140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x341140u; }
        if (ctx->pc != 0x341140u) { return; }
    }
    ctx->pc = 0x341140u;
label_341140:
    // 0x341140: 0x8e060960  lw          $a2, 0x960($s0)
    ctx->pc = 0x341140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2400)));
label_341144:
    // 0x341144: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x341144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_341148:
    // 0x341148: 0x2404effc  addiu       $a0, $zero, -0x1004
    ctx->pc = 0x341148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963196));
label_34114c:
    // 0x34114c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34114cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_341150:
    // 0x341150: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x341150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_341154:
    // 0x341154: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x341154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_341158:
    // 0x341158: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x341158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_34115c:
    // 0x34115c: 0xae050960  sw          $a1, 0x960($s0)
    ctx->pc = 0x34115cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 5));
label_341160:
    // 0x341160: 0xae040960  sw          $a0, 0x960($s0)
    ctx->pc = 0x341160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 4));
label_341164:
    // 0x341164: 0x8c650ec8  lw          $a1, 0xEC8($v1)
    ctx->pc = 0x341164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_341168:
    // 0x341168: 0x8e040cc4  lw          $a0, 0xCC4($s0)
    ctx->pc = 0x341168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3268)));
label_34116c:
    // 0x34116c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x34116cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_341170:
    // 0x341170: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x341170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_341174:
    // 0x341174: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x341174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_341178:
    // 0x341178: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x341178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_34117c:
    // 0x34117c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x34117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_341180:
    // 0x341180: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x341180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_341184:
    // 0x341184: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x341184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_341188:
    // 0x341188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x341188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_34118c:
    // 0x34118c: 0x90630448  lbu         $v1, 0x448($v1)
    ctx->pc = 0x34118cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1096)));
label_341190:
    // 0x341190: 0xae030d48  sw          $v1, 0xD48($s0)
    ctx->pc = 0x341190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3400), GPR_U32(ctx, 3));
label_341194:
    // 0x341194: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x341194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_341198:
    // 0x341198: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x341198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_34119c:
    // 0x34119c: 0x8e040cc4  lw          $a0, 0xCC4($s0)
    ctx->pc = 0x34119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3268)));
label_3411a0:
    // 0x3411a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3411a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3411a4:
    // 0x3411a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3411a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3411a8:
    // 0x3411a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3411a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3411ac:
    // 0x3411ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3411acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3411b0:
    // 0x3411b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3411b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3411b4:
    // 0x3411b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3411b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3411b8:
    // 0x3411b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3411b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3411bc:
    // 0x3411bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3411bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3411c0:
    // 0x3411c0: 0x8c420208  lw          $v0, 0x208($v0)
    ctx->pc = 0x3411c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
label_3411c4:
    // 0x3411c4: 0xc075268  jal         func_1D49A0
label_3411c8:
    if (ctx->pc == 0x3411C8u) {
        ctx->pc = 0x3411C8u;
            // 0x3411c8: 0xae020d44  sw          $v0, 0xD44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3396), GPR_U32(ctx, 2));
        ctx->pc = 0x3411CCu;
        goto label_3411cc;
    }
    ctx->pc = 0x3411C4u;
    SET_GPR_U32(ctx, 31, 0x3411CCu);
    ctx->pc = 0x3411C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3411C4u;
            // 0x3411c8: 0xae020d44  sw          $v0, 0xD44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D49A0u;
    if (runtime->hasFunction(0x1D49A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D49A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3411CCu; }
        if (ctx->pc != 0x3411CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D49A0_0x1d49a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3411CCu; }
        if (ctx->pc != 0x3411CCu) { return; }
    }
    ctx->pc = 0x3411CCu;
label_3411cc:
    // 0x3411cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3411ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3411d0:
    // 0x3411d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3411d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3411d4:
    // 0x3411d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3411d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3411d8:
    // 0x3411d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3411d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3411dc:
    // 0x3411dc: 0x3e00008  jr          $ra
label_3411e0:
    if (ctx->pc == 0x3411E0u) {
        ctx->pc = 0x3411E0u;
            // 0x3411e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3411E4u;
        goto label_3411e4;
    }
    ctx->pc = 0x3411DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3411E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3411DCu;
            // 0x3411e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3411E4u;
label_3411e4:
    // 0x3411e4: 0x0  nop
    ctx->pc = 0x3411e4u;
    // NOP
label_3411e8:
    // 0x3411e8: 0x0  nop
    ctx->pc = 0x3411e8u;
    // NOP
label_3411ec:
    // 0x3411ec: 0x0  nop
    ctx->pc = 0x3411ecu;
    // NOP
}
