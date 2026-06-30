#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025FC90
// Address: 0x25fc90 - 0x25fd60
void sub_0025FC90_0x25fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FC90_0x25fc90");
#endif

    switch (ctx->pc) {
        case 0x25fd28u: goto label_25fd28;
        case 0x25fd50u: goto label_25fd50;
        default: break;
    }

    ctx->pc = 0x25fc90u;

    // 0x25fc90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fc94: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x25fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x25fc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fc9c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x25fc9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25fca0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x25fca0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25fca4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25fca8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x25fca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x25fcac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x25fcacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25fcb0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25fcb4: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x25fcb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25fcb8: 0x91230004  lbu         $v1, 0x4($t1)
    ctx->pc = 0x25fcb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x25fcbc: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x25fcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x25fcc0: 0x91230005  lbu         $v1, 0x5($t1)
    ctx->pc = 0x25fcc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x25fcc4: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x25fcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x25fcc8: 0x95230006  lhu         $v1, 0x6($t1)
    ctx->pc = 0x25fcc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x25fccc: 0xa5030006  sh          $v1, 0x6($t0)
    ctx->pc = 0x25fcccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x25fcd0: 0x91270008  lbu         $a3, 0x8($t1)
    ctx->pc = 0x25fcd0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x25fcd4: 0x91260009  lbu         $a2, 0x9($t1)
    ctx->pc = 0x25fcd4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 9)));
    // 0x25fcd8: 0x9125000a  lbu         $a1, 0xA($t1)
    ctx->pc = 0x25fcd8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x25fcdc: 0x9123000b  lbu         $v1, 0xB($t1)
    ctx->pc = 0x25fcdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 11)));
    // 0x25fce0: 0xa1070008  sb          $a3, 0x8($t0)
    ctx->pc = 0x25fce0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x25fce4: 0xa1060009  sb          $a2, 0x9($t0)
    ctx->pc = 0x25fce4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x25fce8: 0xa105000a  sb          $a1, 0xA($t0)
    ctx->pc = 0x25fce8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x25fcec: 0xa103000b  sb          $v1, 0xB($t0)
    ctx->pc = 0x25fcecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x25fcf0: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x25fcf0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25fcf4: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x25fcf4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x25fcf8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x25fcf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25fcfc: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x25fcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x25fd00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25fd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25fd04: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x25fd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25fd08: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x25fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25fd0c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x25fd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x25fd10: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x25fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x25fd14: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x25fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x25fd18: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x25fd18u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x25fd1c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x25fd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x25fd20: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25FD20u;
    {
        const bool branch_taken_0x25fd20 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25FD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD20u;
            // 0x25fd24: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd20) {
            ctx->pc = 0x25FD48u;
            goto label_25fd48;
        }
    }
    ctx->pc = 0x25FD28u;
label_25fd28:
    // 0x25fd28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fd2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x25fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x25fd30: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x25fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x25fd34: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x25fd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x25fd38: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x25fd38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x25fd3c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25FD3Cu;
    {
        const bool branch_taken_0x25fd3c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x25fd3c) {
            ctx->pc = 0x25FD28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25fd28;
        }
    }
    ctx->pc = 0x25FD44u;
    // 0x25fd44: 0x0  nop
    ctx->pc = 0x25fd44u;
    // NOP
label_25fd48:
    // 0x25fd48: 0xc097eac  jal         func_25FAB0
    ctx->pc = 0x25FD48u;
    SET_GPR_U32(ctx, 31, 0x25FD50u);
    ctx->pc = 0x25FAB0u;
    if (runtime->hasFunction(0x25FAB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD50u; }
        if (ctx->pc != 0x25FD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FAB0_0x25fab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD50u; }
        if (ctx->pc != 0x25FD50u) { return; }
    }
    ctx->pc = 0x25FD50u;
label_25fd50:
    // 0x25fd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fd54: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD54u;
            // 0x25fd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FD5Cu;
    // 0x25fd5c: 0x0  nop
    ctx->pc = 0x25fd5cu;
    // NOP
}
