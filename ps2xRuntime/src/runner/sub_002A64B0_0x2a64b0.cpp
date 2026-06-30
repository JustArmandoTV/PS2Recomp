#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A64B0
// Address: 0x2a64b0 - 0x2a65f0
void sub_002A64B0_0x2a64b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A64B0_0x2a64b0");
#endif

    switch (ctx->pc) {
        case 0x2a64b0u: goto label_2a64b0;
        case 0x2a64b4u: goto label_2a64b4;
        case 0x2a64b8u: goto label_2a64b8;
        case 0x2a64bcu: goto label_2a64bc;
        case 0x2a64c0u: goto label_2a64c0;
        case 0x2a64c4u: goto label_2a64c4;
        case 0x2a64c8u: goto label_2a64c8;
        case 0x2a64ccu: goto label_2a64cc;
        case 0x2a64d0u: goto label_2a64d0;
        case 0x2a64d4u: goto label_2a64d4;
        case 0x2a64d8u: goto label_2a64d8;
        case 0x2a64dcu: goto label_2a64dc;
        case 0x2a64e0u: goto label_2a64e0;
        case 0x2a64e4u: goto label_2a64e4;
        case 0x2a64e8u: goto label_2a64e8;
        case 0x2a64ecu: goto label_2a64ec;
        case 0x2a64f0u: goto label_2a64f0;
        case 0x2a64f4u: goto label_2a64f4;
        case 0x2a64f8u: goto label_2a64f8;
        case 0x2a64fcu: goto label_2a64fc;
        case 0x2a6500u: goto label_2a6500;
        case 0x2a6504u: goto label_2a6504;
        case 0x2a6508u: goto label_2a6508;
        case 0x2a650cu: goto label_2a650c;
        case 0x2a6510u: goto label_2a6510;
        case 0x2a6514u: goto label_2a6514;
        case 0x2a6518u: goto label_2a6518;
        case 0x2a651cu: goto label_2a651c;
        case 0x2a6520u: goto label_2a6520;
        case 0x2a6524u: goto label_2a6524;
        case 0x2a6528u: goto label_2a6528;
        case 0x2a652cu: goto label_2a652c;
        case 0x2a6530u: goto label_2a6530;
        case 0x2a6534u: goto label_2a6534;
        case 0x2a6538u: goto label_2a6538;
        case 0x2a653cu: goto label_2a653c;
        case 0x2a6540u: goto label_2a6540;
        case 0x2a6544u: goto label_2a6544;
        case 0x2a6548u: goto label_2a6548;
        case 0x2a654cu: goto label_2a654c;
        case 0x2a6550u: goto label_2a6550;
        case 0x2a6554u: goto label_2a6554;
        case 0x2a6558u: goto label_2a6558;
        case 0x2a655cu: goto label_2a655c;
        case 0x2a6560u: goto label_2a6560;
        case 0x2a6564u: goto label_2a6564;
        case 0x2a6568u: goto label_2a6568;
        case 0x2a656cu: goto label_2a656c;
        case 0x2a6570u: goto label_2a6570;
        case 0x2a6574u: goto label_2a6574;
        case 0x2a6578u: goto label_2a6578;
        case 0x2a657cu: goto label_2a657c;
        case 0x2a6580u: goto label_2a6580;
        case 0x2a6584u: goto label_2a6584;
        case 0x2a6588u: goto label_2a6588;
        case 0x2a658cu: goto label_2a658c;
        case 0x2a6590u: goto label_2a6590;
        case 0x2a6594u: goto label_2a6594;
        case 0x2a6598u: goto label_2a6598;
        case 0x2a659cu: goto label_2a659c;
        case 0x2a65a0u: goto label_2a65a0;
        case 0x2a65a4u: goto label_2a65a4;
        case 0x2a65a8u: goto label_2a65a8;
        case 0x2a65acu: goto label_2a65ac;
        case 0x2a65b0u: goto label_2a65b0;
        case 0x2a65b4u: goto label_2a65b4;
        case 0x2a65b8u: goto label_2a65b8;
        case 0x2a65bcu: goto label_2a65bc;
        case 0x2a65c0u: goto label_2a65c0;
        case 0x2a65c4u: goto label_2a65c4;
        case 0x2a65c8u: goto label_2a65c8;
        case 0x2a65ccu: goto label_2a65cc;
        case 0x2a65d0u: goto label_2a65d0;
        case 0x2a65d4u: goto label_2a65d4;
        case 0x2a65d8u: goto label_2a65d8;
        case 0x2a65dcu: goto label_2a65dc;
        case 0x2a65e0u: goto label_2a65e0;
        case 0x2a65e4u: goto label_2a65e4;
        case 0x2a65e8u: goto label_2a65e8;
        case 0x2a65ecu: goto label_2a65ec;
        default: break;
    }

    ctx->pc = 0x2a64b0u;

label_2a64b0:
    // 0x2a64b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a64b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a64b4:
    // 0x2a64b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a64b8:
    // 0x2a64b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a64b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a64bc:
    // 0x2a64bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a64bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a64c0:
    // 0x2a64c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a64c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a64c4:
    // 0x2a64c4: 0x8c50e400  lw          $s0, -0x1C00($v0)
    ctx->pc = 0x2a64c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_2a64c8:
    // 0x2a64c8: 0xc040180  jal         func_100600
label_2a64cc:
    if (ctx->pc == 0x2A64CCu) {
        ctx->pc = 0x2A64CCu;
            // 0x2a64cc: 0x240406f0  addiu       $a0, $zero, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
        ctx->pc = 0x2A64D0u;
        goto label_2a64d0;
    }
    ctx->pc = 0x2A64C8u;
    SET_GPR_U32(ctx, 31, 0x2A64D0u);
    ctx->pc = 0x2A64CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A64C8u;
            // 0x2a64cc: 0x240406f0  addiu       $a0, $zero, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A64D0u; }
        if (ctx->pc != 0x2A64D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A64D0u; }
        if (ctx->pc != 0x2A64D0u) { return; }
    }
    ctx->pc = 0x2A64D0u;
label_2a64d0:
    // 0x2a64d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a64d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a64d4:
    // 0x2a64d4: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_2a64d8:
    if (ctx->pc == 0x2A64D8u) {
        ctx->pc = 0x2A64D8u;
            // 0x2a64d8: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->pc = 0x2A64DCu;
        goto label_2a64dc;
    }
    ctx->pc = 0x2A64D4u;
    {
        const bool branch_taken_0x2a64d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a64d4) {
            ctx->pc = 0x2A64D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A64D4u;
            // 0x2a64d8: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A64ECu;
            goto label_2a64ec;
        }
    }
    ctx->pc = 0x2A64DCu;
label_2a64dc:
    // 0x2a64dc: 0xc0b7a68  jal         func_2DE9A0
label_2a64e0:
    if (ctx->pc == 0x2A64E0u) {
        ctx->pc = 0x2A64E0u;
            // 0x2a64e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A64E4u;
        goto label_2a64e4;
    }
    ctx->pc = 0x2A64DCu;
    SET_GPR_U32(ctx, 31, 0x2A64E4u);
    ctx->pc = 0x2A64E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A64DCu;
            // 0x2a64e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE9A0u;
    if (runtime->hasFunction(0x2DE9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A64E4u; }
        if (ctx->pc != 0x2A64E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE9A0_0x2de9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A64E4u; }
        if (ctx->pc != 0x2A64E4u) { return; }
    }
    ctx->pc = 0x2A64E4u;
label_2a64e4:
    // 0x2a64e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a64e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a64e8:
    // 0x2a64e8: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2a64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
label_2a64ec:
    // 0x2a64ec: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2a64ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2a64f0:
    // 0x2a64f0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2a64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2a64f4:
    // 0x2a64f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a64f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a64f8:
    // 0x2a64f8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2a64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2a64fc:
    // 0x2a64fc: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2a64fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2a6500:
    // 0x2a6500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a6504:
    // 0x2a6504: 0xc0a997c  jal         func_2A65F0
label_2a6508:
    if (ctx->pc == 0x2A6508u) {
        ctx->pc = 0x2A6508u;
            // 0x2a6508: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A650Cu;
        goto label_2a650c;
    }
    ctx->pc = 0x2A6504u;
    SET_GPR_U32(ctx, 31, 0x2A650Cu);
    ctx->pc = 0x2A6508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6504u;
            // 0x2a6508: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A650Cu; }
        if (ctx->pc != 0x2A650Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A650Cu; }
        if (ctx->pc != 0x2A650Cu) { return; }
    }
    ctx->pc = 0x2A650Cu;
label_2a650c:
    // 0x2a650c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a650cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a6510:
    // 0x2a6510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a6510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a6514:
    // 0x2a6514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6518:
    // 0x2a6518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a651c:
    // 0x2a651c: 0x3e00008  jr          $ra
label_2a6520:
    if (ctx->pc == 0x2A6520u) {
        ctx->pc = 0x2A6520u;
            // 0x2a6520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A6524u;
        goto label_2a6524;
    }
    ctx->pc = 0x2A651Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A651Cu;
            // 0x2a6520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6524u;
label_2a6524:
    // 0x2a6524: 0x0  nop
    ctx->pc = 0x2a6524u;
    // NOP
label_2a6528:
    // 0x2a6528: 0x0  nop
    ctx->pc = 0x2a6528u;
    // NOP
label_2a652c:
    // 0x2a652c: 0x0  nop
    ctx->pc = 0x2a652cu;
    // NOP
label_2a6530:
    // 0x2a6530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a6534:
    // 0x2a6534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a6538:
    // 0x2a6538: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2a6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2a653c:
    // 0x2a653c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a6540:
    if (ctx->pc == 0x2A6540u) {
        ctx->pc = 0x2A6540u;
            // 0x2a6540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6544u;
        goto label_2a6544;
    }
    ctx->pc = 0x2A653Cu;
    {
        const bool branch_taken_0x2a653c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a653c) {
            ctx->pc = 0x2A6540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A653Cu;
            // 0x2a6540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A654Cu;
            goto label_2a654c;
        }
    }
    ctx->pc = 0x2A6544u;
label_2a6544:
    // 0x2a6544: 0x40f809  jalr        $v0
label_2a6548:
    if (ctx->pc == 0x2A6548u) {
        ctx->pc = 0x2A6548u;
            // 0x2a6548: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A654Cu;
        goto label_2a654c;
    }
    ctx->pc = 0x2A6544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A654Cu);
        ctx->pc = 0x2A6548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6544u;
            // 0x2a6548: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A654Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A654Cu; }
            if (ctx->pc != 0x2A654Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A654Cu;
label_2a654c:
    // 0x2a654c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a654cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6550:
    // 0x2a6550: 0x3e00008  jr          $ra
label_2a6554:
    if (ctx->pc == 0x2A6554u) {
        ctx->pc = 0x2A6554u;
            // 0x2a6554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A6558u;
        goto label_2a6558;
    }
    ctx->pc = 0x2A6550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6550u;
            // 0x2a6554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6558u;
label_2a6558:
    // 0x2a6558: 0x0  nop
    ctx->pc = 0x2a6558u;
    // NOP
label_2a655c:
    // 0x2a655c: 0x0  nop
    ctx->pc = 0x2a655cu;
    // NOP
label_2a6560:
    // 0x2a6560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a6564:
    // 0x2a6564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a6568:
    // 0x2a6568: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a6568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2a656c:
    // 0x2a656c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a6570:
    if (ctx->pc == 0x2A6570u) {
        ctx->pc = 0x2A6570u;
            // 0x2a6570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A6574u;
        goto label_2a6574;
    }
    ctx->pc = 0x2A656Cu;
    {
        const bool branch_taken_0x2a656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a656c) {
            ctx->pc = 0x2A6570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A656Cu;
            // 0x2a6570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A657Cu;
            goto label_2a657c;
        }
    }
    ctx->pc = 0x2A6574u;
label_2a6574:
    // 0x2a6574: 0x40f809  jalr        $v0
label_2a6578:
    if (ctx->pc == 0x2A6578u) {
        ctx->pc = 0x2A6578u;
            // 0x2a6578: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A657Cu;
        goto label_2a657c;
    }
    ctx->pc = 0x2A6574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A657Cu);
        ctx->pc = 0x2A6578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6574u;
            // 0x2a6578: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A657Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A657Cu; }
            if (ctx->pc != 0x2A657Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A657Cu;
label_2a657c:
    // 0x2a657c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6580:
    // 0x2a6580: 0x3e00008  jr          $ra
label_2a6584:
    if (ctx->pc == 0x2A6584u) {
        ctx->pc = 0x2A6584u;
            // 0x2a6584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A6588u;
        goto label_2a6588;
    }
    ctx->pc = 0x2A6580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6580u;
            // 0x2a6584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6588u;
label_2a6588:
    // 0x2a6588: 0x0  nop
    ctx->pc = 0x2a6588u;
    // NOP
label_2a658c:
    // 0x2a658c: 0x0  nop
    ctx->pc = 0x2a658cu;
    // NOP
label_2a6590:
    // 0x2a6590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a6594:
    // 0x2a6594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a6598:
    // 0x2a6598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a659c:
    // 0x2a659c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a659cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a65a0:
    // 0x2a65a0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2a65a4:
    if (ctx->pc == 0x2A65A4u) {
        ctx->pc = 0x2A65A4u;
            // 0x2a65a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A65A8u;
        goto label_2a65a8;
    }
    ctx->pc = 0x2A65A0u;
    {
        const bool branch_taken_0x2a65a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a65a0) {
            ctx->pc = 0x2A65A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A65A0u;
            // 0x2a65a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A65D4u;
            goto label_2a65d4;
        }
    }
    ctx->pc = 0x2A65A8u;
label_2a65a8:
    // 0x2a65a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a65ac:
    // 0x2a65ac: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2a65acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_2a65b0:
    // 0x2a65b0: 0x2442fba0  addiu       $v0, $v0, -0x460
    ctx->pc = 0x2a65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
label_2a65b4:
    // 0x2a65b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a65b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2a65b8:
    // 0x2a65b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a65bc:
    // 0x2a65bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a65c0:
    // 0x2a65c0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_2a65c4:
    if (ctx->pc == 0x2A65C4u) {
        ctx->pc = 0x2A65C4u;
            // 0x2a65c4: 0xac40e400  sw          $zero, -0x1C00($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960128), GPR_U32(ctx, 0));
        ctx->pc = 0x2A65C8u;
        goto label_2a65c8;
    }
    ctx->pc = 0x2A65C0u;
    {
        const bool branch_taken_0x2a65c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A65C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A65C0u;
            // 0x2a65c4: 0xac40e400  sw          $zero, -0x1C00($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65c0) {
            ctx->pc = 0x2A65D0u;
            goto label_2a65d0;
        }
    }
    ctx->pc = 0x2A65C8u;
label_2a65c8:
    // 0x2a65c8: 0xc0400a8  jal         func_1002A0
label_2a65cc:
    if (ctx->pc == 0x2A65CCu) {
        ctx->pc = 0x2A65D0u;
        goto label_2a65d0;
    }
    ctx->pc = 0x2A65C8u;
    SET_GPR_U32(ctx, 31, 0x2A65D0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A65D0u; }
        if (ctx->pc != 0x2A65D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A65D0u; }
        if (ctx->pc != 0x2A65D0u) { return; }
    }
    ctx->pc = 0x2A65D0u;
label_2a65d0:
    // 0x2a65d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a65d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a65d4:
    // 0x2a65d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a65d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a65d8:
    // 0x2a65d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a65d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a65dc:
    // 0x2a65dc: 0x3e00008  jr          $ra
label_2a65e0:
    if (ctx->pc == 0x2A65E0u) {
        ctx->pc = 0x2A65E0u;
            // 0x2a65e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A65E4u;
        goto label_2a65e4;
    }
    ctx->pc = 0x2A65DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A65E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A65DCu;
            // 0x2a65e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A65E4u;
label_2a65e4:
    // 0x2a65e4: 0x0  nop
    ctx->pc = 0x2a65e4u;
    // NOP
label_2a65e8:
    // 0x2a65e8: 0x0  nop
    ctx->pc = 0x2a65e8u;
    // NOP
label_2a65ec:
    // 0x2a65ec: 0x0  nop
    ctx->pc = 0x2a65ecu;
    // NOP
}
