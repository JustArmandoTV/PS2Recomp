#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE2C8
// Address: 0x1be2c8 - 0x1be378
void sub_001BE2C8_0x1be2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE2C8_0x1be2c8");
#endif

    switch (ctx->pc) {
        case 0x1be308u: goto label_1be308;
        case 0x1be370u: goto label_1be370;
        default: break;
    }

    ctx->pc = 0x1be2c8u;

    // 0x1be2c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be2d0: 0x88100  sll         $s0, $t0, 4
    ctx->pc = 0x1be2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1be2d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be2d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1be2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be2e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1be2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1be2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1be2e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1be2e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1be2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1be2f0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1be2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1be2f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2f8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1be2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1be2fc: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x1be2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1be300: 0xc06f5a6  jal         func_1BD698
    ctx->pc = 0x1BE300u;
    SET_GPR_U32(ctx, 31, 0x1BE308u);
    ctx->pc = 0x1BE304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE300u;
            // 0x1be304: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD698u;
    if (runtime->hasFunction(0x1BD698u)) {
        auto targetFn = runtime->lookupFunction(0x1BD698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE308u; }
        if (ctx->pc != 0x1BE308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD698_0x1bd698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE308u; }
        if (ctx->pc != 0x1BE308u) { return; }
    }
    ctx->pc = 0x1BE308u;
label_1be308:
    // 0x1be308: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x1be308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1be30c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1be30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be314: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE314u;
    {
        const bool branch_taken_0x1be314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BE318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE314u;
            // 0x1be318: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be314) {
            ctx->pc = 0x1BE338u;
            goto label_1be338;
        }
    }
    ctx->pc = 0x1BE31Cu;
    // 0x1be31c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1be31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1be320: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1be320u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1be324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be328: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1be328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1be32c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE32Cu;
    {
        const bool branch_taken_0x1be32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE32Cu;
            // 0x1be330: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be32c) {
            ctx->pc = 0x1BE340u;
            goto label_1be340;
        }
    }
    ctx->pc = 0x1BE334u;
    // 0x1be334: 0x0  nop
    ctx->pc = 0x1be334u;
    // NOP
label_1be338:
    // 0x1be338: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1be338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1be33c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1be33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1be340:
    // 0x1be340: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1be340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1be344: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE344u;
    {
        const bool branch_taken_0x1be344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE344u;
            // 0x1be348: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be344) {
            ctx->pc = 0x1BE350u;
            goto label_1be350;
        }
    }
    ctx->pc = 0x1BE34Cu;
    // 0x1be34c: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x1be34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1be350:
    // 0x1be350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be35c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1be35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be364: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1be364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1be368: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE368u;
            // 0x1be36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE370u;
label_1be370:
    // 0x1be370: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE378u;
}
