#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A5E0
// Address: 0x13a5e0 - 0x13a6a0
void sub_0013A5E0_0x13a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A5E0_0x13a5e0");
#endif

    ctx->pc = 0x13a5e0u;

    // 0x13a5e0: 0x3084013f  andi        $a0, $a0, 0x13F
    ctx->pc = 0x13a5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)319);
    // 0x13a5e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x13a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13a5e8: 0x50820028  beql        $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x13A5E8u;
    {
        const bool branch_taken_0x13a5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13a5e8) {
            ctx->pc = 0x13A5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A5E8u;
            // 0x13a5ec: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A5F0u;
    // 0x13a5f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13a5f4: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x13A5F4u;
    {
        const bool branch_taken_0x13a5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a5f4) {
            ctx->pc = 0x13A5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A5F4u;
            // 0x13a5f8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A5FCu;
    // 0x13a5fc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x13a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13a600: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x13A600u;
    {
        const bool branch_taken_0x13a600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a600) {
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A608u;
    // 0x13a608: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13a60c: 0x5082001f  beql        $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13A60Cu;
    {
        const bool branch_taken_0x13a60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13a60c) {
            ctx->pc = 0x13A610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A60Cu;
            // 0x13a610: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A614u;
    // 0x13a614: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13a618: 0x5082001c  beql        $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13A618u;
    {
        const bool branch_taken_0x13a618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13a618) {
            ctx->pc = 0x13A61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A618u;
            // 0x13a61c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A620u;
    // 0x13a620: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a624: 0x50820019  beql        $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13A624u;
    {
        const bool branch_taken_0x13a624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13a624) {
            ctx->pc = 0x13A628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A624u;
            // 0x13a628: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A62Cu;
    // 0x13a62c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a630: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13A630u;
    {
        const bool branch_taken_0x13a630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13a630) {
            ctx->pc = 0x13A634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A630u;
            // 0x13a634: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A638u;
    // 0x13a638: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13A638u;
    {
        const bool branch_taken_0x13a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A638u;
            // 0x13a63c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a638) {
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A640u;
    // 0x13a640: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x13a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x13a644: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13A644u;
    {
        const bool branch_taken_0x13a644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a644) {
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A64Cu;
    // 0x13a64c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x13a650: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13A650u;
    {
        const bool branch_taken_0x13a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a650) {
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A658u;
    // 0x13a658: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x13a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13a65c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13A65Cu;
    {
        const bool branch_taken_0x13a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a65c) {
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A664u;
    // 0x13a664: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x13a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13a668: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13A668u;
    {
        const bool branch_taken_0x13a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a668) {
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A670u;
    // 0x13a670: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x13a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13a674: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13A674u;
    {
        const bool branch_taken_0x13a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a674) {
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A67Cu;
    // 0x13a67c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x13a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13a680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A680u;
    {
        const bool branch_taken_0x13a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a680) {
            ctx->pc = 0x13A68Cu;
            goto label_13a68c;
        }
    }
    ctx->pc = 0x13A688u;
    // 0x13a688: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x13a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_13a68c:
    // 0x13a68c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A694u;
    // 0x13a694: 0x0  nop
    ctx->pc = 0x13a694u;
    // NOP
    // 0x13a698: 0x0  nop
    ctx->pc = 0x13a698u;
    // NOP
    // 0x13a69c: 0x0  nop
    ctx->pc = 0x13a69cu;
    // NOP
}
