#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001411C0
// Address: 0x1411c0 - 0x141570
void sub_001411C0_0x1411c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001411C0_0x1411c0");
#endif

    switch (ctx->pc) {
        case 0x141264u: goto label_141264;
        case 0x14126cu: goto label_14126c;
        case 0x141290u: goto label_141290;
        case 0x141298u: goto label_141298;
        case 0x1412a8u: goto label_1412a8;
        case 0x1412b0u: goto label_1412b0;
        case 0x14131cu: goto label_14131c;
        case 0x141344u: goto label_141344;
        case 0x1413b8u: goto label_1413b8;
        case 0x1413e0u: goto label_1413e0;
        case 0x141418u: goto label_141418;
        case 0x141454u: goto label_141454;
        case 0x141478u: goto label_141478;
        case 0x1414c4u: goto label_1414c4;
        case 0x1414e0u: goto label_1414e0;
        case 0x14153cu: goto label_14153c;
        case 0x141548u: goto label_141548;
        default: break;
    }

    ctx->pc = 0x1411c0u;

    // 0x1411c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1411c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1411c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1411c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1411c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1411c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1411cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1411ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1411d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1411d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1411d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1411d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1411d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1411d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1411dc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1411dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1411e0: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x1411e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1411e4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1411e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1411e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1411e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1411ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1411ECu;
    {
        const bool branch_taken_0x1411ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411ECu;
            // 0x1411f0: 0x8c900038  lw          $s0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411ec) {
            ctx->pc = 0x1411F8u;
            goto label_1411f8;
        }
    }
    ctx->pc = 0x1411F4u;
    // 0x1411f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1411f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1411f8:
    // 0x1411f8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1411f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1411fc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1411fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x141200: 0x401827  not         $v1, $v0
    ctx->pc = 0x141200u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x141204: 0x8f8882f0  lw          $t0, -0x7D10($gp)
    ctx->pc = 0x141204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x141208: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14120c: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x14120cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x141210: 0x8c455820  lw          $a1, 0x5820($v0)
    ctx->pc = 0x141210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22560)));
    // 0x141214: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x141214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x141218: 0x1033824  and         $a3, $t0, $v1
    ctx->pc = 0x141218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x14121c: 0x802027  not         $a0, $a0
    ctx->pc = 0x14121cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x141220: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x141224: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x141224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x141228: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14122c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x14122cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x141230: 0x8c42586c  lw          $v0, 0x586C($v0)
    ctx->pc = 0x141230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22636)));
    // 0x141234: 0xe59825  or          $s3, $a3, $a1
    ctx->pc = 0x141234u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x141238: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x141238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14123c: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14123Cu;
    {
        const bool branch_taken_0x14123c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x141240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14123Cu;
            // 0x141240: 0x34720200  ori         $s2, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14123c) {
            ctx->pc = 0x141254u;
            goto label_141254;
        }
    }
    ctx->pc = 0x141244u;
    // 0x141244: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141248: 0x8c425870  lw          $v0, 0x5870($v0)
    ctx->pc = 0x141248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22640)));
    // 0x14124c: 0x5242000c  beql        $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14124Cu;
    {
        const bool branch_taken_0x14124c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x14124c) {
            ctx->pc = 0x141250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14124Cu;
            // 0x141250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141280u;
            goto label_141280;
        }
    }
    ctx->pc = 0x141254u;
label_141254:
    // 0x141254: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x141254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x141258: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x141258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14125c: 0xc057240  jal         func_15C900
    ctx->pc = 0x14125Cu;
    SET_GPR_U32(ctx, 31, 0x141264u);
    ctx->pc = 0x141260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14125Cu;
            // 0x141260: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141264u; }
        if (ctx->pc != 0x141264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141264u; }
        if (ctx->pc != 0x141264u) { return; }
    }
    ctx->pc = 0x141264u;
label_141264:
    // 0x141264: 0xc05724c  jal         func_15C930
    ctx->pc = 0x141264u;
    SET_GPR_U32(ctx, 31, 0x14126Cu);
    ctx->pc = 0x141268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141264u;
            // 0x141268: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14126Cu; }
        if (ctx->pc != 0x14126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14126Cu; }
        if (ctx->pc != 0x14126Cu) { return; }
    }
    ctx->pc = 0x14126Cu;
label_14126c:
    // 0x14126c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14126cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x141270: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141274: 0xac73586c  sw          $s3, 0x586C($v1)
    ctx->pc = 0x141274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22636), GPR_U32(ctx, 19));
    // 0x141278: 0xac525870  sw          $s2, 0x5870($v0)
    ctx->pc = 0x141278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 18));
    // 0x14127c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141280:
    // 0x141280: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141280u;
    {
        const bool branch_taken_0x141280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x141280) {
            ctx->pc = 0x141284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141280u;
            // 0x141284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1412A0u;
            goto label_1412a0;
        }
    }
    ctx->pc = 0x141288u;
    // 0x141288: 0xc05722c  jal         func_15C8B0
    ctx->pc = 0x141288u;
    SET_GPR_U32(ctx, 31, 0x141290u);
    ctx->pc = 0x14128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141288u;
            // 0x14128c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8B0u;
    if (runtime->hasFunction(0x15C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141290u; }
        if (ctx->pc != 0x141290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8B0_0x15c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141290u; }
        if (ctx->pc != 0x141290u) { return; }
    }
    ctx->pc = 0x141290u;
label_141290:
    // 0x141290: 0xc057230  jal         func_15C8C0
    ctx->pc = 0x141290u;
    SET_GPR_U32(ctx, 31, 0x141298u);
    ctx->pc = 0x141294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141290u;
            // 0x141294: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8C0u;
    if (runtime->hasFunction(0x15C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141298u; }
        if (ctx->pc != 0x141298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8C0_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141298u; }
        if (ctx->pc != 0x141298u) { return; }
    }
    ctx->pc = 0x141298u;
label_141298:
    // 0x141298: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x141298u;
    {
        const bool branch_taken_0x141298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141298u;
            // 0x14129c: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141298) {
            ctx->pc = 0x1412B4u;
            goto label_1412b4;
        }
    }
    ctx->pc = 0x1412A0u;
label_1412a0:
    // 0x1412a0: 0xc057238  jal         func_15C8E0
    ctx->pc = 0x1412A0u;
    SET_GPR_U32(ctx, 31, 0x1412A8u);
    ctx->pc = 0x15C8E0u;
    if (runtime->hasFunction(0x15C8E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412A8u; }
        if (ctx->pc != 0x1412A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8E0_0x15c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412A8u; }
        if (ctx->pc != 0x1412A8u) { return; }
    }
    ctx->pc = 0x1412A8u;
label_1412a8:
    // 0x1412a8: 0xc05723c  jal         func_15C8F0
    ctx->pc = 0x1412A8u;
    SET_GPR_U32(ctx, 31, 0x1412B0u);
    ctx->pc = 0x1412ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1412A8u;
            // 0x1412ac: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8F0u;
    if (runtime->hasFunction(0x15C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412B0u; }
        if (ctx->pc != 0x1412B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8F0_0x15c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412B0u; }
        if (ctx->pc != 0x1412B0u) { return; }
    }
    ctx->pc = 0x1412B0u;
label_1412b0:
    // 0x1412b0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1412b4:
    // 0x1412b4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1412b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1412b8: 0x30637f00  andi        $v1, $v1, 0x7F00
    ctx->pc = 0x1412b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32512);
    // 0x1412bc: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1412BCu;
    {
        const bool branch_taken_0x1412bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1412C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1412BCu;
            // 0x1412c0: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412bc) {
            ctx->pc = 0x141344u;
            goto label_141344;
        }
    }
    ctx->pc = 0x1412C4u;
    // 0x1412c4: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1412c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1412c8: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1412C8u;
    {
        const bool branch_taken_0x1412c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1412c8) {
            ctx->pc = 0x1412CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1412C8u;
            // 0x1412cc: 0x32037f00  andi        $v1, $s0, 0x7F00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x141348u;
            goto label_141348;
        }
    }
    ctx->pc = 0x1412D0u;
    // 0x1412d0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1412d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1412d4: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1412D4u;
    {
        const bool branch_taken_0x1412d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1412d4) {
            ctx->pc = 0x141344u;
            goto label_141344;
        }
    }
    ctx->pc = 0x1412DCu;
    // 0x1412dc: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1412dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1412e0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1412E0u;
    {
        const bool branch_taken_0x1412e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1412e0) {
            ctx->pc = 0x141324u;
            goto label_141324;
        }
    }
    ctx->pc = 0x1412E8u;
    // 0x1412e8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1412e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1412ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1412ECu;
    {
        const bool branch_taken_0x1412ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1412ec) {
            ctx->pc = 0x1412FCu;
            goto label_1412fc;
        }
    }
    ctx->pc = 0x1412F4u;
    // 0x1412f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1412F4u;
    {
        const bool branch_taken_0x1412f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1412f4) {
            ctx->pc = 0x141344u;
            goto label_141344;
        }
    }
    ctx->pc = 0x1412FCu;
label_1412fc:
    // 0x1412fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1412fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x141300: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x141300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x141304: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x141304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x141308: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14130c: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x14130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
    // 0x141310: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x141310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x141314: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x141314u;
    SET_GPR_U32(ctx, 31, 0x14131Cu);
    ctx->pc = 0x141318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141314u;
            // 0x141318: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14131Cu; }
        if (ctx->pc != 0x14131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14131Cu; }
        if (ctx->pc != 0x14131Cu) { return; }
    }
    ctx->pc = 0x14131Cu;
label_14131c:
    // 0x14131c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14131Cu;
    {
        const bool branch_taken_0x14131c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14131c) {
            ctx->pc = 0x141344u;
            goto label_141344;
        }
    }
    ctx->pc = 0x141324u;
label_141324:
    // 0x141324: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x141328: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x14132c: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x141330: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141334: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x141334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
    // 0x141338: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x141338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x14133c: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x14133Cu;
    SET_GPR_U32(ctx, 31, 0x141344u);
    ctx->pc = 0x141340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14133Cu;
            // 0x141340: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141344u; }
        if (ctx->pc != 0x141344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141344u; }
        if (ctx->pc != 0x141344u) { return; }
    }
    ctx->pc = 0x141344u;
label_141344:
    // 0x141344: 0x32037f00  andi        $v1, $s0, 0x7F00
    ctx->pc = 0x141344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32512);
label_141348:
    // 0x141348: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x141348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14134c: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x14134Cu;
    {
        const bool branch_taken_0x14134c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14134c) {
            ctx->pc = 0x141350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14134Cu;
            // 0x141350: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141414u;
            goto label_141414;
        }
    }
    ctx->pc = 0x141354u;
    // 0x141354: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x141358: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x141358u;
    {
        const bool branch_taken_0x141358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141358) {
            ctx->pc = 0x141410u;
            goto label_141410;
        }
    }
    ctx->pc = 0x141360u;
    // 0x141360: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x141360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x141364: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x141364u;
    {
        const bool branch_taken_0x141364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141364) {
            ctx->pc = 0x141410u;
            goto label_141410;
        }
    }
    ctx->pc = 0x14136Cu;
    // 0x14136c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x14136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x141370: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x141370u;
    {
        const bool branch_taken_0x141370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141370) {
            ctx->pc = 0x1413E8u;
            goto label_1413e8;
        }
    }
    ctx->pc = 0x141378u;
    // 0x141378: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x141378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14137c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14137Cu;
    {
        const bool branch_taken_0x14137c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14137c) {
            ctx->pc = 0x1413C0u;
            goto label_1413c0;
        }
    }
    ctx->pc = 0x141384u;
    // 0x141384: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x141384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x141388: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141388u;
    {
        const bool branch_taken_0x141388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141388) {
            ctx->pc = 0x141398u;
            goto label_141398;
        }
    }
    ctx->pc = 0x141390u;
    // 0x141390: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x141390u;
    {
        const bool branch_taken_0x141390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141390u;
            // 0x141394: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141390) {
            ctx->pc = 0x141400u;
            goto label_141400;
        }
    }
    ctx->pc = 0x141398u;
label_141398:
    // 0x141398: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14139c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x14139cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1413a0: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x1413a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1413a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1413a8: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x1413a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
    // 0x1413ac: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1413acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1413b0: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x1413B0u;
    SET_GPR_U32(ctx, 31, 0x1413B8u);
    ctx->pc = 0x1413B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1413B0u;
            // 0x1413b4: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413B8u; }
        if (ctx->pc != 0x1413B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413B8u; }
        if (ctx->pc != 0x1413B8u) { return; }
    }
    ctx->pc = 0x1413B8u;
label_1413b8:
    // 0x1413b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1413B8u;
    {
        const bool branch_taken_0x1413b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1413b8) {
            ctx->pc = 0x141410u;
            goto label_141410;
        }
    }
    ctx->pc = 0x1413C0u;
label_1413c0:
    // 0x1413c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1413c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1413c4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1413c8: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x1413c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1413cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1413d0: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
    // 0x1413d4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1413d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1413d8: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x1413D8u;
    SET_GPR_U32(ctx, 31, 0x1413E0u);
    ctx->pc = 0x1413DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1413D8u;
            // 0x1413dc: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413E0u; }
        if (ctx->pc != 0x1413E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413E0u; }
        if (ctx->pc != 0x1413E0u) { return; }
    }
    ctx->pc = 0x1413E0u;
label_1413e0:
    // 0x1413e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1413E0u;
    {
        const bool branch_taken_0x1413e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1413e0) {
            ctx->pc = 0x141410u;
            goto label_141410;
        }
    }
    ctx->pc = 0x1413E8u;
label_1413e8:
    // 0x1413e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1413e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1413ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1413ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1413f0: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x1413f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1413f4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x1413f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x1413f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1413F8u;
    {
        const bool branch_taken_0x1413f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1413F8u;
            // 0x1413fc: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413f8) {
            ctx->pc = 0x141410u;
            goto label_141410;
        }
    }
    ctx->pc = 0x141400u;
label_141400:
    // 0x141400: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141404: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x141404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x141408: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x141408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x14140c: 0xac435828  sw          $v1, 0x5828($v0)
    ctx->pc = 0x14140cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
label_141410:
    // 0x141410: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x141410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141414:
    // 0x141414: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x141414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141418:
    // 0x141418: 0x9e080048  lwu         $t0, 0x48($s0)
    ctx->pc = 0x141418u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x14141c: 0x26420042  addiu       $v0, $s2, 0x42
    ctx->pc = 0x14141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 66));
    // 0x141420: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x141420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141424: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x141424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x141428: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x141428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14142c: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14142cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x141430: 0x83c38  dsll        $a3, $t0, 16
    ctx->pc = 0x141430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 16);
    // 0x141434: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x141434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x141438: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x141438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x14143c: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x141440: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x141440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x141444: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x141444u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x141448: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14144c: 0xc057540  jal         func_15D500
    ctx->pc = 0x14144Cu;
    SET_GPR_U32(ctx, 31, 0x141454u);
    ctx->pc = 0x141450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14144Cu;
            // 0x141450: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141454u; }
        if (ctx->pc != 0x141454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141454u; }
        if (ctx->pc != 0x141454u) { return; }
    }
    ctx->pc = 0x141454u;
label_141454:
    // 0x141454: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x141454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x141458: 0x26420047  addiu       $v0, $s2, 0x47
    ctx->pc = 0x141458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 71));
    // 0x14145c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14145cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141460: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x141460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x141464: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141468: 0xaf8281d4  sw          $v0, -0x7E2C($gp)
    ctx->pc = 0x141468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
    // 0x14146c: 0x9e07003c  lwu         $a3, 0x3C($s0)
    ctx->pc = 0x14146cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x141470: 0xc057540  jal         func_15D500
    ctx->pc = 0x141470u;
    SET_GPR_U32(ctx, 31, 0x141478u);
    ctx->pc = 0x141474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141470u;
            // 0x141474: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141478u; }
        if (ctx->pc != 0x141478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141478u; }
        if (ctx->pc != 0x141478u) { return; }
    }
    ctx->pc = 0x141478u;
label_141478:
    // 0x141478: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x141478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x14147c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14147cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x141480: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141484: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x141484u;
    {
        const bool branch_taken_0x141484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141484) {
            ctx->pc = 0x141488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141484u;
            // 0x141488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141490u;
            goto label_141490;
        }
    }
    ctx->pc = 0x14148Cu;
    // 0x14148c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14148cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141490:
    // 0x141490: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x141494: 0x2644004e  addiu       $a0, $s2, 0x4E
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 78));
    // 0x141498: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14149c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x14149cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1414a0: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x1414a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x1414a4: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x1414a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x1414a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1414a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1414ac: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x1414acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x1414b0: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x1414b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1414b4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1414b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1414b8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1414b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1414bc: 0xc057540  jal         func_15D500
    ctx->pc = 0x1414BCu;
    SET_GPR_U32(ctx, 31, 0x1414C4u);
    ctx->pc = 0x1414C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1414BCu;
            // 0x1414c0: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414C4u; }
        if (ctx->pc != 0x1414C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414C4u; }
        if (ctx->pc != 0x1414C4u) { return; }
    }
    ctx->pc = 0x1414C4u;
label_1414c4:
    // 0x1414c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1414c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1414c8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1414c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1414cc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1414CCu;
    {
        const bool branch_taken_0x1414cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1414D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1414CCu;
            // 0x1414d0: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414cc) {
            ctx->pc = 0x141418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141418;
        }
    }
    ctx->pc = 0x1414D4u;
    // 0x1414d4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1414d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1414d8: 0xc050114  jal         func_140450
    ctx->pc = 0x1414D8u;
    SET_GPR_U32(ctx, 31, 0x1414E0u);
    ctx->pc = 0x1414DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1414D8u;
            // 0x1414dc: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140450u;
    if (runtime->hasFunction(0x140450u)) {
        auto targetFn = runtime->lookupFunction(0x140450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414E0u; }
        if (ctx->pc != 0x1414E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140450_0x140450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414E0u; }
        if (ctx->pc != 0x1414E0u) { return; }
    }
    ctx->pc = 0x1414E0u;
label_1414e0:
    // 0x1414e0: 0x8f8381a8  lw          $v1, -0x7E58($gp)
    ctx->pc = 0x1414e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934952)));
    // 0x1414e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1414e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1414e8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1414E8u;
    {
        const bool branch_taken_0x1414e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1414ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1414E8u;
            // 0x1414ec: 0xac405830  sw          $zero, 0x5830($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414e8) {
            ctx->pc = 0x141528u;
            goto label_141528;
        }
    }
    ctx->pc = 0x1414F0u;
    // 0x1414f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1414f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1414f4: 0x8c4257e0  lw          $v0, 0x57E0($v0)
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22496)));
    // 0x1414f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1414F8u;
    {
        const bool branch_taken_0x1414f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1414f8) {
            ctx->pc = 0x1414FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1414F8u;
            // 0x1414fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141520u;
            goto label_141520;
        }
    }
    ctx->pc = 0x141500u;
    // 0x141500: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141504: 0x8c425810  lw          $v0, 0x5810($v0)
    ctx->pc = 0x141504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22544)));
    // 0x141508: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x141508u;
    {
        const bool branch_taken_0x141508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141508) {
            ctx->pc = 0x14150Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141508u;
            // 0x14150c: 0x8f8681d4  lw          $a2, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14152Cu;
            goto label_14152c;
        }
    }
    ctx->pc = 0x141510u;
    // 0x141510: 0x8f8281a0  lw          $v0, -0x7E60($gp)
    ctx->pc = 0x141510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934944)));
    // 0x141514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141514u;
    {
        const bool branch_taken_0x141514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141514) {
            ctx->pc = 0x141528u;
            goto label_141528;
        }
    }
    ctx->pc = 0x14151Cu;
    // 0x14151c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141520:
    // 0x141520: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141524: 0xac435830  sw          $v1, 0x5830($v0)
    ctx->pc = 0x141524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22576), GPR_U32(ctx, 3));
label_141528:
    // 0x141528: 0x8f8681d4  lw          $a2, -0x7E2C($gp)
    ctx->pc = 0x141528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14152c:
    // 0x14152c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14152cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x141530: 0x24845880  addiu       $a0, $a0, 0x5880
    ctx->pc = 0x141530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22656));
    // 0x141534: 0xc05750c  jal         func_15D430
    ctx->pc = 0x141534u;
    SET_GPR_U32(ctx, 31, 0x14153Cu);
    ctx->pc = 0x141538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141534u;
            // 0x141538: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14153Cu; }
        if (ctx->pc != 0x14153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14153Cu; }
        if (ctx->pc != 0x14153Cu) { return; }
    }
    ctx->pc = 0x14153Cu;
label_14153c:
    // 0x14153c: 0xaf8281d0  sw          $v0, -0x7E30($gp)
    ctx->pc = 0x14153cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U32(ctx, 2));
    // 0x141540: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x141540u;
    SET_GPR_U32(ctx, 31, 0x141548u);
    ctx->pc = 0x141544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141540u;
            // 0x141544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141548u; }
        if (ctx->pc != 0x141548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141548u; }
        if (ctx->pc != 0x141548u) { return; }
    }
    ctx->pc = 0x141548u;
label_141548:
    // 0x141548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x141548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14154c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14154cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14155c: 0x3e00008  jr          $ra
    ctx->pc = 0x14155Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14155Cu;
            // 0x141560: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141564u;
    // 0x141564: 0x0  nop
    ctx->pc = 0x141564u;
    // NOP
    // 0x141568: 0x0  nop
    ctx->pc = 0x141568u;
    // NOP
    // 0x14156c: 0x0  nop
    ctx->pc = 0x14156cu;
    // NOP
}
