#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010DEE0
// Address: 0x10dee0 - 0x10df70
void sub_0010DEE0_0x10dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DEE0_0x10dee0");
#endif

    ctx->pc = 0x10dee0u;

    // 0x10dee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10dee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dee4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x10dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x10dee8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x10dee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x10deec: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x10deecu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x10def0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x10def0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x10def4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DEF4u;
    {
        const bool branch_taken_0x10def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DEF4u;
            // 0x10def8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10def4) {
            ctx->pc = 0x10DF04u;
            goto label_10df04;
        }
    }
    ctx->pc = 0x10DEFCu;
    // 0x10defc: 0x3e00008  jr          $ra
    ctx->pc = 0x10DEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DEFCu;
            // 0x10df00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF04u;
label_10df04:
    // 0x10df04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DF04u;
    {
        const bool branch_taken_0x10df04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF04u;
            // 0x10df08: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df04) {
            ctx->pc = 0x10DF14u;
            goto label_10df14;
        }
    }
    ctx->pc = 0x10DF0Cu;
    // 0x10df0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF0Cu;
            // 0x10df10: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF14u;
label_10df14:
    // 0x10df14: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x10df14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10df18: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x10df18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x10df1c: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x10df1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x10df20: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x10DF20u;
    {
        const bool branch_taken_0x10df20 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x10DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF20u;
            // 0x10df24: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df20) {
            ctx->pc = 0x10DF58u;
            goto label_10df58;
        }
    }
    ctx->pc = 0x10DF28u;
    // 0x10df28: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x10df28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x10df2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10df30: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x10df30u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x10df34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10df34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10df38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10df38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10df3c: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x10df3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x10df40: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x10df40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x10df44: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DF44u;
    {
        const bool branch_taken_0x10df44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10df44) {
            ctx->pc = 0x10DF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF44u;
            // 0x10df48: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10DF64u;
            goto label_10df64;
        }
    }
    ctx->pc = 0x10DF4Cu;
    // 0x10df4c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x10df4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x10df50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10DF50u;
    {
        const bool branch_taken_0x10df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF50u;
            // 0x10df54: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df50) {
            ctx->pc = 0x10DF64u;
            goto label_10df64;
        }
    }
    ctx->pc = 0x10DF58u;
label_10df58:
    // 0x10df58: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x10df58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10df5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10df5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10df60: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x10df60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_10df64:
    // 0x10df64: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x10df64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10df68: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DF68u;
            // 0x10df6c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DF70u;
}
