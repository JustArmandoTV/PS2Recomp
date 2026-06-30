#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC030
// Address: 0x1bc030 - 0x1bc0b0
void sub_001BC030_0x1bc030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC030_0x1bc030");
#endif

    switch (ctx->pc) {
        case 0x1bc050u: goto label_1bc050;
        default: break;
    }

    ctx->pc = 0x1bc030u;

    // 0x1bc030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc034: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bc034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc03c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bc03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc040: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc048: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BC048u;
    SET_GPR_U32(ctx, 31, 0x1BC050u);
    ctx->pc = 0x1BC04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC048u;
            // 0x1bc04c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC050u; }
        if (ctx->pc != 0x1BC050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC050u; }
        if (ctx->pc != 0x1BC050u) { return; }
    }
    ctx->pc = 0x1BC050u;
label_1bc050:
    // 0x1bc050: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc054: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BC054u;
    {
        const bool branch_taken_0x1bc054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC054u;
            // 0x1bc058: 0x2465001c  addiu       $a1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc054) {
            ctx->pc = 0x1BC098u;
            goto label_1bc098;
        }
    }
    ctx->pc = 0x1BC05Cu;
    // 0x1bc05c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1bc05cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc064: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1bc064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1bc068: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bc068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1bc06c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1bc06cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1bc070: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1bc070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1bc074: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bc074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bc078: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1bc078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1bc07c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1bc07cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1bc080: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1bc080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1bc084: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bc084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bc088: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1bc088u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1bc08c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1bc08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bc090: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1bc090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1bc094: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1bc094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1bc098:
    // 0x1bc098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc09c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc0a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC0A4u;
            // 0x1bc0a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC0ACu;
    // 0x1bc0ac: 0x0  nop
    ctx->pc = 0x1bc0acu;
    // NOP
}
