#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00449070
// Address: 0x449070 - 0x4492d0
void sub_00449070_0x449070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449070_0x449070");
#endif

    switch (ctx->pc) {
        case 0x449070u: goto label_449070;
        case 0x449074u: goto label_449074;
        case 0x449078u: goto label_449078;
        case 0x44907cu: goto label_44907c;
        case 0x449080u: goto label_449080;
        case 0x449084u: goto label_449084;
        case 0x449088u: goto label_449088;
        case 0x44908cu: goto label_44908c;
        case 0x449090u: goto label_449090;
        case 0x449094u: goto label_449094;
        case 0x449098u: goto label_449098;
        case 0x44909cu: goto label_44909c;
        case 0x4490a0u: goto label_4490a0;
        case 0x4490a4u: goto label_4490a4;
        case 0x4490a8u: goto label_4490a8;
        case 0x4490acu: goto label_4490ac;
        case 0x4490b0u: goto label_4490b0;
        case 0x4490b4u: goto label_4490b4;
        case 0x4490b8u: goto label_4490b8;
        case 0x4490bcu: goto label_4490bc;
        case 0x4490c0u: goto label_4490c0;
        case 0x4490c4u: goto label_4490c4;
        case 0x4490c8u: goto label_4490c8;
        case 0x4490ccu: goto label_4490cc;
        case 0x4490d0u: goto label_4490d0;
        case 0x4490d4u: goto label_4490d4;
        case 0x4490d8u: goto label_4490d8;
        case 0x4490dcu: goto label_4490dc;
        case 0x4490e0u: goto label_4490e0;
        case 0x4490e4u: goto label_4490e4;
        case 0x4490e8u: goto label_4490e8;
        case 0x4490ecu: goto label_4490ec;
        case 0x4490f0u: goto label_4490f0;
        case 0x4490f4u: goto label_4490f4;
        case 0x4490f8u: goto label_4490f8;
        case 0x4490fcu: goto label_4490fc;
        case 0x449100u: goto label_449100;
        case 0x449104u: goto label_449104;
        case 0x449108u: goto label_449108;
        case 0x44910cu: goto label_44910c;
        case 0x449110u: goto label_449110;
        case 0x449114u: goto label_449114;
        case 0x449118u: goto label_449118;
        case 0x44911cu: goto label_44911c;
        case 0x449120u: goto label_449120;
        case 0x449124u: goto label_449124;
        case 0x449128u: goto label_449128;
        case 0x44912cu: goto label_44912c;
        case 0x449130u: goto label_449130;
        case 0x449134u: goto label_449134;
        case 0x449138u: goto label_449138;
        case 0x44913cu: goto label_44913c;
        case 0x449140u: goto label_449140;
        case 0x449144u: goto label_449144;
        case 0x449148u: goto label_449148;
        case 0x44914cu: goto label_44914c;
        case 0x449150u: goto label_449150;
        case 0x449154u: goto label_449154;
        case 0x449158u: goto label_449158;
        case 0x44915cu: goto label_44915c;
        case 0x449160u: goto label_449160;
        case 0x449164u: goto label_449164;
        case 0x449168u: goto label_449168;
        case 0x44916cu: goto label_44916c;
        case 0x449170u: goto label_449170;
        case 0x449174u: goto label_449174;
        case 0x449178u: goto label_449178;
        case 0x44917cu: goto label_44917c;
        case 0x449180u: goto label_449180;
        case 0x449184u: goto label_449184;
        case 0x449188u: goto label_449188;
        case 0x44918cu: goto label_44918c;
        case 0x449190u: goto label_449190;
        case 0x449194u: goto label_449194;
        case 0x449198u: goto label_449198;
        case 0x44919cu: goto label_44919c;
        case 0x4491a0u: goto label_4491a0;
        case 0x4491a4u: goto label_4491a4;
        case 0x4491a8u: goto label_4491a8;
        case 0x4491acu: goto label_4491ac;
        case 0x4491b0u: goto label_4491b0;
        case 0x4491b4u: goto label_4491b4;
        case 0x4491b8u: goto label_4491b8;
        case 0x4491bcu: goto label_4491bc;
        case 0x4491c0u: goto label_4491c0;
        case 0x4491c4u: goto label_4491c4;
        case 0x4491c8u: goto label_4491c8;
        case 0x4491ccu: goto label_4491cc;
        case 0x4491d0u: goto label_4491d0;
        case 0x4491d4u: goto label_4491d4;
        case 0x4491d8u: goto label_4491d8;
        case 0x4491dcu: goto label_4491dc;
        case 0x4491e0u: goto label_4491e0;
        case 0x4491e4u: goto label_4491e4;
        case 0x4491e8u: goto label_4491e8;
        case 0x4491ecu: goto label_4491ec;
        case 0x4491f0u: goto label_4491f0;
        case 0x4491f4u: goto label_4491f4;
        case 0x4491f8u: goto label_4491f8;
        case 0x4491fcu: goto label_4491fc;
        case 0x449200u: goto label_449200;
        case 0x449204u: goto label_449204;
        case 0x449208u: goto label_449208;
        case 0x44920cu: goto label_44920c;
        case 0x449210u: goto label_449210;
        case 0x449214u: goto label_449214;
        case 0x449218u: goto label_449218;
        case 0x44921cu: goto label_44921c;
        case 0x449220u: goto label_449220;
        case 0x449224u: goto label_449224;
        case 0x449228u: goto label_449228;
        case 0x44922cu: goto label_44922c;
        case 0x449230u: goto label_449230;
        case 0x449234u: goto label_449234;
        case 0x449238u: goto label_449238;
        case 0x44923cu: goto label_44923c;
        case 0x449240u: goto label_449240;
        case 0x449244u: goto label_449244;
        case 0x449248u: goto label_449248;
        case 0x44924cu: goto label_44924c;
        case 0x449250u: goto label_449250;
        case 0x449254u: goto label_449254;
        case 0x449258u: goto label_449258;
        case 0x44925cu: goto label_44925c;
        case 0x449260u: goto label_449260;
        case 0x449264u: goto label_449264;
        case 0x449268u: goto label_449268;
        case 0x44926cu: goto label_44926c;
        case 0x449270u: goto label_449270;
        case 0x449274u: goto label_449274;
        case 0x449278u: goto label_449278;
        case 0x44927cu: goto label_44927c;
        case 0x449280u: goto label_449280;
        case 0x449284u: goto label_449284;
        case 0x449288u: goto label_449288;
        case 0x44928cu: goto label_44928c;
        case 0x449290u: goto label_449290;
        case 0x449294u: goto label_449294;
        case 0x449298u: goto label_449298;
        case 0x44929cu: goto label_44929c;
        case 0x4492a0u: goto label_4492a0;
        case 0x4492a4u: goto label_4492a4;
        case 0x4492a8u: goto label_4492a8;
        case 0x4492acu: goto label_4492ac;
        case 0x4492b0u: goto label_4492b0;
        case 0x4492b4u: goto label_4492b4;
        case 0x4492b8u: goto label_4492b8;
        case 0x4492bcu: goto label_4492bc;
        case 0x4492c0u: goto label_4492c0;
        case 0x4492c4u: goto label_4492c4;
        case 0x4492c8u: goto label_4492c8;
        case 0x4492ccu: goto label_4492cc;
        default: break;
    }

    ctx->pc = 0x449070u;

label_449070:
    // 0x449070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x449070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_449074:
    // 0x449074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x449074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_449078:
    // 0x449078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44907c:
    // 0x44907c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_449080:
    // 0x449080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x449080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449084:
    // 0x449084: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x449084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_449088:
    // 0x449088: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x449088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_44908c:
    // 0x44908c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x44908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_449090:
    // 0x449090: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x449090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_449094:
    // 0x449094: 0xc040138  jal         func_1004E0
label_449098:
    if (ctx->pc == 0x449098u) {
        ctx->pc = 0x449098u;
            // 0x449098: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x44909Cu;
        goto label_44909c;
    }
    ctx->pc = 0x449094u;
    SET_GPR_U32(ctx, 31, 0x44909Cu);
    ctx->pc = 0x449098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449094u;
            // 0x449098: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44909Cu; }
        if (ctx->pc != 0x44909Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44909Cu; }
        if (ctx->pc != 0x44909Cu) { return; }
    }
    ctx->pc = 0x44909Cu;
label_44909c:
    // 0x44909c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44909cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_4490a0:
    // 0x4490a0: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x4490a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
label_4490a4:
    // 0x4490a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4490a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4490a8:
    // 0x4490a8: 0x24a59130  addiu       $a1, $a1, -0x6ED0
    ctx->pc = 0x4490a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938928));
label_4490ac:
    // 0x4490ac: 0x24c68fb0  addiu       $a2, $a2, -0x7050
    ctx->pc = 0x4490acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938544));
label_4490b0:
    // 0x4490b0: 0x24070220  addiu       $a3, $zero, 0x220
    ctx->pc = 0x4490b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4490b4:
    // 0x4490b4: 0xc040840  jal         func_102100
label_4490b8:
    if (ctx->pc == 0x4490B8u) {
        ctx->pc = 0x4490B8u;
            // 0x4490b8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4490BCu;
        goto label_4490bc;
    }
    ctx->pc = 0x4490B4u;
    SET_GPR_U32(ctx, 31, 0x4490BCu);
    ctx->pc = 0x4490B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4490B4u;
            // 0x4490b8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4490BCu; }
        if (ctx->pc != 0x4490BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4490BCu; }
        if (ctx->pc != 0x4490BCu) { return; }
    }
    ctx->pc = 0x4490BCu;
label_4490bc:
    // 0x4490bc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4490bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_4490c0:
    // 0x4490c0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4490c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4490c4:
    // 0x4490c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4490c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4490c8:
    // 0x4490c8: 0xc040138  jal         func_1004E0
label_4490cc:
    if (ctx->pc == 0x4490CCu) {
        ctx->pc = 0x4490CCu;
            // 0x4490cc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x4490D0u;
        goto label_4490d0;
    }
    ctx->pc = 0x4490C8u;
    SET_GPR_U32(ctx, 31, 0x4490D0u);
    ctx->pc = 0x4490CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4490C8u;
            // 0x4490cc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4490D0u; }
        if (ctx->pc != 0x4490D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4490D0u; }
        if (ctx->pc != 0x4490D0u) { return; }
    }
    ctx->pc = 0x4490D0u;
label_4490d0:
    // 0x4490d0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x4490d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_4490d4:
    // 0x4490d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4490d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4490d8:
    // 0x4490d8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4490d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4490dc:
    // 0x4490dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4490dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4490e0:
    // 0x4490e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4490e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4490e4:
    // 0x4490e4: 0xc04a576  jal         func_1295D8
label_4490e8:
    if (ctx->pc == 0x4490E8u) {
        ctx->pc = 0x4490E8u;
            // 0x4490e8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x4490ECu;
        goto label_4490ec;
    }
    ctx->pc = 0x4490E4u;
    SET_GPR_U32(ctx, 31, 0x4490ECu);
    ctx->pc = 0x4490E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4490E4u;
            // 0x4490e8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4490ECu; }
        if (ctx->pc != 0x4490ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4490ECu; }
        if (ctx->pc != 0x4490ECu) { return; }
    }
    ctx->pc = 0x4490ECu;
label_4490ec:
    // 0x4490ec: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x4490ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_4490f0:
    // 0x4490f0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4490f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4490f4:
    // 0x4490f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4490f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4490f8:
    // 0x4490f8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x4490f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4490fc:
    // 0x4490fc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4490fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_449100:
    // 0x449100: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x449100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_449104:
    // 0x449104: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x449104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_449108:
    // 0x449108: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x449108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_44910c:
    // 0x44910c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x44910cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_449110:
    // 0x449110: 0xc1124b4  jal         func_4492D0
label_449114:
    if (ctx->pc == 0x449114u) {
        ctx->pc = 0x449114u;
            // 0x449114: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x449118u;
        goto label_449118;
    }
    ctx->pc = 0x449110u;
    SET_GPR_U32(ctx, 31, 0x449118u);
    ctx->pc = 0x449114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449110u;
            // 0x449114: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4492D0u;
    if (runtime->hasFunction(0x4492D0u)) {
        auto targetFn = runtime->lookupFunction(0x4492D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449118u; }
        if (ctx->pc != 0x449118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004492D0_0x4492d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449118u; }
        if (ctx->pc != 0x449118u) { return; }
    }
    ctx->pc = 0x449118u;
label_449118:
    // 0x449118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x449118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44911c:
    // 0x44911c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44911cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449120:
    // 0x449120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_449124:
    // 0x449124: 0x3e00008  jr          $ra
label_449128:
    if (ctx->pc == 0x449128u) {
        ctx->pc = 0x449128u;
            // 0x449128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44912Cu;
        goto label_44912c;
    }
    ctx->pc = 0x449124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449124u;
            // 0x449128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44912Cu;
label_44912c:
    // 0x44912c: 0x0  nop
    ctx->pc = 0x44912cu;
    // NOP
label_449130:
    // 0x449130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x449130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_449134:
    // 0x449134: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x449134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_449138:
    // 0x449138: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x449138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44913c:
    // 0x44913c: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x44913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
label_449140:
    // 0x449140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x449140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_449144:
    // 0x449144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_449148:
    // 0x449148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x449148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44914c:
    // 0x44914c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44914cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_449150:
    // 0x449150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x449150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449154:
    // 0x449154: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x449154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_449158:
    // 0x449158: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x449158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_44915c:
    // 0x44915c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x44915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_449160:
    // 0x449160: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x449160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_449164:
    // 0x449164: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x449164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_449168:
    // 0x449168: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x449168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_44916c:
    // 0x44916c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x44916cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_449170:
    // 0x449170: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x449170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
label_449174:
    // 0x449174: 0xc04c968  jal         func_1325A0
label_449178:
    if (ctx->pc == 0x449178u) {
        ctx->pc = 0x449178u;
            // 0x449178: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x44917Cu;
        goto label_44917c;
    }
    ctx->pc = 0x449174u;
    SET_GPR_U32(ctx, 31, 0x44917Cu);
    ctx->pc = 0x449178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449174u;
            // 0x449178: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44917Cu; }
        if (ctx->pc != 0x44917Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44917Cu; }
        if (ctx->pc != 0x44917Cu) { return; }
    }
    ctx->pc = 0x44917Cu;
label_44917c:
    // 0x44917c: 0xc04c968  jal         func_1325A0
label_449180:
    if (ctx->pc == 0x449180u) {
        ctx->pc = 0x449180u;
            // 0x449180: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x449184u;
        goto label_449184;
    }
    ctx->pc = 0x44917Cu;
    SET_GPR_U32(ctx, 31, 0x449184u);
    ctx->pc = 0x449180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44917Cu;
            // 0x449180: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449184u; }
        if (ctx->pc != 0x449184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449184u; }
        if (ctx->pc != 0x449184u) { return; }
    }
    ctx->pc = 0x449184u;
label_449184:
    // 0x449184: 0xc04c968  jal         func_1325A0
label_449188:
    if (ctx->pc == 0x449188u) {
        ctx->pc = 0x449188u;
            // 0x449188: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x44918Cu;
        goto label_44918c;
    }
    ctx->pc = 0x449184u;
    SET_GPR_U32(ctx, 31, 0x44918Cu);
    ctx->pc = 0x449188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449184u;
            // 0x449188: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44918Cu; }
        if (ctx->pc != 0x44918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44918Cu; }
        if (ctx->pc != 0x44918Cu) { return; }
    }
    ctx->pc = 0x44918Cu;
label_44918c:
    // 0x44918c: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x44918cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_449190:
    // 0x449190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x449190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_449194:
    // 0x449194: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x449194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
label_449198:
    // 0x449198: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x449198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_44919c:
    // 0x44919c: 0xc04f26c  jal         func_13C9B0
label_4491a0:
    if (ctx->pc == 0x4491A0u) {
        ctx->pc = 0x4491A0u;
            // 0x4491a0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x4491A4u;
        goto label_4491a4;
    }
    ctx->pc = 0x44919Cu;
    SET_GPR_U32(ctx, 31, 0x4491A4u);
    ctx->pc = 0x4491A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44919Cu;
            // 0x4491a0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4491A4u; }
        if (ctx->pc != 0x4491A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4491A4u; }
        if (ctx->pc != 0x4491A4u) { return; }
    }
    ctx->pc = 0x4491A4u;
label_4491a4:
    // 0x4491a4: 0xc04c968  jal         func_1325A0
label_4491a8:
    if (ctx->pc == 0x4491A8u) {
        ctx->pc = 0x4491A8u;
            // 0x4491a8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4491ACu;
        goto label_4491ac;
    }
    ctx->pc = 0x4491A4u;
    SET_GPR_U32(ctx, 31, 0x4491ACu);
    ctx->pc = 0x4491A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4491A4u;
            // 0x4491a8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4491ACu; }
        if (ctx->pc != 0x4491ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4491ACu; }
        if (ctx->pc != 0x4491ACu) { return; }
    }
    ctx->pc = 0x4491ACu;
label_4491ac:
    // 0x4491ac: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4491acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4491b0:
    // 0x4491b0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x4491b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_4491b4:
    // 0x4491b4: 0xc04cc04  jal         func_133010
label_4491b8:
    if (ctx->pc == 0x4491B8u) {
        ctx->pc = 0x4491B8u;
            // 0x4491b8: 0x24a5d750  addiu       $a1, $a1, -0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956880));
        ctx->pc = 0x4491BCu;
        goto label_4491bc;
    }
    ctx->pc = 0x4491B4u;
    SET_GPR_U32(ctx, 31, 0x4491BCu);
    ctx->pc = 0x4491B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4491B4u;
            // 0x4491b8: 0x24a5d750  addiu       $a1, $a1, -0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4491BCu; }
        if (ctx->pc != 0x4491BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4491BCu; }
        if (ctx->pc != 0x4491BCu) { return; }
    }
    ctx->pc = 0x4491BCu;
label_4491bc:
    // 0x4491bc: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x4491bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_4491c0:
    // 0x4491c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4491c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4491c4:
    // 0x4491c4: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x4491c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_4491c8:
    // 0x4491c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4491c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4491cc:
    // 0x4491cc: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x4491ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_4491d0:
    // 0x4491d0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x4491d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_4491d4:
    // 0x4491d4: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x4491d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
label_4491d8:
    // 0x4491d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4491d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4491dc:
    // 0x4491dc: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x4491dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
label_4491e0:
    // 0x4491e0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4491e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4491e4:
    // 0x4491e4: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x4491e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
label_4491e8:
    // 0x4491e8: 0xc04cbd8  jal         func_132F60
label_4491ec:
    if (ctx->pc == 0x4491ECu) {
        ctx->pc = 0x4491ECu;
            // 0x4491ec: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4491F0u;
        goto label_4491f0;
    }
    ctx->pc = 0x4491E8u;
    SET_GPR_U32(ctx, 31, 0x4491F0u);
    ctx->pc = 0x4491ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4491E8u;
            // 0x4491ec: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4491F0u; }
        if (ctx->pc != 0x4491F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4491F0u; }
        if (ctx->pc != 0x4491F0u) { return; }
    }
    ctx->pc = 0x4491F0u;
label_4491f0:
    // 0x4491f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4491f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4491f4:
    // 0x4491f4: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x4491f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_4491f8:
    // 0x4491f8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4491f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4491fc:
    // 0x4491fc: 0xc04cbd8  jal         func_132F60
label_449200:
    if (ctx->pc == 0x449200u) {
        ctx->pc = 0x449200u;
            // 0x449200: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x449204u;
        goto label_449204;
    }
    ctx->pc = 0x4491FCu;
    SET_GPR_U32(ctx, 31, 0x449204u);
    ctx->pc = 0x449200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4491FCu;
            // 0x449200: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449204u; }
        if (ctx->pc != 0x449204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449204u; }
        if (ctx->pc != 0x449204u) { return; }
    }
    ctx->pc = 0x449204u;
label_449204:
    // 0x449204: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x449204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_449208:
    // 0x449208: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x449208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_44920c:
    // 0x44920c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x44920cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_449210:
    // 0x449210: 0xc04cbd8  jal         func_132F60
label_449214:
    if (ctx->pc == 0x449214u) {
        ctx->pc = 0x449214u;
            // 0x449214: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x449218u;
        goto label_449218;
    }
    ctx->pc = 0x449210u;
    SET_GPR_U32(ctx, 31, 0x449218u);
    ctx->pc = 0x449214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449210u;
            // 0x449214: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449218u; }
        if (ctx->pc != 0x449218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449218u; }
        if (ctx->pc != 0x449218u) { return; }
    }
    ctx->pc = 0x449218u;
label_449218:
    // 0x449218: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x449218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44921c:
    // 0x44921c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x44921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_449220:
    // 0x449220: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x449220u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_449224:
    // 0x449224: 0xc04cbd8  jal         func_132F60
label_449228:
    if (ctx->pc == 0x449228u) {
        ctx->pc = 0x449228u;
            // 0x449228: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x44922Cu;
        goto label_44922c;
    }
    ctx->pc = 0x449224u;
    SET_GPR_U32(ctx, 31, 0x44922Cu);
    ctx->pc = 0x449228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449224u;
            // 0x449228: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44922Cu; }
        if (ctx->pc != 0x44922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44922Cu; }
        if (ctx->pc != 0x44922Cu) { return; }
    }
    ctx->pc = 0x44922Cu;
label_44922c:
    // 0x44922c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44922cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_449230:
    // 0x449230: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x449230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_449234:
    // 0x449234: 0x2442d6c0  addiu       $v0, $v0, -0x2940
    ctx->pc = 0x449234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956736));
label_449238:
    // 0x449238: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x449238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_44923c:
    // 0x44923c: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x44923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
label_449240:
    // 0x449240: 0xc040180  jal         func_100600
label_449244:
    if (ctx->pc == 0x449244u) {
        ctx->pc = 0x449244u;
            // 0x449244: 0xae0001d4  sw          $zero, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
        ctx->pc = 0x449248u;
        goto label_449248;
    }
    ctx->pc = 0x449240u;
    SET_GPR_U32(ctx, 31, 0x449248u);
    ctx->pc = 0x449244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449240u;
            // 0x449244: 0xae0001d4  sw          $zero, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449248u; }
        if (ctx->pc != 0x449248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449248u; }
        if (ctx->pc != 0x449248u) { return; }
    }
    ctx->pc = 0x449248u;
label_449248:
    // 0x449248: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x449248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44924c:
    // 0x44924c: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_449250:
    if (ctx->pc == 0x449250u) {
        ctx->pc = 0x449250u;
            // 0x449250: 0xae110210  sw          $s1, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
        ctx->pc = 0x449254u;
        goto label_449254;
    }
    ctx->pc = 0x44924Cu;
    {
        const bool branch_taken_0x44924c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44924c) {
            ctx->pc = 0x449250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44924Cu;
            // 0x449250: 0xae110210  sw          $s1, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449290u;
            goto label_449290;
        }
    }
    ctx->pc = 0x449254u;
label_449254:
    // 0x449254: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x449254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_449258:
    // 0x449258: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x449258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_44925c:
    // 0x44925c: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x44925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_449260:
    // 0x449260: 0x346513a9  ori         $a1, $v1, 0x13A9
    ctx->pc = 0x449260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5033);
label_449264:
    // 0x449264: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x449264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_449268:
    // 0x449268: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x449268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_44926c:
    // 0x44926c: 0x320f809  jalr        $t9
label_449270:
    if (ctx->pc == 0x449270u) {
        ctx->pc = 0x449270u;
            // 0x449270: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x449274u;
        goto label_449274;
    }
    ctx->pc = 0x44926Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x449274u);
        ctx->pc = 0x449270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44926Cu;
            // 0x449270: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x449274u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x449274u; }
            if (ctx->pc != 0x449274u) { return; }
        }
        }
    }
    ctx->pc = 0x449274u;
label_449274:
    // 0x449274: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x449274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_449278:
    // 0x449278: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x449278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_44927c:
    // 0x44927c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44927cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_449280:
    // 0x449280: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x449280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_449284:
    // 0x449284: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x449284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_449288:
    // 0x449288: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x449288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_44928c:
    // 0x44928c: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x44928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_449290:
    // 0x449290: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x449290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_449294:
    // 0x449294: 0x8c4389e8  lw          $v1, -0x7618($v0)
    ctx->pc = 0x449294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_449298:
    // 0x449298: 0x8c790004  lw          $t9, 0x4($v1)
    ctx->pc = 0x449298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_44929c:
    // 0x44929c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x44929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_4492a0:
    // 0x4492a0: 0x344513a9  ori         $a1, $v0, 0x13A9
    ctx->pc = 0x4492a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
label_4492a4:
    // 0x4492a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4492a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4492a8:
    // 0x4492a8: 0x320f809  jalr        $t9
label_4492ac:
    if (ctx->pc == 0x4492ACu) {
        ctx->pc = 0x4492ACu;
            // 0x4492ac: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x4492B0u;
        goto label_4492b0;
    }
    ctx->pc = 0x4492A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4492B0u);
        ctx->pc = 0x4492ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4492A8u;
            // 0x4492ac: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4492B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4492B0u; }
            if (ctx->pc != 0x4492B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4492B0u;
label_4492b0:
    // 0x4492b0: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x4492b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
label_4492b4:
    // 0x4492b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4492b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4492b8:
    // 0x4492b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4492b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4492bc:
    // 0x4492bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4492bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4492c0:
    // 0x4492c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4492c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4492c4:
    // 0x4492c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4492c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4492c8:
    // 0x4492c8: 0x3e00008  jr          $ra
label_4492cc:
    if (ctx->pc == 0x4492CCu) {
        ctx->pc = 0x4492CCu;
            // 0x4492cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4492D0u;
        goto label_fallthrough_0x4492c8;
    }
    ctx->pc = 0x4492C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4492CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4492C8u;
            // 0x4492cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4492c8:
    ctx->pc = 0x4492D0u;
}
