#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B048
// Address: 0x18b048 - 0x18b0f8
void sub_0018B048_0x18b048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B048_0x18b048");
#endif

    ctx->pc = 0x18b048u;

    // 0x18b048: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x18b048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b04c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x18b04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b050: 0x8d240050  lw          $a0, 0x50($t1)
    ctx->pc = 0x18b050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x18b054: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x18b054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x18b058: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x18b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x18b05c: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x18b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x18b060: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x18b060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x18b064: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18b064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18b068: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x18b068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x18b06c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x18b070: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x18b070u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18b074: 0x8d270048  lw          $a3, 0x48($t1)
    ctx->pc = 0x18b074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x18b078: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x18b078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x18b07c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18b080: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x18b080u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x18b084: 0xad2302cc  sw          $v1, 0x2CC($t1)
    ctx->pc = 0x18b084u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 716), GPR_U32(ctx, 3));
    // 0x18b088: 0xad2402c4  sw          $a0, 0x2C4($t1)
    ctx->pc = 0x18b088u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 708), GPR_U32(ctx, 4));
    // 0x18b08c: 0x14e80004  bne         $a3, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B08Cu;
    {
        const bool branch_taken_0x18b08c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x18B090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B08Cu;
            // 0x18b090: 0xad2602c8  sw          $a2, 0x2C8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 712), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b08c) {
            ctx->pc = 0x18B0A0u;
            goto label_18b0a0;
        }
    }
    ctx->pc = 0x18B094u;
    // 0x18b094: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18B094u;
    {
        const bool branch_taken_0x18b094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B094u;
            // 0x18b098: 0xad2502d0  sw          $a1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b094) {
            ctx->pc = 0x18B0C8u;
            goto label_18b0c8;
        }
    }
    ctx->pc = 0x18B09Cu;
    // 0x18b09c: 0x0  nop
    ctx->pc = 0x18b09cu;
    // NOP
label_18b0a0:
    // 0x18b0a0: 0x8d230118  lw          $v1, 0x118($t1)
    ctx->pc = 0x18b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 280)));
    // 0x18b0a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b0a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B0A8u;
    {
        const bool branch_taken_0x18b0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18B0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0A8u;
            // 0x18b0ac: 0x24c2001f  addiu       $v0, $a2, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0a8) {
            ctx->pc = 0x18B0C0u;
            goto label_18b0c0;
        }
    }
    ctx->pc = 0x18B0B0u;
    // 0x18b0b0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x18b0b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B0B4u;
    {
        const bool branch_taken_0x18b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0B4u;
            // 0x18b0b8: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0b4) {
            ctx->pc = 0x18B0C4u;
            goto label_18b0c4;
        }
    }
    ctx->pc = 0x18B0BCu;
    // 0x18b0bc: 0x0  nop
    ctx->pc = 0x18b0bcu;
    // NOP
label_18b0c0:
    // 0x18b0c0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x18b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_18b0c4:
    // 0x18b0c4: 0xad2202d0  sw          $v0, 0x2D0($t1)
    ctx->pc = 0x18b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 2));
label_18b0c8:
    // 0x18b0c8: 0x8d2302cc  lw          $v1, 0x2CC($t1)
    ctx->pc = 0x18b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 716)));
    // 0x18b0cc: 0x8d2402d0  lw          $a0, 0x2D0($t1)
    ctx->pc = 0x18b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 720)));
    // 0x18b0d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18b0d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18b0d8: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x18b0d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x18b0dc: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x18b0dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x18b0e0: 0xad2503bc  sw          $a1, 0x3BC($t1)
    ctx->pc = 0x18b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 956), GPR_U32(ctx, 5));
    // 0x18b0e4: 0xad2203c0  sw          $v0, 0x3C0($t1)
    ctx->pc = 0x18b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 960), GPR_U32(ctx, 2));
    // 0x18b0e8: 0xad2303b4  sw          $v1, 0x3B4($t1)
    ctx->pc = 0x18b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 948), GPR_U32(ctx, 3));
    // 0x18b0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0ECu;
            // 0x18b0f0: 0xad2403b8  sw          $a0, 0x3B8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 952), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B0F4u;
    // 0x18b0f4: 0x0  nop
    ctx->pc = 0x18b0f4u;
    // NOP
}
