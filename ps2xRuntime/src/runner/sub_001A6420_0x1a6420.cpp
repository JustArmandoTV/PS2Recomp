#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6420
// Address: 0x1a6420 - 0x1a64f0
void sub_001A6420_0x1a6420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6420_0x1a6420");
#endif

    switch (ctx->pc) {
        case 0x1a6480u: goto label_1a6480;
        case 0x1a64d0u: goto label_1a64d0;
        default: break;
    }

    ctx->pc = 0x1a6420u;

    // 0x1a6420: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a6420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a6424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6428: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a6428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a642c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6434: 0x24891380  addiu       $t1, $a0, 0x1380
    ctx->pc = 0x1a6434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x1a6438: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a643c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1a643cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6444: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1a6444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6448: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1a6448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a644c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1a644cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6450: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1a6450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a6454: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6454u;
    {
        const bool branch_taken_0x1a6454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6454u;
            // 0x1a6458: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6454) {
            ctx->pc = 0x1A6470u;
            goto label_1a6470;
        }
    }
    ctx->pc = 0x1A645Cu;
    // 0x1a645c: 0x8d25004c  lw          $a1, 0x4C($t1)
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x1a6460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6464: 0x806e35c  j           func_1B8D70
    ctx->pc = 0x1A6464u;
    ctx->pc = 0x1A6468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6464u;
            // 0x1a6468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A646Cu;
    // 0x1a646c: 0x0  nop
    ctx->pc = 0x1a646cu;
    // NOP
label_1a6470:
    // 0x1a6470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6478: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A647Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6478u;
            // 0x1a647c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6480u;
label_1a6480:
    // 0x1a6480: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a6484: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6488: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a6488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a648c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6498: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a649c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a649cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a64a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a64a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a64a8: 0x26091380  addiu       $t1, $s0, 0x1380
    ctx->pc = 0x1a64a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4992));
    // 0x1a64ac: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1a64acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64b0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1a64b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a64b4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1a64b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64b8: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a64bc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1a64bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a64c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A64C0u;
    {
        const bool branch_taken_0x1a64c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A64C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64C0u;
            // 0x1a64c4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64c0) {
            ctx->pc = 0x1A64D4u;
            goto label_1a64d4;
        }
    }
    ctx->pc = 0x1A64C8u;
    // 0x1a64c8: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1A64C8u;
    SET_GPR_U32(ctx, 31, 0x1A64D0u);
    ctx->pc = 0x1A64CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64C8u;
            // 0x1a64cc: 0x8d25004c  lw          $a1, 0x4C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64D0u; }
        if (ctx->pc != 0x1A64D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64D0u; }
        if (ctx->pc != 0x1A64D0u) { return; }
    }
    ctx->pc = 0x1A64D0u;
label_1a64d0:
    // 0x1a64d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a64d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a64d4:
    // 0x1a64d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a64d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a64d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a64dc: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1a64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1a64e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a64e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a64e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a64e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A64E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A64ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A64E8u;
            // 0x1a64ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A64F0u;
}
