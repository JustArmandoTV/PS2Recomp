#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BF80
// Address: 0x15bf80 - 0x15c070
void sub_0015BF80_0x15bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BF80_0x15bf80");
#endif

    ctx->pc = 0x15bf80u;

    // 0x15bf80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15bf84: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF84u;
    {
        const bool branch_taken_0x15bf84 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF84u;
            // 0x15bf88: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf84) {
            ctx->pc = 0x15BF94u;
            goto label_15bf94;
        }
    }
    ctx->pc = 0x15BF8Cu;
    // 0x15bf8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15bf90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15bf94:
    // 0x15bf94: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x15bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x15bf98: 0x3683c  dsll32      $t5, $v1, 0
    ctx->pc = 0x15bf98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15bf9c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15bf9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15bfa0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x15bfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15bfa4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x15bfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x15bfa8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x15bfa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x15bfac: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x15bfacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15bfb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15bfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15bfb4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x15bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x15bfb8: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x15bfb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x15bfbc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15bfbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15bfc0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x15bfc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x15bfc4: 0x1a56825  or          $t5, $t5, $a1
    ctx->pc = 0x15bfc4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
    // 0x15bfc8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15bfcc: 0x72e38  dsll        $a1, $a3, 24
    ctx->pc = 0x15bfccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 24);
    // 0x15bfd0: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x15bfd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15bfd4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x15bfd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x15bfd8: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x15bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x15bfdc: 0x653025  or          $a2, $v1, $a1
    ctx->pc = 0x15bfdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15bfe0: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x15bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x15bfe4: 0x72e3c  dsll32      $a1, $a3, 24
    ctx->pc = 0x15bfe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 24));
    // 0x15bfe8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x15bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x15bfec: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x15bfecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x15bff0: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x15bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x15bff4: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x15bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x15bff8: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BFF8u;
    {
        const bool branch_taken_0x15bff8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFF8u;
            // 0x15bffc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bff8) {
            ctx->pc = 0x15C010u;
            goto label_15c010;
        }
    }
    ctx->pc = 0x15C000u;
    // 0x15c000: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x15c000u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x15c004: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x15c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x15c008: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x15c008u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x15c00c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x15c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_15c010:
    // 0x15c010: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x15c010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x15c014: 0x9303c  dsll32      $a2, $t1, 0
    ctx->pc = 0x15c014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 0));
    // 0x15c018: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15c018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15c01c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x15c01cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x15c020: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x15c020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15c024: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x15c024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15c028: 0x81902  srl         $v1, $t0, 4
    ctx->pc = 0x15c028u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x15c02c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x15c02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15c030: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x15c030u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x15c034: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x15c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x15c038: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x15c038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x15c03c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x15c03cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x15c040: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x15c044: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x15c044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x15c048: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x15c048u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x15c04c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15c04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15c050: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x15c050u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x15c054: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x15c054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15c058: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x15c058u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x15c05c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C05Cu;
            // 0x15c060: 0xfc800028  sd          $zero, 0x28($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C064u;
    // 0x15c064: 0x0  nop
    ctx->pc = 0x15c064u;
    // NOP
    // 0x15c068: 0x0  nop
    ctx->pc = 0x15c068u;
    // NOP
    // 0x15c06c: 0x0  nop
    ctx->pc = 0x15c06cu;
    // NOP
}
