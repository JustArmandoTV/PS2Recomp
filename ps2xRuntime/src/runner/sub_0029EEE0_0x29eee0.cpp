#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029EEE0
// Address: 0x29eee0 - 0x29f000
void sub_0029EEE0_0x29eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EEE0_0x29eee0");
#endif

    switch (ctx->pc) {
        case 0x29ef2cu: goto label_29ef2c;
        case 0x29efd4u: goto label_29efd4;
        default: break;
    }

    ctx->pc = 0x29eee0u;

    // 0x29eee0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x29eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29eee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29eee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eee8: 0x18c00043  blez        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x29EEE8u;
    {
        const bool branch_taken_0x29eee8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x29EEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EEE8u;
            // 0x29eeec: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eee8) {
            ctx->pc = 0x29EFF8u;
            goto label_29eff8;
        }
    }
    ctx->pc = 0x29EEF0u;
    // 0x29eef0: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x29eef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x29eef4: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x29EEF4u;
    {
        const bool branch_taken_0x29eef4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EEF4u;
            // 0x29eef8: 0x24c3fff8  addiu       $v1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eef4) {
            ctx->pc = 0x29EFC0u;
            goto label_29efc0;
        }
    }
    ctx->pc = 0x29EEFCu;
    // 0x29eefc: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EEFCu;
    {
        const bool branch_taken_0x29eefc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x29EF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EEFCu;
            // 0x29ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eefc) {
            ctx->pc = 0x29EF1Cu;
            goto label_29ef1c;
        }
    }
    ctx->pc = 0x29EF04u;
    // 0x29ef04: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x29ef04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x29ef08: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x29ef08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x29ef0c: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x29ef0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x29ef10: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x29EF10u;
    {
        const bool branch_taken_0x29ef10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef10) {
            ctx->pc = 0x29EF1Cu;
            goto label_29ef1c;
        }
    }
    ctx->pc = 0x29EF18u;
    // 0x29ef18: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x29ef18u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_29ef1c:
    // 0x29ef1c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x29EF1Cu;
    {
        const bool branch_taken_0x29ef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef1c) {
            ctx->pc = 0x29EFC0u;
            goto label_29efc0;
        }
    }
    ctx->pc = 0x29EF24u;
    // 0x29ef24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ef24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ef2c:
    // 0x29ef2c: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29ef2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ef30: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x29ef30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x29ef34: 0xe3402a  slt         $t0, $a3, $v1
    ctx->pc = 0x29ef34u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29ef38: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x29ef38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29ef3c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29ef3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29ef40: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x29ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x29ef44: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29ef44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ef48: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x29ef48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29ef4c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29ef4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29ef50: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x29ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x29ef54: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29ef54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ef58: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x29ef58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29ef5c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29ef5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29ef60: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x29ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x29ef64: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29ef64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ef68: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x29ef68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29ef6c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29ef6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29ef70: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x29ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x29ef74: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29ef74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ef78: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x29ef78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29ef7c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29ef7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29ef80: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x29ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x29ef84: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29ef84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ef88: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x29ef88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29ef8c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29ef8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29ef90: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x29ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
    // 0x29ef94: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29ef94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ef98: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x29ef98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29ef9c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29ef9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29efa0: 0xad220018  sw          $v0, 0x18($t1)
    ctx->pc = 0x29efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 2));
    // 0x29efa4: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29efa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29efa8: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x29efa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29efac: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x29efacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x29efb0: 0xad22001c  sw          $v0, 0x1C($t1)
    ctx->pc = 0x29efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
    // 0x29efb4: 0x1500ffdd  bnez        $t0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x29EFB4u;
    {
        const bool branch_taken_0x29efb4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EFB4u;
            // 0x29efb8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29efb4) {
            ctx->pc = 0x29EF2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ef2c;
        }
    }
    ctx->pc = 0x29EFBCu;
    // 0x29efbc: 0x0  nop
    ctx->pc = 0x29efbcu;
    // NOP
label_29efc0:
    // 0x29efc0: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x29efc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29efc4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x29EFC4u;
    {
        const bool branch_taken_0x29efc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29efc4) {
            ctx->pc = 0x29EFF8u;
            goto label_29eff8;
        }
    }
    ctx->pc = 0x29EFCCu;
    // 0x29efcc: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x29efccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29efd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29efd4:
    // 0x29efd4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x29efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29efd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29efd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29efdc: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x29efdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29efe0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x29efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29efe4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x29efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x29efe8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29efec: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29EFECu;
    {
        const bool branch_taken_0x29efec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EFECu;
            // 0x29eff0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29efec) {
            ctx->pc = 0x29EFD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29efd4;
        }
    }
    ctx->pc = 0x29EFF4u;
    // 0x29eff4: 0x0  nop
    ctx->pc = 0x29eff4u;
    // NOP
label_29eff8:
    // 0x29eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x29EFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EFF8u;
            // 0x29effc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F000u;
}
