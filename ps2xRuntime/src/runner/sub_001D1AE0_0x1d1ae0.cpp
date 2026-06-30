#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1AE0
// Address: 0x1d1ae0 - 0x1d1b90
void sub_001D1AE0_0x1d1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1AE0_0x1d1ae0");
#endif

    switch (ctx->pc) {
        case 0x1d1b78u: goto label_1d1b78;
        default: break;
    }

    ctx->pc = 0x1d1ae0u;

    // 0x1d1ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1ae4: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1d1ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1d1ae8: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1d1ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d1aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1af0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d1af4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1af4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d1af8: 0x84690304  lh          $t1, 0x304($v1)
    ctx->pc = 0x1d1af8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1d1afc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1d1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1d1b00: 0xa4620304  sh          $v0, 0x304($v1)
    ctx->pc = 0x1d1b00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d1b04: 0x846802f8  lh          $t0, 0x2F8($v1)
    ctx->pc = 0x1d1b04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 760)));
    // 0x1d1b08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1b0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1b0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d1b10: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x1d1b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d1b14: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1B14u;
    {
        const bool branch_taken_0x1d1b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b14) {
            ctx->pc = 0x1D1B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B14u;
            // 0x1d1b18: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B1Cu;
            goto label_1d1b1c;
        }
    }
    ctx->pc = 0x1D1B1Cu;
label_1d1b1c:
    // 0x1d1b1c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1d1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d1b20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d1b24: 0xa4680304  sh          $t0, 0x304($v1)
    ctx->pc = 0x1d1b24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 772), (uint16_t)GPR_U32(ctx, 8));
    // 0x1d1b28: 0x24670304  addiu       $a3, $v1, 0x304
    ctx->pc = 0x1d1b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 772));
    // 0x1d1b2c: 0x8c46a730  lw          $a2, -0x58D0($v0)
    ctx->pc = 0x1d1b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944560)));
    // 0x1d1b30: 0x81c3c  dsll32      $v1, $t0, 16
    ctx->pc = 0x1d1b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1d1b34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d1b34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d1b38: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d1b3c: 0x8c42a730  lw          $v0, -0x58D0($v0)
    ctx->pc = 0x1d1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944560)));
    // 0x1d1b40: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d1b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d1b44: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1B44u;
    {
        const bool branch_taken_0x1d1b44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b44) {
            ctx->pc = 0x1D1B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B44u;
            // 0x1d1b48: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B4Cu;
            goto label_1d1b4c;
        }
    }
    ctx->pc = 0x1D1B4Cu;
label_1d1b4c:
    // 0x1d1b4c: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x1d1b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1d1b50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d1b50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d1b54: 0x15230003  bne         $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1B54u;
    {
        const bool branch_taken_0x1d1b54 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D1B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B54u;
            // 0x1d1b58: 0xa4e60000  sh          $a2, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b54) {
            ctx->pc = 0x1D1B64u;
            goto label_1d1b64;
        }
    }
    ctx->pc = 0x1D1B5Cu;
    // 0x1d1b5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1B5Cu;
    {
        const bool branch_taken_0x1d1b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B5Cu;
            // 0x1d1b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b5c) {
            ctx->pc = 0x1D1B7Cu;
            goto label_1d1b7c;
        }
    }
    ctx->pc = 0x1D1B64u;
label_1d1b64:
    // 0x1d1b64: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d1b68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d1b6c: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1d1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1d1b70: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1B70u;
    SET_GPR_U32(ctx, 31, 0x1D1B78u);
    ctx->pc = 0x1D1B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B70u;
            // 0x1d1b74: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B78u; }
        if (ctx->pc != 0x1D1B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1B78u; }
        if (ctx->pc != 0x1D1B78u) { return; }
    }
    ctx->pc = 0x1D1B78u;
label_1d1b78:
    // 0x1d1b78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b7c:
    // 0x1d1b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1B80u;
            // 0x1d1b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1B88u;
    // 0x1d1b88: 0x0  nop
    ctx->pc = 0x1d1b88u;
    // NOP
    // 0x1d1b8c: 0x0  nop
    ctx->pc = 0x1d1b8cu;
    // NOP
}
