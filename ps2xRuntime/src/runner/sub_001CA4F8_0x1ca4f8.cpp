#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA4F8
// Address: 0x1ca4f8 - 0x1ca7d8
void sub_001CA4F8_0x1ca4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA4F8_0x1ca4f8");
#endif

    switch (ctx->pc) {
        case 0x1ca5e0u: goto label_1ca5e0;
        case 0x1ca7b0u: goto label_1ca7b0;
        default: break;
    }

    ctx->pc = 0x1ca4f8u;

    // 0x1ca4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca4fc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1ca4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1ca500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca504: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca508: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca50c: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x1ca50cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ca510: 0x3c03a520  lui         $v1, 0xA520
    ctx->pc = 0x1ca510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42272 << 16));
    // 0x1ca514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca518: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ca518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ca51c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ca51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca520: 0x12030037  beq         $s0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1CA520u;
    {
        const bool branch_taken_0x1ca520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA520u;
            // 0x1ca524: 0x2503021  addu        $a2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca520) {
            ctx->pc = 0x1CA600u;
            goto label_1ca600;
        }
    }
    ctx->pc = 0x1CA528u;
    // 0x1ca528: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1ca528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ca52c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CA52Cu;
    {
        const bool branch_taken_0x1ca52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA52Cu;
            // 0x1ca530: 0x3c02a600  lui         $v0, 0xA600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca52c) {
            ctx->pc = 0x1CA570u;
            goto label_1ca570;
        }
    }
    ctx->pc = 0x1CA534u;
    // 0x1ca534: 0x3c02a500  lui         $v0, 0xA500
    ctx->pc = 0x1ca534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42240 << 16));
    // 0x1ca538: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CA538u;
    {
        const bool branch_taken_0x1ca538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA538u;
            // 0x1ca53c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca538) {
            ctx->pc = 0x1CA5B0u;
            goto label_1ca5b0;
        }
    }
    ctx->pc = 0x1CA540u;
    // 0x1ca540: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA540u;
    {
        const bool branch_taken_0x1ca540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA540u;
            // 0x1ca544: 0x3c02a510  lui         $v0, 0xA510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca540) {
            ctx->pc = 0x1CA560u;
            goto label_1ca560;
        }
    }
    ctx->pc = 0x1CA548u;
    // 0x1ca548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca54c: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1CA54Cu;
    {
        const bool branch_taken_0x1ca54c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca54c) {
            ctx->pc = 0x1CA638u;
            goto label_1ca638;
        }
    }
    ctx->pc = 0x1CA554u;
    // 0x1ca554: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1CA554u;
    {
        const bool branch_taken_0x1ca554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA554u;
            // 0x1ca558: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca554) {
            ctx->pc = 0x1CA690u;
            goto label_1ca690;
        }
    }
    ctx->pc = 0x1CA55Cu;
    // 0x1ca55c: 0x0  nop
    ctx->pc = 0x1ca55cu;
    // NOP
label_1ca560:
    // 0x1ca560: 0x52020029  beql        $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CA560u;
    {
        const bool branch_taken_0x1ca560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca560) {
            ctx->pc = 0x1CA564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA560u;
            // 0x1ca564: 0x3222007f  andi        $v0, $s1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA608u;
            goto label_1ca608;
        }
    }
    ctx->pc = 0x1CA568u;
    // 0x1ca568: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1CA568u;
    {
        const bool branch_taken_0x1ca568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA568u;
            // 0x1ca56c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca568) {
            ctx->pc = 0x1CA690u;
            goto label_1ca690;
        }
    }
    ctx->pc = 0x1CA570u;
label_1ca570:
    // 0x1ca570: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CA570u;
    {
        const bool branch_taken_0x1ca570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA570u;
            // 0x1ca574: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca570) {
            ctx->pc = 0x1CA618u;
            goto label_1ca618;
        }
    }
    ctx->pc = 0x1CA578u;
    // 0x1ca578: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA578u;
    {
        const bool branch_taken_0x1ca578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA578u;
            // 0x1ca57c: 0x3c02a700  lui         $v0, 0xA700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca578) {
            ctx->pc = 0x1CA598u;
            goto label_1ca598;
        }
    }
    ctx->pc = 0x1CA580u;
    // 0x1ca580: 0x3c02a540  lui         $v0, 0xA540
    ctx->pc = 0x1ca580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42304 << 16));
    // 0x1ca584: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CA584u;
    {
        const bool branch_taken_0x1ca584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca584) {
            ctx->pc = 0x1CA588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA584u;
            // 0x1ca588: 0x3222007f  andi        $v0, $s1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA608u;
            goto label_1ca608;
        }
    }
    ctx->pc = 0x1CA58Cu;
    // 0x1ca58c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1CA58Cu;
    {
        const bool branch_taken_0x1ca58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA58Cu;
            // 0x1ca590: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca58c) {
            ctx->pc = 0x1CA690u;
            goto label_1ca690;
        }
    }
    ctx->pc = 0x1CA594u;
    // 0x1ca594: 0x0  nop
    ctx->pc = 0x1ca594u;
    // NOP
label_1ca598:
    // 0x1ca598: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA598u;
    {
        const bool branch_taken_0x1ca598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA598u;
            // 0x1ca59c: 0x3c02a710  lui         $v0, 0xA710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca598) {
            ctx->pc = 0x1CA600u;
            goto label_1ca600;
        }
    }
    ctx->pc = 0x1CA5A0u;
    // 0x1ca5a0: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CA5A0u;
    {
        const bool branch_taken_0x1ca5a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5A0u;
            // 0x1ca5a4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5a0) {
            ctx->pc = 0x1CA600u;
            goto label_1ca600;
        }
    }
    ctx->pc = 0x1CA5A8u;
    // 0x1ca5a8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1CA5A8u;
    {
        const bool branch_taken_0x1ca5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5A8u;
            // 0x1ca5ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5a8) {
            ctx->pc = 0x1CA694u;
            goto label_1ca694;
        }
    }
    ctx->pc = 0x1CA5B0u;
label_1ca5b0:
    // 0x1ca5b0: 0x32227f00  andi        $v0, $s1, 0x7F00
    ctx->pc = 0x1ca5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32512);
    // 0x1ca5b4: 0x3c04a570  lui         $a0, 0xA570
    ctx->pc = 0x1ca5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42352 << 16));
    // 0x1ca5b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ca5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ca5bc: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1ca5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ca5c0: 0x30c3ff00  andi        $v1, $a2, 0xFF00
    ctx->pc = 0x1ca5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1ca5c4: 0x62202  srl         $a0, $a2, 8
    ctx->pc = 0x1ca5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1ca5c8: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x1ca5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1ca5cc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ca5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ca5d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ca5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ca5d4: 0x61602  srl         $v0, $a2, 24
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1ca5d8: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x1CA5D8u;
    SET_GPR_U32(ctx, 31, 0x1CA5E0u);
    ctx->pc = 0x1CA5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5D8u;
            // 0x1ca5dc: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5E0u; }
        if (ctx->pc != 0x1CA5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5E0u; }
        if (ctx->pc != 0x1CA5E0u) { return; }
    }
    ctx->pc = 0x1CA5E0u;
label_1ca5e0:
    // 0x1ca5e0: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CA5E0u;
    {
        const bool branch_taken_0x1ca5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca5e0) {
            ctx->pc = 0x1CA5E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5E0u;
            // 0x1ca5e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA694u;
            goto label_1ca694;
        }
    }
    ctx->pc = 0x1CA5E8u;
    // 0x1ca5e8: 0x3222007f  andi        $v0, $s1, 0x7F
    ctx->pc = 0x1ca5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x1ca5ec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ca5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ca5f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ca5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ca5f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CA5F4u;
    {
        const bool branch_taken_0x1ca5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5F4u;
            // 0x1ca5f8: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5f4) {
            ctx->pc = 0x1CA650u;
            goto label_1ca650;
        }
    }
    ctx->pc = 0x1CA5FCu;
    // 0x1ca5fc: 0x0  nop
    ctx->pc = 0x1ca5fcu;
    // NOP
label_1ca600:
    // 0x1ca600: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1ca600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1ca604: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1ca604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_1ca608:
    // 0x1ca608: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ca608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ca60c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CA60Cu;
    {
        const bool branch_taken_0x1ca60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA60Cu;
            // 0x1ca610: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca60c) {
            ctx->pc = 0x1CA650u;
            goto label_1ca650;
        }
    }
    ctx->pc = 0x1CA614u;
    // 0x1ca614: 0x0  nop
    ctx->pc = 0x1ca614u;
    // NOP
label_1ca618:
    // 0x1ca618: 0x32230080  andi        $v1, $s1, 0x80
    ctx->pc = 0x1ca618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x1ca61c: 0x3222007f  andi        $v0, $s1, 0x7F
    ctx->pc = 0x1ca61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x1ca620: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ca620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ca624: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x1ca624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x1ca628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca62c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA62Cu;
    {
        const bool branch_taken_0x1ca62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA62Cu;
            // 0x1ca630: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca62c) {
            ctx->pc = 0x1CA650u;
            goto label_1ca650;
        }
    }
    ctx->pc = 0x1CA634u;
    // 0x1ca634: 0x0  nop
    ctx->pc = 0x1ca634u;
    // NOP
label_1ca638:
    // 0x1ca638: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1ca638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1ca63c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ca63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ca640: 0x90426e8c  lbu         $v0, 0x6E8C($v0)
    ctx->pc = 0x1ca640u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28300)));
    // 0x1ca644: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA644u;
    {
        const bool branch_taken_0x1ca644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA644u;
            // 0x1ca648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca644) {
            ctx->pc = 0x1CA694u;
            goto label_1ca694;
        }
    }
    ctx->pc = 0x1CA64Cu;
    // 0x1ca64c: 0x0  nop
    ctx->pc = 0x1ca64cu;
    // NOP
label_1ca650:
    // 0x1ca650: 0x30c5ff00  andi        $a1, $a2, 0xFF00
    ctx->pc = 0x1ca650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1ca654: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x1ca654u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1ca658: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ca65c: 0x62600  sll         $a0, $a2, 24
    ctx->pc = 0x1ca65cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1ca660: 0x61602  srl         $v0, $a2, 24
    ctx->pc = 0x1ca660u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1ca664: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1ca664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1ca668: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1ca668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ca66c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ca66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ca670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca674: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ca674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ca678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca67c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca67cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca680: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca684: 0x8073234  j           func_1CC8D0
    ctx->pc = 0x1CA684u;
    ctx->pc = 0x1CA688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA684u;
            // 0x1ca688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CA68Cu;
    // 0x1ca68c: 0x0  nop
    ctx->pc = 0x1ca68cu;
    // NOP
label_1ca690:
    // 0x1ca690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca694:
    // 0x1ca694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca69c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6A0u;
            // 0x1ca6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA6A8u;
    // 0x1ca6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca6ac: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1ca6acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ca6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca6b4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1ca6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1ca6b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca6bc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1ca6bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6c0: 0x8e08a70c  lw          $t0, -0x58F4($s0)
    ctx->pc = 0x1ca6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1ca6c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6c8: 0x81030ab7  lb          $v1, 0xAB7($t0)
    ctx->pc = 0x1ca6c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2743)));
    // 0x1ca6cc: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1CA6CCu;
    {
        const bool branch_taken_0x1ca6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6CCu;
            // 0x1ca6d0: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6cc) {
            ctx->pc = 0x1CA7C8u;
            goto label_1ca7c8;
        }
    }
    ctx->pc = 0x1CA6D4u;
    // 0x1ca6d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca6d8: 0x10e00037  beqz        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x1CA6D8u;
    {
        const bool branch_taken_0x1ca6d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6D8u;
            // 0x1ca6dc: 0xa1020ab7  sb          $v0, 0xAB7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6d8) {
            ctx->pc = 0x1CA7B8u;
            goto label_1ca7b8;
        }
    }
    ctx->pc = 0x1CA6E0u;
    // 0x1ca6e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ca6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca6e4: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA6E4u;
    {
        const bool branch_taken_0x1ca6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ca6e4) {
            ctx->pc = 0x1CA6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6E4u;
            // 0x1ca6e8: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA708u;
            goto label_1ca708;
        }
    }
    ctx->pc = 0x1CA6ECu;
    // 0x1ca6ec: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1ca6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ca6f0: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1ca6f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ca6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ca6f8: 0x90a56a8d  lbu         $a1, 0x6A8D($a1)
    ctx->pc = 0x1ca6f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 27277)));
    // 0x1ca6fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1CA6FCu;
    {
        const bool branch_taken_0x1ca6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6FCu;
            // 0x1ca700: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6fc) {
            ctx->pc = 0x1CA7C0u;
            goto label_1ca7c0;
        }
    }
    ctx->pc = 0x1CA704u;
    // 0x1ca704: 0x0  nop
    ctx->pc = 0x1ca704u;
    // NOP
label_1ca708:
    // 0x1ca708: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x1ca708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x1ca70c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CA70Cu;
    {
        const bool branch_taken_0x1ca70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca70c) {
            ctx->pc = 0x1CA710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA70Cu;
            // 0x1ca710: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA7C0u;
            goto label_1ca7c0;
        }
    }
    ctx->pc = 0x1CA714u;
    // 0x1ca714: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca718: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1ca71c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ca71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca720: 0x8c63c130  lw          $v1, -0x3ED0($v1)
    ctx->pc = 0x1ca720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951216)));
    // 0x1ca724: 0x600008  jr          $v1
    ctx->pc = 0x1CA724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA730u: goto label_1ca730;
            case 0x1CA750u: goto label_1ca750;
            case 0x1CA768u: goto label_1ca768;
            case 0x1CA7BCu: goto label_1ca7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA72Cu;
    // 0x1ca72c: 0x0  nop
    ctx->pc = 0x1ca72cu;
    // NOP
label_1ca730:
    // 0x1ca730: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1ca730u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca734: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ca734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca738: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x1ca738u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1ca73c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca73cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca740: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ca740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ca744: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CA744u;
    {
        const bool branch_taken_0x1ca744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA744u;
            // 0x1ca748: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca744) {
            ctx->pc = 0x1CA7A8u;
            goto label_1ca7a8;
        }
    }
    ctx->pc = 0x1CA74Cu;
    // 0x1ca74c: 0x0  nop
    ctx->pc = 0x1ca74cu;
    // NOP
label_1ca750:
    // 0x1ca750: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ca750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca754: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ca754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca758: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1ca758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca75c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca75cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca760: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA760u;
    {
        const bool branch_taken_0x1ca760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA760u;
            // 0x1ca764: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca760) {
            ctx->pc = 0x1CA7A8u;
            goto label_1ca7a8;
        }
    }
    ctx->pc = 0x1CA768u;
label_1ca768:
    // 0x1ca768: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ca768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ca76c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ca76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca770: 0x122001a  div         $zero, $t1, $v0
    ctx->pc = 0x1ca770u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ca774: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1ca774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ca778: 0x240a0064  addiu       $t2, $zero, 0x64
    ctx->pc = 0x1ca778u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ca77c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ca77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ca780: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ca780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca784: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CA784u;
    {
        const bool branch_taken_0x1ca784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca784) {
            ctx->pc = 0x1CA788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA784u;
            // 0x1ca788: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA78Cu;
            goto label_1ca78c;
        }
    }
    ctx->pc = 0x1CA78Cu;
label_1ca78c:
    // 0x1ca78c: 0x4810  mfhi        $t1
    ctx->pc = 0x1ca78cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1ca790: 0x4012  mflo        $t0
    ctx->pc = 0x1ca790u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1ca794: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1ca794u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1ca798: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x1ca798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1ca79c: 0x122001a  div         $zero, $t1, $v0
    ctx->pc = 0x1ca79cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ca7a0: 0x4812  mflo        $t1
    ctx->pc = 0x1ca7a0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x1ca7a4: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x1ca7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
label_1ca7a8:
    // 0x1ca7a8: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA7A8u;
    SET_GPR_U32(ctx, 31, 0x1CA7B0u);
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA7B0u; }
        if (ctx->pc != 0x1CA7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA7B0u; }
        if (ctx->pc != 0x1CA7B0u) { return; }
    }
    ctx->pc = 0x1CA7B0u;
label_1ca7b0:
    // 0x1ca7b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA7B0u;
    {
        const bool branch_taken_0x1ca7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7B0u;
            // 0x1ca7b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7b0) {
            ctx->pc = 0x1CA7BCu;
            goto label_1ca7bc;
        }
    }
    ctx->pc = 0x1CA7B8u;
label_1ca7b8:
    // 0x1ca7b8: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x1ca7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_1ca7bc:
    // 0x1ca7bc: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1ca7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1ca7c0:
    // 0x1ca7c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ca7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7c4: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1ca7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1ca7c8:
    // 0x1ca7c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca7c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca7cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7D0u;
            // 0x1ca7d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA7D8u;
}
