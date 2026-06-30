#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C60F0
// Address: 0x1c60f0 - 0x1c6198
void sub_001C60F0_0x1c60f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C60F0_0x1c60f0");
#endif

    switch (ctx->pc) {
        case 0x1c6110u: goto label_1c6110;
        case 0x1c6130u: goto label_1c6130;
        default: break;
    }

    ctx->pc = 0x1c60f0u;

    // 0x1c60f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c60f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c60f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c60f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60fc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1c60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1c6100: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6108: 0xc0717ba  jal         func_1C5EE8
    ctx->pc = 0x1C6108u;
    SET_GPR_U32(ctx, 31, 0x1C6110u);
    ctx->pc = 0x1C610Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6108u;
            // 0x1c610c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5EE8u;
    if (runtime->hasFunction(0x1C5EE8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6110u; }
        if (ctx->pc != 0x1C6110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5EE8_0x1c5ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6110u; }
        if (ctx->pc != 0x1C6110u) { return; }
    }
    ctx->pc = 0x1C6110u;
label_1c6110:
    // 0x1c6110: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C6110u;
    {
        const bool branch_taken_0x1c6110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6110) {
            ctx->pc = 0x1C6114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6110u;
            // 0x1c6114: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6184u;
            goto label_1c6184;
        }
    }
    ctx->pc = 0x1C6118u;
    // 0x1c6118: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1c6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1c611c: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x1c611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c6120: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C6120u;
    {
        const bool branch_taken_0x1c6120 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C6124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6120u;
            // 0x1c6124: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6120) {
            ctx->pc = 0x1C617Cu;
            goto label_1c617c;
        }
    }
    ctx->pc = 0x1C6128u;
    // 0x1c6128: 0x26270070  addiu       $a3, $s1, 0x70
    ctx->pc = 0x1c6128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1c612c: 0x0  nop
    ctx->pc = 0x1c612cu;
    // NOP
label_1c6130:
    // 0x1c6130: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1c6130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c6134: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c6138: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1c6138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c613c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1c613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1c6140: 0x51a03  sra         $v1, $a1, 8
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1c6144: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1c6144u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1c6148: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c6148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c614c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c614cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c6150: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c6150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c6154: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x1c6154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1c6158: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c6158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c615c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c6160: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c6160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c6164: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c6164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c6168: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1c6168u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1c616c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1c616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1c6170: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1c6170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c6174: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C6174u;
    {
        const bool branch_taken_0x1c6174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6174u;
            // 0x1c6178: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6174) {
            ctx->pc = 0x1C6130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6130;
        }
    }
    ctx->pc = 0x1C617Cu;
label_1c617c:
    // 0x1c617c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c617cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6184:
    // 0x1c6184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c618c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C618Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C618Cu;
            // 0x1c6190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6194u;
    // 0x1c6194: 0x0  nop
    ctx->pc = 0x1c6194u;
    // NOP
}
