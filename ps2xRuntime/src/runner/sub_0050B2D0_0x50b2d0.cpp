#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050B2D0
// Address: 0x50b2d0 - 0x50b480
void sub_0050B2D0_0x50b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B2D0_0x50b2d0");
#endif

    switch (ctx->pc) {
        case 0x50b468u: goto label_50b468;
        default: break;
    }

    ctx->pc = 0x50b2d0u;

    // 0x50b2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b2d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b2dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b2e0: 0x52000062  beql        $s0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x50B2E0u;
    {
        const bool branch_taken_0x50b2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b2e0) {
            ctx->pc = 0x50B2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B2E0u;
            // 0x50b2e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B46Cu;
            goto label_50b46c;
        }
    }
    ctx->pc = 0x50B2E8u;
    // 0x50b2e8: 0x26030104  addiu       $v1, $s0, 0x104
    ctx->pc = 0x50b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x50b2ec: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x50B2ECu;
    {
        const bool branch_taken_0x50b2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b2ec) {
            ctx->pc = 0x50B2F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B2ECu;
            // 0x50b2f0: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B324u;
            goto label_50b324;
        }
    }
    ctx->pc = 0x50B2F4u;
    // 0x50b2f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b2f8: 0x244256d0  addiu       $v0, $v0, 0x56D0
    ctx->pc = 0x50b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22224));
    // 0x50b2fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x50B2FCu;
    {
        const bool branch_taken_0x50b2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B2FCu;
            // 0x50b300: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b2fc) {
            ctx->pc = 0x50B320u;
            goto label_50b320;
        }
    }
    ctx->pc = 0x50B304u;
    // 0x50b304: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b308: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x50b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
    // 0x50b30c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B30Cu;
    {
        const bool branch_taken_0x50b30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B30Cu;
            // 0x50b310: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b30c) {
            ctx->pc = 0x50B320u;
            goto label_50b320;
        }
    }
    ctx->pc = 0x50B314u;
    // 0x50b314: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b318: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b31c: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x50b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_50b320:
    // 0x50b320: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x50b320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_50b324:
    // 0x50b324: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x50B324u;
    {
        const bool branch_taken_0x50b324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b324) {
            ctx->pc = 0x50B328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B324u;
            // 0x50b328: 0x260300d0  addiu       $v1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B34Cu;
            goto label_50b34c;
        }
    }
    ctx->pc = 0x50B32Cu;
    // 0x50b32c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b330: 0x24425630  addiu       $v0, $v0, 0x5630
    ctx->pc = 0x50b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22064));
    // 0x50b334: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B334u;
    {
        const bool branch_taken_0x50b334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B334u;
            // 0x50b338: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b334) {
            ctx->pc = 0x50B348u;
            goto label_50b348;
        }
    }
    ctx->pc = 0x50B33Cu;
    // 0x50b33c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b340: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b344: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x50b344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_50b348:
    // 0x50b348: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x50b348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_50b34c:
    // 0x50b34c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x50B34Cu;
    {
        const bool branch_taken_0x50b34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b34c) {
            ctx->pc = 0x50B350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B34Cu;
            // 0x50b350: 0x260300c0  addiu       $v1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B374u;
            goto label_50b374;
        }
    }
    ctx->pc = 0x50B354u;
    // 0x50b354: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b358: 0x24425610  addiu       $v0, $v0, 0x5610
    ctx->pc = 0x50b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22032));
    // 0x50b35c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B35Cu;
    {
        const bool branch_taken_0x50b35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B35Cu;
            // 0x50b360: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b35c) {
            ctx->pc = 0x50B370u;
            goto label_50b370;
        }
    }
    ctx->pc = 0x50B364u;
    // 0x50b364: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b368: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b36c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x50b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_50b370:
    // 0x50b370: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x50b370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_50b374:
    // 0x50b374: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x50B374u;
    {
        const bool branch_taken_0x50b374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b374) {
            ctx->pc = 0x50B378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B374u;
            // 0x50b378: 0x260300bc  addiu       $v1, $s0, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B39Cu;
            goto label_50b39c;
        }
    }
    ctx->pc = 0x50B37Cu;
    // 0x50b37c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b380: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x50b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
    // 0x50b384: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B384u;
    {
        const bool branch_taken_0x50b384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B384u;
            // 0x50b388: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b384) {
            ctx->pc = 0x50B398u;
            goto label_50b398;
        }
    }
    ctx->pc = 0x50B38Cu;
    // 0x50b38c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b390: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b394: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x50b394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_50b398:
    // 0x50b398: 0x260300bc  addiu       $v1, $s0, 0xBC
    ctx->pc = 0x50b398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
label_50b39c:
    // 0x50b39c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x50B39Cu;
    {
        const bool branch_taken_0x50b39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b39c) {
            ctx->pc = 0x50B3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B39Cu;
            // 0x50b3a0: 0x260300b8  addiu       $v1, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B3C4u;
            goto label_50b3c4;
        }
    }
    ctx->pc = 0x50B3A4u;
    // 0x50b3a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b3a8: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x50b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
    // 0x50b3ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B3ACu;
    {
        const bool branch_taken_0x50b3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B3ACu;
            // 0x50b3b0: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b3ac) {
            ctx->pc = 0x50B3C0u;
            goto label_50b3c0;
        }
    }
    ctx->pc = 0x50B3B4u;
    // 0x50b3b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b3b8: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b3bc: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x50b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_50b3c0:
    // 0x50b3c0: 0x260300b8  addiu       $v1, $s0, 0xB8
    ctx->pc = 0x50b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_50b3c4:
    // 0x50b3c4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x50B3C4u;
    {
        const bool branch_taken_0x50b3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b3c4) {
            ctx->pc = 0x50B3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B3C4u;
            // 0x50b3c8: 0x260300b4  addiu       $v1, $s0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B3ECu;
            goto label_50b3ec;
        }
    }
    ctx->pc = 0x50B3CCu;
    // 0x50b3cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b3d0: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x50b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
    // 0x50b3d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B3D4u;
    {
        const bool branch_taken_0x50b3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B3D4u;
            // 0x50b3d8: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b3d4) {
            ctx->pc = 0x50B3E8u;
            goto label_50b3e8;
        }
    }
    ctx->pc = 0x50B3DCu;
    // 0x50b3dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b3e0: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b3e4: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x50b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
label_50b3e8:
    // 0x50b3e8: 0x260300b4  addiu       $v1, $s0, 0xB4
    ctx->pc = 0x50b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_50b3ec:
    // 0x50b3ec: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x50B3ECu;
    {
        const bool branch_taken_0x50b3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b3ec) {
            ctx->pc = 0x50B3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B3ECu;
            // 0x50b3f0: 0x260300b0  addiu       $v1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B414u;
            goto label_50b414;
        }
    }
    ctx->pc = 0x50B3F4u;
    // 0x50b3f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b3f8: 0x24425590  addiu       $v0, $v0, 0x5590
    ctx->pc = 0x50b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
    // 0x50b3fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B3FCu;
    {
        const bool branch_taken_0x50b3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B3FCu;
            // 0x50b400: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b3fc) {
            ctx->pc = 0x50B410u;
            goto label_50b410;
        }
    }
    ctx->pc = 0x50B404u;
    // 0x50b404: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b408: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b40c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x50b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_50b410:
    // 0x50b410: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x50b410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_50b414:
    // 0x50b414: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x50B414u;
    {
        const bool branch_taken_0x50b414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b414) {
            ctx->pc = 0x50B418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B414u;
            // 0x50b418: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B43Cu;
            goto label_50b43c;
        }
    }
    ctx->pc = 0x50B41Cu;
    // 0x50b41c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b420: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x50b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
    // 0x50b424: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B424u;
    {
        const bool branch_taken_0x50b424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B424u;
            // 0x50b428: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b424) {
            ctx->pc = 0x50B438u;
            goto label_50b438;
        }
    }
    ctx->pc = 0x50B42Cu;
    // 0x50b42c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b430: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b434: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x50b434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_50b438:
    // 0x50b438: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x50b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_50b43c:
    // 0x50b43c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x50B43Cu;
    {
        const bool branch_taken_0x50b43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b43c) {
            ctx->pc = 0x50B440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B43Cu;
            // 0x50b440: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B454u;
            goto label_50b454;
        }
    }
    ctx->pc = 0x50B444u;
    // 0x50b444: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b448: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x50b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
    // 0x50b44c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x50b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x50b450: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_50b454:
    // 0x50b454: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b458: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B458u;
    {
        const bool branch_taken_0x50b458 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50b458) {
            ctx->pc = 0x50B468u;
            goto label_50b468;
        }
    }
    ctx->pc = 0x50B460u;
    // 0x50b460: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B460u;
    SET_GPR_U32(ctx, 31, 0x50B468u);
    ctx->pc = 0x50B464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B460u;
            // 0x50b464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B468u; }
        if (ctx->pc != 0x50B468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B468u; }
        if (ctx->pc != 0x50B468u) { return; }
    }
    ctx->pc = 0x50B468u;
label_50b468:
    // 0x50b468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b46c:
    // 0x50b46c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b474: 0x3e00008  jr          $ra
    ctx->pc = 0x50B474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B474u;
            // 0x50b478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B47Cu;
    // 0x50b47c: 0x0  nop
    ctx->pc = 0x50b47cu;
    // NOP
}
