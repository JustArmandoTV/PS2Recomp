#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180FE0
// Address: 0x180fe0 - 0x1810a8
void sub_00180FE0_0x180fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180FE0_0x180fe0");
#endif

    switch (ctx->pc) {
        case 0x181030u: goto label_181030;
        case 0x181078u: goto label_181078;
        default: break;
    }

    ctx->pc = 0x180fe0u;

    // 0x180fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180ff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180ff4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x180ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x180ff8: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x180FF8u;
    {
        const bool branch_taken_0x180ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x180ff8) {
            ctx->pc = 0x180FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180FF8u;
            // 0x180ffc: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181020u;
            goto label_181020;
        }
    }
    ctx->pc = 0x181000u;
    // 0x181000: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x181000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x181004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18100c: 0x24846b80  addiu       $a0, $a0, 0x6B80
    ctx->pc = 0x18100cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27520));
    // 0x181010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181014: 0x8060334  j           func_180CD0
    ctx->pc = 0x181014u;
    ctx->pc = 0x181018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181014u;
            // 0x181018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18101Cu;
    // 0x18101c: 0x0  nop
    ctx->pc = 0x18101cu;
    // NOP
label_181020:
    // 0x181020: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x181020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x181024: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x181024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x181028: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x181028u;
    SET_GPR_U32(ctx, 31, 0x181030u);
    ctx->pc = 0x18102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181028u;
            // 0x18102c: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181030u; }
        if (ctx->pc != 0x181030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181030u; }
        if (ctx->pc != 0x181030u) { return; }
    }
    ctx->pc = 0x181030u;
label_181030:
    // 0x181030: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181034: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x181034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181038: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x181038u;
    {
        const bool branch_taken_0x181038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x18103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181038u;
            // 0x18103c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181038) {
            ctx->pc = 0x181080u;
            goto label_181080;
        }
    }
    ctx->pc = 0x181040u;
    // 0x181040: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181040u;
    {
        const bool branch_taken_0x181040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181040u;
            // 0x181044: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181040) {
            ctx->pc = 0x181060u;
            goto label_181060;
        }
    }
    ctx->pc = 0x181048u;
    // 0x181048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18104c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18104Cu;
    {
        const bool branch_taken_0x18104c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18104c) {
            ctx->pc = 0x181070u;
            goto label_181070;
        }
    }
    ctx->pc = 0x181054u;
    // 0x181054: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x181054u;
    {
        const bool branch_taken_0x181054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181054u;
            // 0x181058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181054) {
            ctx->pc = 0x181094u;
            goto label_181094;
        }
    }
    ctx->pc = 0x18105Cu;
    // 0x18105c: 0x0  nop
    ctx->pc = 0x18105cu;
    // NOP
label_181060:
    // 0x181060: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x181060u;
    {
        const bool branch_taken_0x181060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181060) {
            ctx->pc = 0x181064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181060u;
            // 0x181064: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181090u;
            goto label_181090;
        }
    }
    ctx->pc = 0x181068u;
    // 0x181068: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181068u;
    {
        const bool branch_taken_0x181068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181068u;
            // 0x18106c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181068) {
            ctx->pc = 0x181094u;
            goto label_181094;
        }
    }
    ctx->pc = 0x181070u;
label_181070:
    // 0x181070: 0xc05c30c  jal         func_170C30
    ctx->pc = 0x181070u;
    SET_GPR_U32(ctx, 31, 0x181078u);
    ctx->pc = 0x181074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181070u;
            // 0x181074: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C30u;
    if (runtime->hasFunction(0x170C30u)) {
        auto targetFn = runtime->lookupFunction(0x170C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181078u; }
        if (ctx->pc != 0x181078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C30_0x170c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181078u; }
        if (ctx->pc != 0x181078u) { return; }
    }
    ctx->pc = 0x181078u;
label_181078:
    // 0x181078: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181078u;
    {
        const bool branch_taken_0x181078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18107Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181078u;
            // 0x18107c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181078) {
            ctx->pc = 0x181090u;
            goto label_181090;
        }
    }
    ctx->pc = 0x181080u;
label_181080:
    // 0x181080: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x181080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x181084: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181088: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x181088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x18108c: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x18108cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_181090:
    // 0x181090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_181094:
    // 0x181094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18109c: 0x3e00008  jr          $ra
    ctx->pc = 0x18109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18109Cu;
            // 0x1810a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1810A4u;
    // 0x1810a4: 0x0  nop
    ctx->pc = 0x1810a4u;
    // NOP
}
