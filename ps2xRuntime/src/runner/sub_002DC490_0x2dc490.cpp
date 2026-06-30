#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC490
// Address: 0x2dc490 - 0x2dc520
void sub_002DC490_0x2dc490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC490_0x2dc490");
#endif

    switch (ctx->pc) {
        case 0x2dc4c8u: goto label_2dc4c8;
        case 0x2dc4d0u: goto label_2dc4d0;
        case 0x2dc4d8u: goto label_2dc4d8;
        case 0x2dc4e0u: goto label_2dc4e0;
        case 0x2dc4e8u: goto label_2dc4e8;
        case 0x2dc4f0u: goto label_2dc4f0;
        case 0x2dc4fcu: goto label_2dc4fc;
        default: break;
    }

    ctx->pc = 0x2dc490u;

    // 0x2dc490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc494: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dc494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dc498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc49c: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2dc49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2dc4a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc4a4: 0x24422e50  addiu       $v0, $v0, 0x2E50
    ctx->pc = 0x2dc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11856));
    // 0x2dc4a8: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2dc4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2dc4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dc4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4b0: 0x24a5c470  addiu       $a1, $a1, -0x3B90
    ctx->pc = 0x2dc4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952048));
    // 0x2dc4b4: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x2dc4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x2dc4b8: 0x24c6bc20  addiu       $a2, $a2, -0x43E0
    ctx->pc = 0x2dc4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949920));
    // 0x2dc4bc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2dc4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc4c0: 0xc040804  jal         func_102010
    ctx->pc = 0x2DC4C0u;
    SET_GPR_U32(ctx, 31, 0x2DC4C8u);
    ctx->pc = 0x2DC4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4C0u;
            // 0x2dc4c4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4C8u; }
        if (ctx->pc != 0x2DC4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4C8u; }
        if (ctx->pc != 0x2DC4C8u) { return; }
    }
    ctx->pc = 0x2DC4C8u;
label_2dc4c8:
    // 0x2dc4c8: 0xc0b711c  jal         func_2DC470
    ctx->pc = 0x2DC4C8u;
    SET_GPR_U32(ctx, 31, 0x2DC4D0u);
    ctx->pc = 0x2DC4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4C8u;
            // 0x2dc4cc: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC470u;
    if (runtime->hasFunction(0x2DC470u)) {
        auto targetFn = runtime->lookupFunction(0x2DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4D0u; }
        if (ctx->pc != 0x2DC4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC470_0x2dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4D0u; }
        if (ctx->pc != 0x2DC4D0u) { return; }
    }
    ctx->pc = 0x2DC4D0u;
label_2dc4d0:
    // 0x2dc4d0: 0xc0b7114  jal         func_2DC450
    ctx->pc = 0x2DC4D0u;
    SET_GPR_U32(ctx, 31, 0x2DC4D8u);
    ctx->pc = 0x2DC4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4D0u;
            // 0x2dc4d4: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC450u;
    if (runtime->hasFunction(0x2DC450u)) {
        auto targetFn = runtime->lookupFunction(0x2DC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4D8u; }
        if (ctx->pc != 0x2DC4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC450_0x2dc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4D8u; }
        if (ctx->pc != 0x2DC4D8u) { return; }
    }
    ctx->pc = 0x2DC4D8u;
label_2dc4d8:
    // 0x2dc4d8: 0xc0b711c  jal         func_2DC470
    ctx->pc = 0x2DC4D8u;
    SET_GPR_U32(ctx, 31, 0x2DC4E0u);
    ctx->pc = 0x2DC4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4D8u;
            // 0x2dc4dc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC470u;
    if (runtime->hasFunction(0x2DC470u)) {
        auto targetFn = runtime->lookupFunction(0x2DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4E0u; }
        if (ctx->pc != 0x2DC4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC470_0x2dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4E0u; }
        if (ctx->pc != 0x2DC4E0u) { return; }
    }
    ctx->pc = 0x2DC4E0u;
label_2dc4e0:
    // 0x2dc4e0: 0xc0b7114  jal         func_2DC450
    ctx->pc = 0x2DC4E0u;
    SET_GPR_U32(ctx, 31, 0x2DC4E8u);
    ctx->pc = 0x2DC4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4E0u;
            // 0x2dc4e4: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC450u;
    if (runtime->hasFunction(0x2DC450u)) {
        auto targetFn = runtime->lookupFunction(0x2DC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4E8u; }
        if (ctx->pc != 0x2DC4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC450_0x2dc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4E8u; }
        if (ctx->pc != 0x2DC4E8u) { return; }
    }
    ctx->pc = 0x2DC4E8u;
label_2dc4e8:
    // 0x2dc4e8: 0xc0b711c  jal         func_2DC470
    ctx->pc = 0x2DC4E8u;
    SET_GPR_U32(ctx, 31, 0x2DC4F0u);
    ctx->pc = 0x2DC4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4E8u;
            // 0x2dc4ec: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC470u;
    if (runtime->hasFunction(0x2DC470u)) {
        auto targetFn = runtime->lookupFunction(0x2DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4F0u; }
        if (ctx->pc != 0x2DC4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC470_0x2dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4F0u; }
        if (ctx->pc != 0x2DC4F0u) { return; }
    }
    ctx->pc = 0x2DC4F0u;
label_2dc4f0:
    // 0x2dc4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4f4: 0xc0b710c  jal         func_2DC430
    ctx->pc = 0x2DC4F4u;
    SET_GPR_U32(ctx, 31, 0x2DC4FCu);
    ctx->pc = 0x2DC4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC4F4u;
            // 0x2dc4f8: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC430u;
    if (runtime->hasFunction(0x2DC430u)) {
        auto targetFn = runtime->lookupFunction(0x2DC430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4FCu; }
        if (ctx->pc != 0x2DC4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC430_0x2dc430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC4FCu; }
        if (ctx->pc != 0x2DC4FCu) { return; }
    }
    ctx->pc = 0x2DC4FCu;
label_2dc4fc:
    // 0x2dc4fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2dc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2dc500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dc500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc504: 0x2463a088  addiu       $v1, $v1, -0x5F78
    ctx->pc = 0x2dc504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942856));
    // 0x2dc508: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x2dc508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x2dc50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc514: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC514u;
            // 0x2dc518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC51Cu;
    // 0x2dc51c: 0x0  nop
    ctx->pc = 0x2dc51cu;
    // NOP
}
