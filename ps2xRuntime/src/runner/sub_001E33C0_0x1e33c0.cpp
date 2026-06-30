#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E33C0
// Address: 0x1e33c0 - 0x1e3500
void sub_001E33C0_0x1e33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E33C0_0x1e33c0");
#endif

    ctx->pc = 0x1e33c0u;

    // 0x1e33c0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e33c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e33c4: 0x2c410037  sltiu       $at, $v0, 0x37
    ctx->pc = 0x1e33c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)55) ? 1 : 0);
    // 0x1e33c8: 0x5020004b  beql        $at, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x1E33C8u;
    {
        const bool branch_taken_0x1e33c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33c8) {
            ctx->pc = 0x1E33CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33C8u;
            // 0x1e33cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E33D0u;
    // 0x1e33d0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1e33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1e33d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e33d8: 0x2463cf60  addiu       $v1, $v1, -0x30A0
    ctx->pc = 0x1e33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954848));
    // 0x1e33dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e33dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e33e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e33e4: 0x400008  jr          $v0
    ctx->pc = 0x1E33E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E33ECu: goto label_1e33ec;
            case 0x1E33F4u: goto label_1e33f4;
            case 0x1E33FCu: goto label_1e33fc;
            case 0x1E3404u: goto label_1e3404;
            case 0x1E340Cu: goto label_1e340c;
            case 0x1E3414u: goto label_1e3414;
            case 0x1E341Cu: goto label_1e341c;
            case 0x1E3424u: goto label_1e3424;
            case 0x1E342Cu: goto label_1e342c;
            case 0x1E3434u: goto label_1e3434;
            case 0x1E343Cu: goto label_1e343c;
            case 0x1E3444u: goto label_1e3444;
            case 0x1E344Cu: goto label_1e344c;
            case 0x1E3454u: goto label_1e3454;
            case 0x1E345Cu: goto label_1e345c;
            case 0x1E3464u: goto label_1e3464;
            case 0x1E346Cu: goto label_1e346c;
            case 0x1E3474u: goto label_1e3474;
            case 0x1E347Cu: goto label_1e347c;
            case 0x1E3484u: goto label_1e3484;
            case 0x1E348Cu: goto label_1e348c;
            case 0x1E3494u: goto label_1e3494;
            case 0x1E349Cu: goto label_1e349c;
            case 0x1E34A4u: goto label_1e34a4;
            case 0x1E34ACu: goto label_1e34ac;
            case 0x1E34B4u: goto label_1e34b4;
            case 0x1E34BCu: goto label_1e34bc;
            case 0x1E34C4u: goto label_1e34c4;
            case 0x1E34CCu: goto label_1e34cc;
            case 0x1E34D4u: goto label_1e34d4;
            case 0x1E34DCu: goto label_1e34dc;
            case 0x1E34E4u: goto label_1e34e4;
            case 0x1E34ECu: goto label_1e34ec;
            case 0x1E34F4u: goto label_1e34f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E33ECu;
label_1e33ec:
    // 0x1e33ec: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1E33ECu;
    {
        const bool branch_taken_0x1e33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33ECu;
            // 0x1e33f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33ec) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E33F4u;
label_1e33f4:
    // 0x1e33f4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1E33F4u;
    {
        const bool branch_taken_0x1e33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33F4u;
            // 0x1e33f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33f4) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E33FCu;
label_1e33fc:
    // 0x1e33fc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1E33FCu;
    {
        const bool branch_taken_0x1e33fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33FCu;
            // 0x1e3400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33fc) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3404u;
label_1e3404:
    // 0x1e3404: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1E3404u;
    {
        const bool branch_taken_0x1e3404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3404u;
            // 0x1e3408: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3404) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E340Cu;
label_1e340c:
    // 0x1e340c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1E340Cu;
    {
        const bool branch_taken_0x1e340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E340Cu;
            // 0x1e3410: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e340c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3414u;
label_1e3414:
    // 0x1e3414: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1E3414u;
    {
        const bool branch_taken_0x1e3414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3414u;
            // 0x1e3418: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3414) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E341Cu;
label_1e341c:
    // 0x1e341c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1E341Cu;
    {
        const bool branch_taken_0x1e341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E341Cu;
            // 0x1e3420: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e341c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3424u;
label_1e3424:
    // 0x1e3424: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1E3424u;
    {
        const bool branch_taken_0x1e3424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3424u;
            // 0x1e3428: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3424) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E342Cu;
label_1e342c:
    // 0x1e342c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1E342Cu;
    {
        const bool branch_taken_0x1e342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E342Cu;
            // 0x1e3430: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e342c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3434u;
label_1e3434:
    // 0x1e3434: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1E3434u;
    {
        const bool branch_taken_0x1e3434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3434u;
            // 0x1e3438: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3434) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E343Cu;
label_1e343c:
    // 0x1e343c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1E343Cu;
    {
        const bool branch_taken_0x1e343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E343Cu;
            // 0x1e3440: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e343c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3444u;
label_1e3444:
    // 0x1e3444: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1E3444u;
    {
        const bool branch_taken_0x1e3444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3444u;
            // 0x1e3448: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3444) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E344Cu;
label_1e344c:
    // 0x1e344c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1E344Cu;
    {
        const bool branch_taken_0x1e344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E344Cu;
            // 0x1e3450: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e344c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3454u;
label_1e3454:
    // 0x1e3454: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E3454u;
    {
        const bool branch_taken_0x1e3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3454u;
            // 0x1e3458: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3454) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E345Cu;
label_1e345c:
    // 0x1e345c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E345Cu;
    {
        const bool branch_taken_0x1e345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E345Cu;
            // 0x1e3460: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e345c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3464u;
label_1e3464:
    // 0x1e3464: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1E3464u;
    {
        const bool branch_taken_0x1e3464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3464u;
            // 0x1e3468: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3464) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E346Cu;
label_1e346c:
    // 0x1e346c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E346Cu;
    {
        const bool branch_taken_0x1e346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E346Cu;
            // 0x1e3470: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e346c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3474u;
label_1e3474:
    // 0x1e3474: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E3474u;
    {
        const bool branch_taken_0x1e3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3474u;
            // 0x1e3478: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3474) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E347Cu;
label_1e347c:
    // 0x1e347c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1E347Cu;
    {
        const bool branch_taken_0x1e347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E347Cu;
            // 0x1e3480: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e347c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3484u;
label_1e3484:
    // 0x1e3484: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E3484u;
    {
        const bool branch_taken_0x1e3484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3484u;
            // 0x1e3488: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3484) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E348Cu;
label_1e348c:
    // 0x1e348c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E348Cu;
    {
        const bool branch_taken_0x1e348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E348Cu;
            // 0x1e3490: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e348c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E3494u;
label_1e3494:
    // 0x1e3494: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E3494u;
    {
        const bool branch_taken_0x1e3494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3494u;
            // 0x1e3498: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3494) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E349Cu;
label_1e349c:
    // 0x1e349c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E349Cu;
    {
        const bool branch_taken_0x1e349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E349Cu;
            // 0x1e34a0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e349c) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34A4u;
label_1e34a4:
    // 0x1e34a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E34A4u;
    {
        const bool branch_taken_0x1e34a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34A4u;
            // 0x1e34a8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34a4) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34ACu;
label_1e34ac:
    // 0x1e34ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E34ACu;
    {
        const bool branch_taken_0x1e34ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34ACu;
            // 0x1e34b0: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34ac) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34B4u;
label_1e34b4:
    // 0x1e34b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E34B4u;
    {
        const bool branch_taken_0x1e34b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34B4u;
            // 0x1e34b8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34b4) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34BCu;
label_1e34bc:
    // 0x1e34bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E34BCu;
    {
        const bool branch_taken_0x1e34bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34BCu;
            // 0x1e34c0: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34bc) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34C4u;
label_1e34c4:
    // 0x1e34c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E34C4u;
    {
        const bool branch_taken_0x1e34c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34C4u;
            // 0x1e34c8: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34c4) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34CCu;
label_1e34cc:
    // 0x1e34cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E34CCu;
    {
        const bool branch_taken_0x1e34cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34CCu;
            // 0x1e34d0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34cc) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34D4u;
label_1e34d4:
    // 0x1e34d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E34D4u;
    {
        const bool branch_taken_0x1e34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34D4u;
            // 0x1e34d8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34d4) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34DCu;
label_1e34dc:
    // 0x1e34dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E34DCu;
    {
        const bool branch_taken_0x1e34dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34DCu;
            // 0x1e34e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34dc) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34E4u;
label_1e34e4:
    // 0x1e34e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E34E4u;
    {
        const bool branch_taken_0x1e34e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34E4u;
            // 0x1e34e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34e4) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34ECu;
label_1e34ec:
    // 0x1e34ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E34ECu;
    {
        const bool branch_taken_0x1e34ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E34F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E34ECu;
            // 0x1e34f0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34ec) {
            ctx->pc = 0x1E34F8u;
            goto label_1e34f8;
        }
    }
    ctx->pc = 0x1E34F4u;
label_1e34f4:
    // 0x1e34f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e34f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e34f8:
    // 0x1e34f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E34F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3500u;
}
