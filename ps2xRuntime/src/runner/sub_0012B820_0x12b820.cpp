#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B820
// Address: 0x12b820 - 0x12b900
void sub_0012B820_0x12b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B820_0x12b820");
#endif

    switch (ctx->pc) {
        case 0x12b8a8u: goto label_12b8a8;
        case 0x12b8d0u: goto label_12b8d0;
        default: break;
    }

    ctx->pc = 0x12b820u;

    // 0x12b820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b824: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12b824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b82c: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12b82cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12b830: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x12b830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12b834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b838: 0x804adb0  j           func_12B6C0
    ctx->pc = 0x12B838u;
    ctx->pc = 0x12B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B838u;
            // 0x12b83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B6C0u;
    {
        auto targetFn = runtime->lookupFunction(0x12B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x12B840u;
    // 0x12b840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b844: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12b844u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b84c: 0x3c0e005d  lui         $t6, 0x5D
    ctx->pc = 0x12b84cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)93 << 16));
    // 0x12b850: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12b850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b854: 0x8dc41ad8  lw          $a0, 0x1AD8($t6)
    ctx->pc = 0x12b854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 6872)));
    // 0x12b858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b85c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x12b85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b860: 0x804ad8e  j           func_12B638
    ctx->pc = 0x12B860u;
    ctx->pc = 0x12B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B860u;
            // 0x12b864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B638u;
    {
        auto targetFn = runtime->lookupFunction(0x12B638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x12B868u;
    // 0x12b868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b86c: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12b86cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12b870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b874: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x12b874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12b878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b87c: 0x804ad74  j           func_12B5D0
    ctx->pc = 0x12B87Cu;
    ctx->pc = 0x12B880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B87Cu;
            // 0x12b880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B5D0u;
    if (runtime->hasFunction(0x12B5D0u)) {
        auto targetFn = runtime->lookupFunction(0x12B5D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012B5D0_0x12b5d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12B884u;
    // 0x12b884: 0x0  nop
    ctx->pc = 0x12b884u;
    // NOP
    // 0x12b888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b88c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12b88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b894: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12b894u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12b898: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x12b898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12b89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b8a0: 0x804ade2  j           func_12B788
    ctx->pc = 0x12B8A0u;
    ctx->pc = 0x12B8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8A0u;
            // 0x12b8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B788u;
    {
        auto targetFn = runtime->lookupFunction(0x12B788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x12B8A8u;
label_12b8a8:
    // 0x12b8a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b8b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b8b4: 0x3c1000be  lui         $s0, 0xBE
    ctx->pc = 0x12b8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)190 << 16));
    // 0x12b8b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b8bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8c0: 0xae00b880  sw          $zero, -0x4780($s0)
    ctx->pc = 0x12b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948992), GPR_U32(ctx, 0));
    // 0x12b8c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12b8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8c8: 0xc0432ce  jal         func_10CB38
    ctx->pc = 0x12B8C8u;
    SET_GPR_U32(ctx, 31, 0x12B8D0u);
    ctx->pc = 0x12B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8C8u;
            // 0x12b8cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB38u;
    if (runtime->hasFunction(0x10CB38u)) {
        auto targetFn = runtime->lookupFunction(0x10CB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B8D0u; }
        if (ctx->pc != 0x12B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CB38_0x10cb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B8D0u; }
        if (ctx->pc != 0x12B8D0u) { return; }
    }
    ctx->pc = 0x12B8D0u;
label_12b8d0:
    // 0x12b8d0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12b8d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b8d4: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B8D4u;
    {
        const bool branch_taken_0x12b8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b8d4) {
            ctx->pc = 0x12B8D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8D4u;
            // 0x12b8d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B8ECu;
            goto label_12b8ec;
        }
    }
    ctx->pc = 0x12B8DCu;
    // 0x12b8dc: 0x8e0fb880  lw          $t7, -0x4780($s0)
    ctx->pc = 0x12b8dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948992)));
    // 0x12b8e0: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12B8E0u;
    {
        const bool branch_taken_0x12b8e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b8e0) {
            ctx->pc = 0x12B8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8E0u;
            // 0x12b8e4: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B8E8u;
            goto label_12b8e8;
        }
    }
    ctx->pc = 0x12B8E8u;
label_12b8e8:
    // 0x12b8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b8ec:
    // 0x12b8ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12B8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B8F4u;
            // 0x12b8f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B8FCu;
    // 0x12b8fc: 0x0  nop
    ctx->pc = 0x12b8fcu;
    // NOP
}
