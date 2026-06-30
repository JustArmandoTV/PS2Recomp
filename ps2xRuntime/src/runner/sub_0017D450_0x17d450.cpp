#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D450
// Address: 0x17d450 - 0x17d578
void sub_0017D450_0x17d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D450_0x17d450");
#endif

    switch (ctx->pc) {
        case 0x17d508u: goto label_17d508;
        case 0x17d518u: goto label_17d518;
        case 0x17d528u: goto label_17d528;
        case 0x17d538u: goto label_17d538;
        case 0x17d548u: goto label_17d548;
        case 0x17d558u: goto label_17d558;
        default: break;
    }

    ctx->pc = 0x17d450u;

label_17d450:
    // 0x17d450: 0x3e00008  jr          $ra
    ctx->pc = 0x17D450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D450u;
            // 0x17d454: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D458u;
    // 0x17d458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d45c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17d45cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d464: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x17D464u;
    {
        const bool branch_taken_0x17d464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D464u;
            // 0x17d468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d464) {
            ctx->pc = 0x17D568u;
            goto label_17d568;
        }
    }
    ctx->pc = 0x17D46Cu;
    // 0x17d46c: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x17d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x17d470: 0x10a2002b  beq         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17D470u;
    {
        const bool branch_taken_0x17d470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D470u;
            // 0x17d474: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d470) {
            ctx->pc = 0x17D520u;
            goto label_17d520;
        }
    }
    ctx->pc = 0x17D478u;
    // 0x17d478: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17D478u;
    {
        const bool branch_taken_0x17d478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D478u;
            // 0x17d47c: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d478) {
            ctx->pc = 0x17D4C0u;
            goto label_17d4c0;
        }
    }
    ctx->pc = 0x17D480u;
    // 0x17d480: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x17d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x17d484: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17D484u;
    {
        const bool branch_taken_0x17d484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D484u;
            // 0x17d488: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d484) {
            ctx->pc = 0x17D510u;
            goto label_17d510;
        }
    }
    ctx->pc = 0x17D48Cu;
    // 0x17d48c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D48Cu;
    {
        const bool branch_taken_0x17d48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D48Cu;
            // 0x17d490: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d48c) {
            ctx->pc = 0x17D4A8u;
            goto label_17d4a8;
        }
    }
    ctx->pc = 0x17D494u;
    // 0x17d494: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x17d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x17d498: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17D498u;
    {
        const bool branch_taken_0x17d498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D498u;
            // 0x17d49c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d498) {
            ctx->pc = 0x17D500u;
            goto label_17d500;
        }
    }
    ctx->pc = 0x17D4A0u;
    // 0x17d4a0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x17D4A0u;
    {
        const bool branch_taken_0x17d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4A0u;
            // 0x17d4a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4a0) {
            ctx->pc = 0x17D56Cu;
            goto label_17d56c;
        }
    }
    ctx->pc = 0x17D4A8u;
label_17d4a8:
    // 0x17d4a8: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17D4A8u;
    {
        const bool branch_taken_0x17d4a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4A8u;
            // 0x17d4ac: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4a8) {
            ctx->pc = 0x17D520u;
            goto label_17d520;
        }
    }
    ctx->pc = 0x17D4B0u;
    // 0x17d4b0: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17D4B0u;
    {
        const bool branch_taken_0x17d4b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4B0u;
            // 0x17d4b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4b0) {
            ctx->pc = 0x17D530u;
            goto label_17d530;
        }
    }
    ctx->pc = 0x17D4B8u;
    // 0x17d4b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x17D4B8u;
    {
        const bool branch_taken_0x17d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4B8u;
            // 0x17d4bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4b8) {
            ctx->pc = 0x17D56Cu;
            goto label_17d56c;
        }
    }
    ctx->pc = 0x17D4C0u;
label_17d4c0:
    // 0x17d4c0: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17D4C0u;
    {
        const bool branch_taken_0x17d4c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4C0u;
            // 0x17d4c4: 0x28a2012c  slti        $v0, $a1, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4c0) {
            ctx->pc = 0x17D560u;
            goto label_17d560;
        }
    }
    ctx->pc = 0x17D4C8u;
    // 0x17d4c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D4C8u;
    {
        const bool branch_taken_0x17d4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4C8u;
            // 0x17d4cc: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4c8) {
            ctx->pc = 0x17D4E8u;
            goto label_17d4e8;
        }
    }
    ctx->pc = 0x17D4D0u;
    // 0x17d4d0: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x17d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x17d4d4: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17D4D4u;
    {
        const bool branch_taken_0x17d4d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4D4u;
            // 0x17d4d8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4d4) {
            ctx->pc = 0x17D530u;
            goto label_17d530;
        }
    }
    ctx->pc = 0x17D4DCu;
    // 0x17d4dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17D4DCu;
    {
        const bool branch_taken_0x17d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4DCu;
            // 0x17d4e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4dc) {
            ctx->pc = 0x17D56Cu;
            goto label_17d56c;
        }
    }
    ctx->pc = 0x17D4E4u;
    // 0x17d4e4: 0x0  nop
    ctx->pc = 0x17d4e4u;
    // NOP
label_17d4e8:
    // 0x17d4e8: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17D4E8u;
    {
        const bool branch_taken_0x17d4e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4E8u;
            // 0x17d4ec: 0x2402012e  addiu       $v0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4e8) {
            ctx->pc = 0x17D540u;
            goto label_17d540;
        }
    }
    ctx->pc = 0x17D4F0u;
    // 0x17d4f0: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D4F0u;
    {
        const bool branch_taken_0x17d4f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4F0u;
            // 0x17d4f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4f0) {
            ctx->pc = 0x17D550u;
            goto label_17d550;
        }
    }
    ctx->pc = 0x17D4F8u;
    // 0x17d4f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17D4F8u;
    {
        const bool branch_taken_0x17d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4F8u;
            // 0x17d4fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4f8) {
            ctx->pc = 0x17D56Cu;
            goto label_17d56c;
        }
    }
    ctx->pc = 0x17D500u;
label_17d500:
    // 0x17d500: 0xc05f4fe  jal         func_17D3F8
    ctx->pc = 0x17D500u;
    SET_GPR_U32(ctx, 31, 0x17D508u);
    ctx->pc = 0x17D3F8u;
    if (runtime->hasFunction(0x17D3F8u)) {
        auto targetFn = runtime->lookupFunction(0x17D3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D508u; }
        if (ctx->pc != 0x17D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D3F8_0x17d3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D508u; }
        if (ctx->pc != 0x17D508u) { return; }
    }
    ctx->pc = 0x17D508u;
label_17d508:
    // 0x17d508: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17D508u;
    {
        const bool branch_taken_0x17d508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D508u;
            // 0x17d50c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d508) {
            ctx->pc = 0x17D564u;
            goto label_17d564;
        }
    }
    ctx->pc = 0x17D510u;
label_17d510:
    // 0x17d510: 0xc05f502  jal         func_17D408
    ctx->pc = 0x17D510u;
    SET_GPR_U32(ctx, 31, 0x17D518u);
    ctx->pc = 0x17D408u;
    if (runtime->hasFunction(0x17D408u)) {
        auto targetFn = runtime->lookupFunction(0x17D408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D518u; }
        if (ctx->pc != 0x17D518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D408_0x17d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D518u; }
        if (ctx->pc != 0x17D518u) { return; }
    }
    ctx->pc = 0x17D518u;
label_17d518:
    // 0x17d518: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17D518u;
    {
        const bool branch_taken_0x17d518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D518u;
            // 0x17d51c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d518) {
            ctx->pc = 0x17D564u;
            goto label_17d564;
        }
    }
    ctx->pc = 0x17D520u;
label_17d520:
    // 0x17d520: 0xc05f50a  jal         func_17D428
    ctx->pc = 0x17D520u;
    SET_GPR_U32(ctx, 31, 0x17D528u);
    ctx->pc = 0x17D428u;
    if (runtime->hasFunction(0x17D428u)) {
        auto targetFn = runtime->lookupFunction(0x17D428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D528u; }
        if (ctx->pc != 0x17D528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D428_0x17d428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D528u; }
        if (ctx->pc != 0x17D528u) { return; }
    }
    ctx->pc = 0x17D528u;
label_17d528:
    // 0x17d528: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17D528u;
    {
        const bool branch_taken_0x17d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D528u;
            // 0x17d52c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d528) {
            ctx->pc = 0x17D564u;
            goto label_17d564;
        }
    }
    ctx->pc = 0x17D530u;
label_17d530:
    // 0x17d530: 0xc05f50c  jal         func_17D430
    ctx->pc = 0x17D530u;
    SET_GPR_U32(ctx, 31, 0x17D538u);
    ctx->pc = 0x17D430u;
    if (runtime->hasFunction(0x17D430u)) {
        auto targetFn = runtime->lookupFunction(0x17D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D538u; }
        if (ctx->pc != 0x17D538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D430_0x17d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D538u; }
        if (ctx->pc != 0x17D538u) { return; }
    }
    ctx->pc = 0x17D538u;
label_17d538:
    // 0x17d538: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17D538u;
    {
        const bool branch_taken_0x17d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D538u;
            // 0x17d53c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d538) {
            ctx->pc = 0x17D564u;
            goto label_17d564;
        }
    }
    ctx->pc = 0x17D540u;
label_17d540:
    // 0x17d540: 0xc05f512  jal         func_17D448
    ctx->pc = 0x17D540u;
    SET_GPR_U32(ctx, 31, 0x17D548u);
    ctx->pc = 0x17D448u;
    if (runtime->hasFunction(0x17D448u)) {
        auto targetFn = runtime->lookupFunction(0x17D448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D548u; }
        if (ctx->pc != 0x17D548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D448_0x17d448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D548u; }
        if (ctx->pc != 0x17D548u) { return; }
    }
    ctx->pc = 0x17D548u;
label_17d548:
    // 0x17d548: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17D548u;
    {
        const bool branch_taken_0x17d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D548u;
            // 0x17d54c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d548) {
            ctx->pc = 0x17D564u;
            goto label_17d564;
        }
    }
    ctx->pc = 0x17D550u;
label_17d550:
    // 0x17d550: 0xc05f514  jal         func_17D450
    ctx->pc = 0x17D550u;
    SET_GPR_U32(ctx, 31, 0x17D558u);
    ctx->pc = 0x17D450u;
    goto label_17d450;
    ctx->pc = 0x17D558u;
label_17d558:
    // 0x17d558: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17D558u;
    {
        const bool branch_taken_0x17d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D558u;
            // 0x17d55c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d558) {
            ctx->pc = 0x17D564u;
            goto label_17d564;
        }
    }
    ctx->pc = 0x17D560u;
label_17d560:
    // 0x17d560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d564:
    // 0x17d564: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17d564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17d568:
    // 0x17d568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d56c:
    // 0x17d56c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D56Cu;
            // 0x17d570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D574u;
    // 0x17d574: 0x0  nop
    ctx->pc = 0x17d574u;
    // NOP
}
