#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E830
// Address: 0x14e830 - 0x14ea10
void sub_0014E830_0x14e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E830_0x14e830");
#endif

    switch (ctx->pc) {
        case 0x14e94cu: goto label_14e94c;
        case 0x14e960u: goto label_14e960;
        case 0x14e97cu: goto label_14e97c;
        case 0x14e9b4u: goto label_14e9b4;
        case 0x14e9d0u: goto label_14e9d0;
        case 0x14e9e0u: goto label_14e9e0;
        case 0x14e9f0u: goto label_14e9f0;
        default: break;
    }

    ctx->pc = 0x14e830u;

    // 0x14e830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e834: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14e834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14e838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14e838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14e83c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e844: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x14e844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x14e848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e84c: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x14e84cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e850: 0x8c445824  lw          $a0, 0x5824($v0)
    ctx->pc = 0x14e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x14e854: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x14e854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e858: 0x10430056  beq         $v0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x14E858u;
    {
        const bool branch_taken_0x14e858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E858u;
            // 0x14e85c: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e858) {
            ctx->pc = 0x14E9B4u;
            goto label_14e9b4;
        }
    }
    ctx->pc = 0x14E860u;
    // 0x14e860: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e864: 0x8c4257f0  lw          $v0, 0x57F0($v0)
    ctx->pc = 0x14e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x14e868: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E868u;
    {
        const bool branch_taken_0x14e868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e868) {
            ctx->pc = 0x14E88Cu;
            goto label_14e88c;
        }
    }
    ctx->pc = 0x14E870u;
    // 0x14e870: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e874: 0x8c425830  lw          $v0, 0x5830($v0)
    ctx->pc = 0x14e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22576)));
    // 0x14e878: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E878u;
    {
        const bool branch_taken_0x14e878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e878) {
            ctx->pc = 0x14E88Cu;
            goto label_14e88c;
        }
    }
    ctx->pc = 0x14E880u;
    // 0x14e880: 0x34832000  ori         $v1, $a0, 0x2000
    ctx->pc = 0x14e880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x14e884: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e888: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x14e888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_14e88c:
    // 0x14e88c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e890: 0x30e30003  andi        $v1, $a3, 0x3
    ctx->pc = 0x14e890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x14e894: 0x8c465824  lw          $a2, 0x5824($v0)
    ctx->pc = 0x14e894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x14e898: 0x32ac0  sll         $a1, $v1, 11
    ctx->pc = 0x14e898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x14e89c: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x14e89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x14e8a0: 0x32700  sll         $a0, $v1, 28
    ctx->pc = 0x14e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x14e8a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e8a8: 0x8c435814  lw          $v1, 0x5814($v0)
    ctx->pc = 0x14e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x14e8ac: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x14e8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x14e8b0: 0x448025  or          $s0, $v0, $a0
    ctx->pc = 0x14e8b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14e8b4: 0x306200fc  andi        $v0, $v1, 0xFC
    ctx->pc = 0x14e8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x14e8b8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x14E8B8u;
    {
        const bool branch_taken_0x14e8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e8b8) {
            ctx->pc = 0x14E994u;
            goto label_14e994;
        }
    }
    ctx->pc = 0x14E8C0u;
    // 0x14e8c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14e8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14e8c4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x14e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14e8c8: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x14E8C8u;
    {
        const bool branch_taken_0x14e8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e8c8) {
            ctx->pc = 0x14E8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8C8u;
            // 0x14e8cc: 0xc78f8364  lwc1        $f15, -0x7C9C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E968u;
            goto label_14e968;
        }
    }
    ctx->pc = 0x14E8D0u;
    // 0x14e8d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14e8d4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14E8D4u;
    {
        const bool branch_taken_0x14e8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e8d4) {
            ctx->pc = 0x14E954u;
            goto label_14e954;
        }
    }
    ctx->pc = 0x14E8DCu;
    // 0x14e8dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e8e0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E8E0u;
    {
        const bool branch_taken_0x14e8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e8e0) {
            ctx->pc = 0x14E8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8E0u;
            // 0x14e8e4: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E8F0u;
            goto label_14e8f0;
        }
    }
    ctx->pc = 0x14E8E8u;
    // 0x14e8e8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14E8E8u;
    {
        const bool branch_taken_0x14e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8E8u;
            // 0x14e8ec: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8e8) {
            ctx->pc = 0x14E980u;
            goto label_14e980;
        }
    }
    ctx->pc = 0x14E8F0u;
label_14e8f0:
    // 0x14e8f0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x14e8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x14e8f4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14E8F4u;
    {
        const bool branch_taken_0x14e8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e8f4) {
            ctx->pc = 0x14E8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8F4u;
            // 0x14e8f8: 0x101a02  srl         $v1, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E924u;
            goto label_14e924;
        }
    }
    ctx->pc = 0x14E8FCu;
    // 0x14e8fc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x14e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x14e900: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14e900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14e904: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x14e904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x14e908: 0x244242e0  addiu       $v0, $v0, 0x42E0
    ctx->pc = 0x14e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17120));
    // 0x14e90c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x14e90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x14e910: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x14e910u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x14e914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e91c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E91Cu;
    {
        const bool branch_taken_0x14e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E91Cu;
            // 0x14e920: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e91c) {
            ctx->pc = 0x14E938u;
            goto label_14e938;
        }
    }
    ctx->pc = 0x14E924u;
label_14e924:
    // 0x14e924: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14e928: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x14e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x14e92c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e934: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e938:
    // 0x14e938: 0x3202007f  andi        $v0, $s0, 0x7F
    ctx->pc = 0x14e938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)127);
    // 0x14e93c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e940: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e944: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14E944u;
    SET_GPR_U32(ctx, 31, 0x14E94Cu);
    ctx->pc = 0x14E948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E944u;
            // 0x14e948: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E94Cu; }
        if (ctx->pc != 0x14E94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E94Cu; }
        if (ctx->pc != 0x14E94Cu) { return; }
    }
    ctx->pc = 0x14E94Cu;
label_14e94c:
    // 0x14e94c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14E94Cu;
    {
        const bool branch_taken_0x14e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e94c) {
            ctx->pc = 0x14E97Cu;
            goto label_14e97c;
        }
    }
    ctx->pc = 0x14E954u;
label_14e954:
    // 0x14e954: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e958: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14E958u;
    SET_GPR_U32(ctx, 31, 0x14E960u);
    ctx->pc = 0x14E95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E958u;
            // 0x14e95c: 0x8c445774  lw          $a0, 0x5774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E960u; }
        if (ctx->pc != 0x14E960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E960u; }
        if (ctx->pc != 0x14E960u) { return; }
    }
    ctx->pc = 0x14E960u;
label_14e960:
    // 0x14e960: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E960u;
    {
        const bool branch_taken_0x14e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e960) {
            ctx->pc = 0x14E97Cu;
            goto label_14e97c;
        }
    }
    ctx->pc = 0x14E968u;
label_14e968:
    // 0x14e968: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e96c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14e96cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e970: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14e970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14e974: 0xc052d48  jal         func_14B520
    ctx->pc = 0x14E974u;
    SET_GPR_U32(ctx, 31, 0x14E97Cu);
    ctx->pc = 0x14E978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E974u;
            // 0x14e978: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E97Cu; }
        if (ctx->pc != 0x14E97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E97Cu; }
        if (ctx->pc != 0x14E97Cu) { return; }
    }
    ctx->pc = 0x14E97Cu;
label_14e97c:
    // 0x14e97c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_14e980:
    // 0x14e980: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14e984: 0x34631fff  ori         $v1, $v1, 0x1FFF
    ctx->pc = 0x14e984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8191);
    // 0x14e988: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14e98c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x14e98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x14e990: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x14e990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14e994:
    // 0x14e994: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e998: 0x8c425844  lw          $v0, 0x5844($v0)
    ctx->pc = 0x14e998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22596)));
    // 0x14e99c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E99Cu;
    {
        const bool branch_taken_0x14e99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x14e99c) {
            ctx->pc = 0x14E9B4u;
            goto label_14e9b4;
        }
    }
    ctx->pc = 0x14E9A4u;
    // 0x14e9a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9ac: 0xc04fd58  jal         func_13F560
    ctx->pc = 0x14E9ACu;
    SET_GPR_U32(ctx, 31, 0x14E9B4u);
    ctx->pc = 0x14E9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9ACu;
            // 0x14e9b0: 0xac505844  sw          $s0, 0x5844($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F560u;
    if (runtime->hasFunction(0x13F560u)) {
        auto targetFn = runtime->lookupFunction(0x13F560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9B4u; }
        if (ctx->pc != 0x14E9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F560_0x13f560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9B4u; }
        if (ctx->pc != 0x14E9B4u) { return; }
    }
    ctx->pc = 0x14E9B4u;
label_14e9b4:
    // 0x14e9b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e9b8: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x14e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x14e9bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14e9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x14e9c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E9C0u;
    {
        const bool branch_taken_0x14e9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e9c0) {
            ctx->pc = 0x14E9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9C0u;
            // 0x14e9c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E9E8u;
            goto label_14e9e8;
        }
    }
    ctx->pc = 0x14E9C8u;
    // 0x14e9c8: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x14E9C8u;
    SET_GPR_U32(ctx, 31, 0x14E9D0u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9D0u; }
        if (ctx->pc != 0x14E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9D0u; }
        if (ctx->pc != 0x14E9D0u) { return; }
    }
    ctx->pc = 0x14E9D0u;
label_14e9d0:
    // 0x14e9d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x14e9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14e9d4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x14e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14e9d8: 0xc056b18  jal         func_15AC60
    ctx->pc = 0x14E9D8u;
    SET_GPR_U32(ctx, 31, 0x14E9E0u);
    ctx->pc = 0x14E9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9D8u;
            // 0x14e9dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC60u;
    if (runtime->hasFunction(0x15AC60u)) {
        auto targetFn = runtime->lookupFunction(0x15AC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9E0u; }
        if (ctx->pc != 0x14E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC60_0x15ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9E0u; }
        if (ctx->pc != 0x14E9E0u) { return; }
    }
    ctx->pc = 0x14E9E0u;
label_14e9e0:
    // 0x14e9e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14E9E0u;
    {
        const bool branch_taken_0x14e9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9E0u;
            // 0x14e9e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9e0) {
            ctx->pc = 0x14E9F4u;
            goto label_14e9f4;
        }
    }
    ctx->pc = 0x14E9E8u;
label_14e9e8:
    // 0x14e9e8: 0xc052e24  jal         func_14B890
    ctx->pc = 0x14E9E8u;
    SET_GPR_U32(ctx, 31, 0x14E9F0u);
    ctx->pc = 0x14B890u;
    if (runtime->hasFunction(0x14B890u)) {
        auto targetFn = runtime->lookupFunction(0x14B890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9F0u; }
        if (ctx->pc != 0x14E9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B890_0x14b890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9F0u; }
        if (ctx->pc != 0x14E9F0u) { return; }
    }
    ctx->pc = 0x14E9F0u;
label_14e9f0:
    // 0x14e9f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14e9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14e9f4:
    // 0x14e9f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e9f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x14E9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9FCu;
            // 0x14ea00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14EA04u;
    // 0x14ea04: 0x0  nop
    ctx->pc = 0x14ea04u;
    // NOP
    // 0x14ea08: 0x0  nop
    ctx->pc = 0x14ea08u;
    // NOP
    // 0x14ea0c: 0x0  nop
    ctx->pc = 0x14ea0cu;
    // NOP
}
