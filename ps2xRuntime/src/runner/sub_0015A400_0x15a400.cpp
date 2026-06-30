#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A400
// Address: 0x15a400 - 0x15a590
void sub_0015A400_0x15a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A400_0x15a400");
#endif

    switch (ctx->pc) {
        case 0x15a4e4u: goto label_15a4e4;
        default: break;
    }

    ctx->pc = 0x15a400u;

    // 0x15a400: 0x94870008  lhu         $a3, 0x8($a0)
    ctx->pc = 0x15a400u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15a404: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x15a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x15a408: 0x9485000a  lhu         $a1, 0xA($a0)
    ctx->pc = 0x15a408u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x15a40c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15a40cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a410: 0x9488000c  lhu         $t0, 0xC($a0)
    ctx->pc = 0x15a410u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15a414: 0x9486000e  lhu         $a2, 0xE($a0)
    ctx->pc = 0x15a414u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x15a418: 0x30e3fe00  andi        $v1, $a3, 0xFE00
    ctx->pc = 0x15a418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65024);
    // 0x15a41c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15A41Cu;
    {
        const bool branch_taken_0x15a41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15A420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A41Cu;
            // 0x15a420: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a41c) {
            ctx->pc = 0x15A48Cu;
            goto label_15a48c;
        }
    }
    ctx->pc = 0x15A424u;
    // 0x15a424: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x15a424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x15a428: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15A428u;
    {
        const bool branch_taken_0x15a428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a428) {
            ctx->pc = 0x15A42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A428u;
            // 0x15a42c: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A430u;
    // 0x15a430: 0x24026a00  addiu       $v0, $zero, 0x6A00
    ctx->pc = 0x15a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x15a434: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15A434u;
    {
        const bool branch_taken_0x15a434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a434) {
            ctx->pc = 0x15A480u;
            goto label_15a480;
        }
    }
    ctx->pc = 0x15A43Cu;
    // 0x15a43c: 0x24026400  addiu       $v0, $zero, 0x6400
    ctx->pc = 0x15a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    // 0x15a440: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15A440u;
    {
        const bool branch_taken_0x15a440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a440) {
            ctx->pc = 0x15A480u;
            goto label_15a480;
        }
    }
    ctx->pc = 0x15A448u;
    // 0x15a448: 0x24026800  addiu       $v0, $zero, 0x6800
    ctx->pc = 0x15a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x15a44c: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15A44Cu;
    {
        const bool branch_taken_0x15a44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a44c) {
            ctx->pc = 0x15A450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A44Cu;
            // 0x15a450: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A454u;
    // 0x15a454: 0x24026600  addiu       $v0, $zero, 0x6600
    ctx->pc = 0x15a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x15a458: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A458u;
    {
        const bool branch_taken_0x15a458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a458) {
            ctx->pc = 0x15A474u;
            goto label_15a474;
        }
    }
    ctx->pc = 0x15A460u;
    // 0x15a460: 0x24026200  addiu       $v0, $zero, 0x6200
    ctx->pc = 0x15a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x15a464: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A464u;
    {
        const bool branch_taken_0x15a464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a464) {
            ctx->pc = 0x15A474u;
            goto label_15a474;
        }
    }
    ctx->pc = 0x15A46Cu;
    // 0x15a46c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15A46Cu;
    {
        const bool branch_taken_0x15a46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a46c) {
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A474u;
label_15a474:
    // 0x15a474: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x15a474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a478: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15A478u;
    {
        const bool branch_taken_0x15a478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a478) {
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A480u;
label_15a480:
    // 0x15a480: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x15a480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15a484: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15A484u;
    {
        const bool branch_taken_0x15a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a484) {
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A48Cu;
label_15a48c:
    // 0x15a48c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x15a48cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15a490: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15a494: 0x50e20007  beql        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A494u;
    {
        const bool branch_taken_0x15a494 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a494) {
            ctx->pc = 0x15A498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A494u;
            // 0x15a498: 0x240a0018  addiu       $t2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A49Cu;
    // 0x15a49c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15a4a0: 0x50e20004  beql        $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A4A0u;
    {
        const bool branch_taken_0x15a4a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a4a0) {
            ctx->pc = 0x15A4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4A0u;
            // 0x15a4a4: 0x240a0020  addiu       $t2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A4A8u;
    // 0x15a4a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15a4ac: 0x50e20001  beql        $a3, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x15A4ACu;
    {
        const bool branch_taken_0x15a4ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a4ac) {
            ctx->pc = 0x15A4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4ACu;
            // 0x15a4b0: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A4B4u;
label_15a4b4:
    // 0x15a4b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15a4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4b8: 0x18a00023  blez        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x15A4B8u;
    {
        const bool branch_taken_0x15a4b8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x15A4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A4B8u;
            // 0x15a4bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4b8) {
            ctx->pc = 0x15A548u;
            goto label_15a548;
        }
    }
    ctx->pc = 0x15A4C0u;
    // 0x15a4c0: 0x1064818  mult        $t1, $t0, $a2
    ctx->pc = 0x15a4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x15a4c4: 0x1494818  mult        $t1, $t2, $t1
    ctx->pc = 0x15a4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x15a4c8: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x15a4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x15a4cc: 0x948c2  srl         $t1, $t1, 3
    ctx->pc = 0x15a4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
    // 0x15a4d0: 0x3c0a0063  lui         $t2, 0x63
    ctx->pc = 0x15a4d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)99 << 16));
    // 0x15a4d4: 0x2529000f  addiu       $t1, $t1, 0xF
    ctx->pc = 0x15a4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x15a4d8: 0x254a2310  addiu       $t2, $t2, 0x2310
    ctx->pc = 0x15a4d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8976));
    // 0x15a4dc: 0x1285824  and         $t3, $t1, $t0
    ctx->pc = 0x15a4dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x15a4e0: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x15a4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
label_15a4e4:
    // 0x15a4e4: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x15a4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x15a4e8: 0x161082a  slt         $at, $t3, $at
    ctx->pc = 0x15a4e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15a4ec: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x15A4ECu;
    {
        const bool branch_taken_0x15a4ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a4ec) {
            ctx->pc = 0x15A530u;
            goto label_15a530;
        }
    }
    ctx->pc = 0x15A4F4u;
    // 0x15a4f4: 0x9488001a  lhu         $t0, 0x1A($a0)
    ctx->pc = 0x15a4f4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x15a4f8: 0x845bc  dsll32      $t0, $t0, 22
    ctx->pc = 0x15a4f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 22));
    // 0x15a4fc: 0x846be  dsrl32      $t0, $t0, 26
    ctx->pc = 0x15a4fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 26));
    // 0x15a500: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x15a500u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x15a504: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x15a504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x15a508: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x15a508u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x15a50c: 0xc8001b  divu        $zero, $a2, $t0
    ctx->pc = 0x15a50cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x15a510: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x15a510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x15a514: 0x0  nop
    ctx->pc = 0x15a514u;
    // NOP
    // 0x15a518: 0x4812  mflo        $t1
    ctx->pc = 0x15a518u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x15a51c: 0xc84024  and         $t0, $a2, $t0
    ctx->pc = 0x15a51cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x15a520: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A520u;
    {
        const bool branch_taken_0x15a520 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A520u;
            // 0x15a524: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a520) {
            ctx->pc = 0x15A538u;
            goto label_15a538;
        }
    }
    ctx->pc = 0x15A528u;
    // 0x15a528: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A528u;
    {
        const bool branch_taken_0x15a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A528u;
            // 0x15a52c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a528) {
            ctx->pc = 0x15A538u;
            goto label_15a538;
        }
    }
    ctx->pc = 0x15A530u;
label_15a530:
    // 0x15a530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15a534: 0x0  nop
    ctx->pc = 0x15a534u;
    // NOP
label_15a538:
    // 0x15a538: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15a538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15a53c: 0xe5402a  slt         $t0, $a3, $a1
    ctx->pc = 0x15a53cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15a540: 0x5500ffe8  bnel        $t0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x15A540u;
    {
        const bool branch_taken_0x15a540 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a540) {
            ctx->pc = 0x15A544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A540u;
            // 0x15a544: 0x3c010007  lui         $at, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A4E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15a4e4;
        }
    }
    ctx->pc = 0x15A548u;
label_15a548:
    // 0x15a548: 0x24046c00  addiu       $a0, $zero, 0x6C00
    ctx->pc = 0x15a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x15a54c: 0x5064000d  beql        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x15A54Cu;
    {
        const bool branch_taken_0x15a54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a54c) {
            ctx->pc = 0x15A550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A54Cu;
            // 0x15a550: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A584u;
            goto label_15a584;
        }
    }
    ctx->pc = 0x15A554u;
    // 0x15a554: 0x24046a00  addiu       $a0, $zero, 0x6A00
    ctx->pc = 0x15a554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x15a558: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A558u;
    {
        const bool branch_taken_0x15a558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a558) {
            ctx->pc = 0x15A580u;
            goto label_15a580;
        }
    }
    ctx->pc = 0x15A560u;
    // 0x15a560: 0x24046800  addiu       $a0, $zero, 0x6800
    ctx->pc = 0x15a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x15a564: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A564u;
    {
        const bool branch_taken_0x15a564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a564) {
            ctx->pc = 0x15A580u;
            goto label_15a580;
        }
    }
    ctx->pc = 0x15A56Cu;
    // 0x15a56c: 0x24046600  addiu       $a0, $zero, 0x6600
    ctx->pc = 0x15a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x15a570: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A570u;
    {
        const bool branch_taken_0x15a570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15a570) {
            ctx->pc = 0x15A580u;
            goto label_15a580;
        }
    }
    ctx->pc = 0x15A578u;
    // 0x15a578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A578u;
    {
        const bool branch_taken_0x15a578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a578) {
            ctx->pc = 0x15A584u;
            goto label_15a584;
        }
    }
    ctx->pc = 0x15A580u;
label_15a580:
    // 0x15a580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15a584:
    // 0x15a584: 0x3e00008  jr          $ra
    ctx->pc = 0x15A584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A58Cu;
    // 0x15a58c: 0x0  nop
    ctx->pc = 0x15a58cu;
    // NOP
}
