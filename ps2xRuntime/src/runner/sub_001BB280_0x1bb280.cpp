#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB280
// Address: 0x1bb280 - 0x1bb4e8
void sub_001BB280_0x1bb280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB280_0x1bb280");
#endif

    switch (ctx->pc) {
        case 0x1bb2b8u: goto label_1bb2b8;
        case 0x1bb2c8u: goto label_1bb2c8;
        case 0x1bb310u: goto label_1bb310;
        case 0x1bb320u: goto label_1bb320;
        case 0x1bb368u: goto label_1bb368;
        case 0x1bb378u: goto label_1bb378;
        case 0x1bb3c0u: goto label_1bb3c0;
        case 0x1bb3d0u: goto label_1bb3d0;
        case 0x1bb418u: goto label_1bb418;
        case 0x1bb428u: goto label_1bb428;
        case 0x1bb470u: goto label_1bb470;
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb4c8u: goto label_1bb4c8;
        case 0x1bb4d8u: goto label_1bb4d8;
        default: break;
    }

    ctx->pc = 0x1bb280u;

    // 0x1bb280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb284: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb28c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb290: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb294: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB294u;
    {
        const bool branch_taken_0x1bb294 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB294u;
            // 0x1bb298: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb294) {
            ctx->pc = 0x1BB2B0u;
            goto label_1bb2b0;
        }
    }
    ctx->pc = 0x1BB29Cu;
    // 0x1bb29c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb2a0: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB2A0u;
    {
        const bool branch_taken_0x1bb2a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2A0u;
            // 0x1bb2a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2a0) {
            ctx->pc = 0x1BB2C0u;
            goto label_1bb2c0;
        }
    }
    ctx->pc = 0x1BB2A8u;
    // 0x1bb2a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB2A8u;
    {
        const bool branch_taken_0x1bb2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2A8u;
            // 0x1bb2ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2a8) {
            ctx->pc = 0x1BB2CCu;
            goto label_1bb2cc;
        }
    }
    ctx->pc = 0x1BB2B0u;
label_1bb2b0:
    // 0x1bb2b0: 0xc06f03e  jal         func_1BC0F8
    ctx->pc = 0x1BB2B0u;
    SET_GPR_U32(ctx, 31, 0x1BB2B8u);
    ctx->pc = 0x1BC0F8u;
    if (runtime->hasFunction(0x1BC0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2B8u; }
        if (ctx->pc != 0x1BB2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC0F8_0x1bc0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2B8u; }
        if (ctx->pc != 0x1BB2B8u) { return; }
    }
    ctx->pc = 0x1BB2B8u;
label_1bb2b8:
    // 0x1bb2b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB2B8u;
    {
        const bool branch_taken_0x1bb2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2B8u;
            // 0x1bb2bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2b8) {
            ctx->pc = 0x1BB2CCu;
            goto label_1bb2cc;
        }
    }
    ctx->pc = 0x1BB2C0u;
label_1bb2c0:
    // 0x1bb2c0: 0xc06f430  jal         func_1BD0C0
    ctx->pc = 0x1BB2C0u;
    SET_GPR_U32(ctx, 31, 0x1BB2C8u);
    ctx->pc = 0x1BB2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2C0u;
            // 0x1bb2c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD0C0u;
    if (runtime->hasFunction(0x1BD0C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BD0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2C8u; }
        if (ctx->pc != 0x1BB2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD0C0_0x1bd0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2C8u; }
        if (ctx->pc != 0x1BB2C8u) { return; }
    }
    ctx->pc = 0x1BB2C8u;
label_1bb2c8:
    // 0x1bb2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb2cc:
    // 0x1bb2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2CCu;
            // 0x1bb2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB2D4u;
    // 0x1bb2d4: 0x0  nop
    ctx->pc = 0x1bb2d4u;
    // NOP
    // 0x1bb2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb2dc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb2e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb2e4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb2e8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb2ec: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB2ECu;
    {
        const bool branch_taken_0x1bb2ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2ECu;
            // 0x1bb2f0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2ec) {
            ctx->pc = 0x1BB308u;
            goto label_1bb308;
        }
    }
    ctx->pc = 0x1BB2F4u;
    // 0x1bb2f4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb2f8: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB2F8u;
    {
        const bool branch_taken_0x1bb2f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2F8u;
            // 0x1bb2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2f8) {
            ctx->pc = 0x1BB318u;
            goto label_1bb318;
        }
    }
    ctx->pc = 0x1BB300u;
    // 0x1bb300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB300u;
    {
        const bool branch_taken_0x1bb300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB300u;
            // 0x1bb304: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb300) {
            ctx->pc = 0x1BB324u;
            goto label_1bb324;
        }
    }
    ctx->pc = 0x1BB308u;
label_1bb308:
    // 0x1bb308: 0xc06f04e  jal         func_1BC138
    ctx->pc = 0x1BB308u;
    SET_GPR_U32(ctx, 31, 0x1BB310u);
    ctx->pc = 0x1BC138u;
    if (runtime->hasFunction(0x1BC138u)) {
        auto targetFn = runtime->lookupFunction(0x1BC138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB310u; }
        if (ctx->pc != 0x1BB310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC138_0x1bc138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB310u; }
        if (ctx->pc != 0x1BB310u) { return; }
    }
    ctx->pc = 0x1BB310u;
label_1bb310:
    // 0x1bb310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB310u;
    {
        const bool branch_taken_0x1bb310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB310u;
            // 0x1bb314: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb310) {
            ctx->pc = 0x1BB324u;
            goto label_1bb324;
        }
    }
    ctx->pc = 0x1BB318u;
label_1bb318:
    // 0x1bb318: 0xc06f440  jal         func_1BD100
    ctx->pc = 0x1BB318u;
    SET_GPR_U32(ctx, 31, 0x1BB320u);
    ctx->pc = 0x1BB31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB318u;
            // 0x1bb31c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD100u;
    if (runtime->hasFunction(0x1BD100u)) {
        auto targetFn = runtime->lookupFunction(0x1BD100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB320u; }
        if (ctx->pc != 0x1BB320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD100_0x1bd100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB320u; }
        if (ctx->pc != 0x1BB320u) { return; }
    }
    ctx->pc = 0x1BB320u;
label_1bb320:
    // 0x1bb320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb324:
    // 0x1bb324: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB324u;
            // 0x1bb328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB32Cu;
    // 0x1bb32c: 0x0  nop
    ctx->pc = 0x1bb32cu;
    // NOP
    // 0x1bb330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb334: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb33c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb340: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb344: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB344u;
    {
        const bool branch_taken_0x1bb344 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB344u;
            // 0x1bb348: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb344) {
            ctx->pc = 0x1BB360u;
            goto label_1bb360;
        }
    }
    ctx->pc = 0x1BB34Cu;
    // 0x1bb34c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb350: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB350u;
    {
        const bool branch_taken_0x1bb350 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB350u;
            // 0x1bb354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb350) {
            ctx->pc = 0x1BB370u;
            goto label_1bb370;
        }
    }
    ctx->pc = 0x1BB358u;
    // 0x1bb358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB358u;
    {
        const bool branch_taken_0x1bb358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB358u;
            // 0x1bb35c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb358) {
            ctx->pc = 0x1BB37Cu;
            goto label_1bb37c;
        }
    }
    ctx->pc = 0x1BB360u;
label_1bb360:
    // 0x1bb360: 0xc06f05e  jal         func_1BC178
    ctx->pc = 0x1BB360u;
    SET_GPR_U32(ctx, 31, 0x1BB368u);
    ctx->pc = 0x1BC178u;
    if (runtime->hasFunction(0x1BC178u)) {
        auto targetFn = runtime->lookupFunction(0x1BC178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB368u; }
        if (ctx->pc != 0x1BB368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC178_0x1bc178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB368u; }
        if (ctx->pc != 0x1BB368u) { return; }
    }
    ctx->pc = 0x1BB368u;
label_1bb368:
    // 0x1bb368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB368u;
    {
        const bool branch_taken_0x1bb368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB368u;
            // 0x1bb36c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb368) {
            ctx->pc = 0x1BB37Cu;
            goto label_1bb37c;
        }
    }
    ctx->pc = 0x1BB370u;
label_1bb370:
    // 0x1bb370: 0xc06f450  jal         func_1BD140
    ctx->pc = 0x1BB370u;
    SET_GPR_U32(ctx, 31, 0x1BB378u);
    ctx->pc = 0x1BB374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB370u;
            // 0x1bb374: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD140u;
    if (runtime->hasFunction(0x1BD140u)) {
        auto targetFn = runtime->lookupFunction(0x1BD140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB378u; }
        if (ctx->pc != 0x1BB378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD140_0x1bd140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB378u; }
        if (ctx->pc != 0x1BB378u) { return; }
    }
    ctx->pc = 0x1BB378u;
label_1bb378:
    // 0x1bb378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb37c:
    // 0x1bb37c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB37Cu;
            // 0x1bb380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB384u;
    // 0x1bb384: 0x0  nop
    ctx->pc = 0x1bb384u;
    // NOP
    // 0x1bb388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb38c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb394: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb398: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb39c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB39Cu;
    {
        const bool branch_taken_0x1bb39c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB39Cu;
            // 0x1bb3a0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb39c) {
            ctx->pc = 0x1BB3B8u;
            goto label_1bb3b8;
        }
    }
    ctx->pc = 0x1BB3A4u;
    // 0x1bb3a4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb3a8: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB3A8u;
    {
        const bool branch_taken_0x1bb3a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3A8u;
            // 0x1bb3ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3a8) {
            ctx->pc = 0x1BB3C8u;
            goto label_1bb3c8;
        }
    }
    ctx->pc = 0x1BB3B0u;
    // 0x1bb3b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB3B0u;
    {
        const bool branch_taken_0x1bb3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3B0u;
            // 0x1bb3b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3b0) {
            ctx->pc = 0x1BB3D4u;
            goto label_1bb3d4;
        }
    }
    ctx->pc = 0x1BB3B8u;
label_1bb3b8:
    // 0x1bb3b8: 0xc06f070  jal         func_1BC1C0
    ctx->pc = 0x1BB3B8u;
    SET_GPR_U32(ctx, 31, 0x1BB3C0u);
    ctx->pc = 0x1BC1C0u;
    if (runtime->hasFunction(0x1BC1C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3C0u; }
        if (ctx->pc != 0x1BB3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC1C0_0x1bc1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3C0u; }
        if (ctx->pc != 0x1BB3C0u) { return; }
    }
    ctx->pc = 0x1BB3C0u;
label_1bb3c0:
    // 0x1bb3c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB3C0u;
    {
        const bool branch_taken_0x1bb3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3C0u;
            // 0x1bb3c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3c0) {
            ctx->pc = 0x1BB3D4u;
            goto label_1bb3d4;
        }
    }
    ctx->pc = 0x1BB3C8u;
label_1bb3c8:
    // 0x1bb3c8: 0xc06f462  jal         func_1BD188
    ctx->pc = 0x1BB3C8u;
    SET_GPR_U32(ctx, 31, 0x1BB3D0u);
    ctx->pc = 0x1BB3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3C8u;
            // 0x1bb3cc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD188u;
    if (runtime->hasFunction(0x1BD188u)) {
        auto targetFn = runtime->lookupFunction(0x1BD188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3D0u; }
        if (ctx->pc != 0x1BB3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD188_0x1bd188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3D0u; }
        if (ctx->pc != 0x1BB3D0u) { return; }
    }
    ctx->pc = 0x1BB3D0u;
label_1bb3d0:
    // 0x1bb3d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb3d4:
    // 0x1bb3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3D4u;
            // 0x1bb3d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB3DCu;
    // 0x1bb3dc: 0x0  nop
    ctx->pc = 0x1bb3dcu;
    // NOP
    // 0x1bb3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb3e4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb3ec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb3f0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb3f4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB3F4u;
    {
        const bool branch_taken_0x1bb3f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3F4u;
            // 0x1bb3f8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3f4) {
            ctx->pc = 0x1BB410u;
            goto label_1bb410;
        }
    }
    ctx->pc = 0x1BB3FCu;
    // 0x1bb3fc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb400: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB400u;
    {
        const bool branch_taken_0x1bb400 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB400u;
            // 0x1bb404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb400) {
            ctx->pc = 0x1BB420u;
            goto label_1bb420;
        }
    }
    ctx->pc = 0x1BB408u;
    // 0x1bb408: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB408u;
    {
        const bool branch_taken_0x1bb408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB408u;
            // 0x1bb40c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb408) {
            ctx->pc = 0x1BB42Cu;
            goto label_1bb42c;
        }
    }
    ctx->pc = 0x1BB410u;
label_1bb410:
    // 0x1bb410: 0xc06f082  jal         func_1BC208
    ctx->pc = 0x1BB410u;
    SET_GPR_U32(ctx, 31, 0x1BB418u);
    ctx->pc = 0x1BC208u;
    if (runtime->hasFunction(0x1BC208u)) {
        auto targetFn = runtime->lookupFunction(0x1BC208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB418u; }
        if (ctx->pc != 0x1BB418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC208_0x1bc208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB418u; }
        if (ctx->pc != 0x1BB418u) { return; }
    }
    ctx->pc = 0x1BB418u;
label_1bb418:
    // 0x1bb418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB418u;
    {
        const bool branch_taken_0x1bb418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB418u;
            // 0x1bb41c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb418) {
            ctx->pc = 0x1BB42Cu;
            goto label_1bb42c;
        }
    }
    ctx->pc = 0x1BB420u;
label_1bb420:
    // 0x1bb420: 0xc06f474  jal         func_1BD1D0
    ctx->pc = 0x1BB420u;
    SET_GPR_U32(ctx, 31, 0x1BB428u);
    ctx->pc = 0x1BB424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB420u;
            // 0x1bb424: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD1D0u;
    if (runtime->hasFunction(0x1BD1D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BD1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB428u; }
        if (ctx->pc != 0x1BB428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD1D0_0x1bd1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB428u; }
        if (ctx->pc != 0x1BB428u) { return; }
    }
    ctx->pc = 0x1BB428u;
label_1bb428:
    // 0x1bb428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb42c:
    // 0x1bb42c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB42Cu;
            // 0x1bb430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB434u;
    // 0x1bb434: 0x0  nop
    ctx->pc = 0x1bb434u;
    // NOP
    // 0x1bb438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb43c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb444: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb448: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb44c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB44Cu;
    {
        const bool branch_taken_0x1bb44c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB44Cu;
            // 0x1bb450: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb44c) {
            ctx->pc = 0x1BB468u;
            goto label_1bb468;
        }
    }
    ctx->pc = 0x1BB454u;
    // 0x1bb454: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb458: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB458u;
    {
        const bool branch_taken_0x1bb458 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB458u;
            // 0x1bb45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb458) {
            ctx->pc = 0x1BB478u;
            goto label_1bb478;
        }
    }
    ctx->pc = 0x1BB460u;
    // 0x1bb460: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB460u;
    {
        const bool branch_taken_0x1bb460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB460u;
            // 0x1bb464: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb460) {
            ctx->pc = 0x1BB484u;
            goto label_1bb484;
        }
    }
    ctx->pc = 0x1BB468u;
label_1bb468:
    // 0x1bb468: 0xc06f092  jal         func_1BC248
    ctx->pc = 0x1BB468u;
    SET_GPR_U32(ctx, 31, 0x1BB470u);
    ctx->pc = 0x1BC248u;
    if (runtime->hasFunction(0x1BC248u)) {
        auto targetFn = runtime->lookupFunction(0x1BC248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB470u; }
        if (ctx->pc != 0x1BB470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC248_0x1bc248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB470u; }
        if (ctx->pc != 0x1BB470u) { return; }
    }
    ctx->pc = 0x1BB470u;
label_1bb470:
    // 0x1bb470: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB470u;
    {
        const bool branch_taken_0x1bb470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB470u;
            // 0x1bb474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb470) {
            ctx->pc = 0x1BB484u;
            goto label_1bb484;
        }
    }
    ctx->pc = 0x1BB478u;
label_1bb478:
    // 0x1bb478: 0xc06f484  jal         func_1BD210
    ctx->pc = 0x1BB478u;
    SET_GPR_U32(ctx, 31, 0x1BB480u);
    ctx->pc = 0x1BB47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB478u;
            // 0x1bb47c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD210u;
    if (runtime->hasFunction(0x1BD210u)) {
        auto targetFn = runtime->lookupFunction(0x1BD210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB480u; }
        if (ctx->pc != 0x1BB480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD210_0x1bd210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB480u; }
        if (ctx->pc != 0x1BB480u) { return; }
    }
    ctx->pc = 0x1BB480u;
label_1bb480:
    // 0x1bb480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb484:
    // 0x1bb484: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB484u;
            // 0x1bb488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB48Cu;
    // 0x1bb48c: 0x0  nop
    ctx->pc = 0x1bb48cu;
    // NOP
    // 0x1bb490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb494: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb49c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb4a0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb4a4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB4A4u;
    {
        const bool branch_taken_0x1bb4a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4A4u;
            // 0x1bb4a8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4a4) {
            ctx->pc = 0x1BB4C0u;
            goto label_1bb4c0;
        }
    }
    ctx->pc = 0x1BB4ACu;
    // 0x1bb4ac: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb4b0: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB4B0u;
    {
        const bool branch_taken_0x1bb4b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4B0u;
            // 0x1bb4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4b0) {
            ctx->pc = 0x1BB4D0u;
            goto label_1bb4d0;
        }
    }
    ctx->pc = 0x1BB4B8u;
    // 0x1bb4b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB4B8u;
    {
        const bool branch_taken_0x1bb4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4B8u;
            // 0x1bb4bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4b8) {
            ctx->pc = 0x1BB4DCu;
            goto label_1bb4dc;
        }
    }
    ctx->pc = 0x1BB4C0u;
label_1bb4c0:
    // 0x1bb4c0: 0xc06f0a6  jal         func_1BC298
    ctx->pc = 0x1BB4C0u;
    SET_GPR_U32(ctx, 31, 0x1BB4C8u);
    ctx->pc = 0x1BC298u;
    if (runtime->hasFunction(0x1BC298u)) {
        auto targetFn = runtime->lookupFunction(0x1BC298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4C8u; }
        if (ctx->pc != 0x1BB4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC298_0x1bc298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4C8u; }
        if (ctx->pc != 0x1BB4C8u) { return; }
    }
    ctx->pc = 0x1BB4C8u;
label_1bb4c8:
    // 0x1bb4c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB4C8u;
    {
        const bool branch_taken_0x1bb4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4C8u;
            // 0x1bb4cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4c8) {
            ctx->pc = 0x1BB4DCu;
            goto label_1bb4dc;
        }
    }
    ctx->pc = 0x1BB4D0u;
label_1bb4d0:
    // 0x1bb4d0: 0xc06f498  jal         func_1BD260
    ctx->pc = 0x1BB4D0u;
    SET_GPR_U32(ctx, 31, 0x1BB4D8u);
    ctx->pc = 0x1BB4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4D0u;
            // 0x1bb4d4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD260u;
    if (runtime->hasFunction(0x1BD260u)) {
        auto targetFn = runtime->lookupFunction(0x1BD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4D8u; }
        if (ctx->pc != 0x1BB4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD260_0x1bd260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4D8u; }
        if (ctx->pc != 0x1BB4D8u) { return; }
    }
    ctx->pc = 0x1BB4D8u;
label_1bb4d8:
    // 0x1bb4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb4dc:
    // 0x1bb4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4DCu;
            // 0x1bb4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB4E4u;
    // 0x1bb4e4: 0x0  nop
    ctx->pc = 0x1bb4e4u;
    // NOP
}
