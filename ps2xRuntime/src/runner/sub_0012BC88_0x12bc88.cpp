#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012BC88
// Address: 0x12bc88 - 0x12bd28
void sub_0012BC88_0x12bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BC88_0x12bc88");
#endif

    switch (ctx->pc) {
        case 0x12bc90u: goto label_12bc90;
        case 0x12bce0u: goto label_12bce0;
        default: break;
    }

    ctx->pc = 0x12bc88u;

    // 0x12bc88: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12bc8c: 0x25e80768  addiu       $t0, $t7, 0x768
    ctx->pc = 0x12bc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
label_12bc90:
    // 0x12bc90: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x12bc90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12bc94: 0x27e00  sll         $t7, $v0, 24
    ctx->pc = 0x12bc94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x12bc98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12bc9c: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x12bc9cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x12bca0: 0x1e86821  addu        $t5, $t7, $t0
    ctx->pc = 0x12bca0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x12bca4: 0x11e0001e  beqz        $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x12BCA4u;
    {
        const bool branch_taken_0x12bca4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCA4u;
            // 0x12bca8: 0x25ea0020  addiu       $t2, $t7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bca4) {
            ctx->pc = 0x12BD20u;
            goto label_12bd20;
        }
    }
    ctx->pc = 0x12BCACu;
    // 0x12bcac: 0x90a90000  lbu         $t1, 0x0($a1)
    ctx->pc = 0x12bcacu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12bcb0: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x12bcb0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x12bcb4: 0x96600  sll         $t4, $t1, 24
    ctx->pc = 0x12bcb4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x12bcb8: 0xc6603  sra         $t4, $t4, 24
    ctx->pc = 0x12bcb8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 24));
    // 0x12bcbc: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x12bcbcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12bcc0: 0x1885821  addu        $t3, $t4, $t0
    ctx->pc = 0x12bcc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x12bcc4: 0x1ed500a  movz        $t2, $t7, $t5
    ctx->pc = 0x12bcc4u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 15));
    // 0x12bcc8: 0x916f0000  lbu         $t7, 0x0($t3)
    ctx->pc = 0x12bcc8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12bccc: 0x258e0020  addiu       $t6, $t4, 0x20
    ctx->pc = 0x12bcccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x12bcd0: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12bcd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12bcd4: 0x18f700a  movz        $t6, $t4, $t7
    ctx->pc = 0x12bcd4u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 12));
    // 0x12bcd8: 0x114effed  beq         $t2, $t6, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12BCD8u;
    {
        const bool branch_taken_0x12bcd8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 14));
        ctx->pc = 0x12BCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCD8u;
            // 0x12bcdc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcd8) {
            ctx->pc = 0x12BC90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bc90;
        }
    }
    ctx->pc = 0x12BCE0u;
label_12bce0:
    // 0x12bce0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12bce0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12bce4: 0x312d00ff  andi        $t5, $t1, 0xFF
    ctx->pc = 0x12bce4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x12bce8: 0x25ef0768  addiu       $t7, $t7, 0x768
    ctx->pc = 0x12bce8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
    // 0x12bcec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12bcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12bcf0: 0x1af6021  addu        $t4, $t5, $t7
    ctx->pc = 0x12bcf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x12bcf4: 0x244a0020  addiu       $t2, $v0, 0x20
    ctx->pc = 0x12bcf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12bcf8: 0x4f7821  addu        $t7, $v0, $t7
    ctx->pc = 0x12bcf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x12bcfc: 0x25ab0020  addiu       $t3, $t5, 0x20
    ctx->pc = 0x12bcfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x12bd00: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12bd00u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12bd04: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12bd04u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x12bd08: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x12bd08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12bd0c: 0x14e100b  movn        $v0, $t2, $t6
    ctx->pc = 0x12bd0cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x12bd10: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12bd10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12bd14: 0x16f680b  movn        $t5, $t3, $t7
    ctx->pc = 0x12bd14u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 11));
    // 0x12bd18: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD18u;
            // 0x12bd1c: 0x4d1023  subu        $v0, $v0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BD20u;
label_12bd20:
    // 0x12bd20: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x12BD20u;
    {
        const bool branch_taken_0x12bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BD20u;
            // 0x12bd24: 0x90a90000  lbu         $t1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd20) {
            ctx->pc = 0x12BCE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bce0;
        }
    }
    ctx->pc = 0x12BD28u;
}
