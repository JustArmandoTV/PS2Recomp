#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A460
// Address: 0x14a460 - 0x14a710
void sub_0014A460_0x14a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A460_0x14a460");
#endif

    switch (ctx->pc) {
        case 0x14a4ccu: goto label_14a4cc;
        case 0x14a544u: goto label_14a544;
        case 0x14a560u: goto label_14a560;
        case 0x14a594u: goto label_14a594;
        case 0x14a5b8u: goto label_14a5b8;
        case 0x14a5d8u: goto label_14a5d8;
        case 0x14a5e8u: goto label_14a5e8;
        case 0x14a600u: goto label_14a600;
        case 0x14a628u: goto label_14a628;
        case 0x14a66cu: goto label_14a66c;
        case 0x14a698u: goto label_14a698;
        case 0x14a6bcu: goto label_14a6bc;
        default: break;
    }

    ctx->pc = 0x14a460u;

    // 0x14a460: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14a460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x14a464: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x14a464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a468: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14a468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14a46c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14a46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14a470: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14a470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14a474: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x14a474u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a478: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14a478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14a47c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14a480: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14a480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14a484: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14a484u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a488: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a48c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14a48cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a494: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a49c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A49Cu;
    {
        const bool branch_taken_0x14a49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A49Cu;
            // 0x14a4a0: 0xafa700b0  sw          $a3, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a49c) {
            ctx->pc = 0x14A4ACu;
            goto label_14a4ac;
        }
    }
    ctx->pc = 0x14A4A4u;
    // 0x14a4a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A4A4u;
    {
        const bool branch_taken_0x14a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4A4u;
            // 0x14a4a8: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4a4) {
            ctx->pc = 0x14A4B4u;
            goto label_14a4b4;
        }
    }
    ctx->pc = 0x14A4ACu;
label_14a4ac:
    // 0x14a4ac: 0x3c160063  lui         $s6, 0x63
    ctx->pc = 0x14a4acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)99 << 16));
    // 0x14a4b0: 0x26d61230  addiu       $s6, $s6, 0x1230
    ctx->pc = 0x14a4b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4656));
label_14a4b4:
    // 0x14a4b4: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x14a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x14a4b8: 0x18600089  blez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x14A4B8u;
    {
        const bool branch_taken_0x14a4b8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14A4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4B8u;
            // 0x14a4bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4b8) {
            ctx->pc = 0x14A6E0u;
            goto label_14a6e0;
        }
    }
    ctx->pc = 0x14A4C0u;
    // 0x14a4c0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14a4c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4c4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x14a4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4c8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x14a4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_14a4cc:
    // 0x14a4cc: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x14a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14a4d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14a4d4: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x14a4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x14a4d8: 0x979021  addu        $s2, $a0, $s7
    ctx->pc = 0x14a4d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x14a4dc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a4e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14a4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14a4e4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x14A4E4u;
    {
        const bool branch_taken_0x14a4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4e4) {
            ctx->pc = 0x14A608u;
            goto label_14a608;
        }
    }
    ctx->pc = 0x14A4ECu;
    // 0x14a4ec: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x14a4ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x14a4f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a4f4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14A4F4u;
    {
        const bool branch_taken_0x14a4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a4f4) {
            ctx->pc = 0x14A528u;
            goto label_14a528;
        }
    }
    ctx->pc = 0x14A4FCu;
    // 0x14a4fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14a500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A500u;
    {
        const bool branch_taken_0x14a500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a500) {
            ctx->pc = 0x14A518u;
            goto label_14a518;
        }
    }
    ctx->pc = 0x14A508u;
    // 0x14a508: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14a508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a50c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14A50Cu;
    {
        const bool branch_taken_0x14a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A50Cu;
            // 0x14a510: 0xafb600a0  sw          $s6, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a50c) {
            ctx->pc = 0x14A530u;
            goto label_14a530;
        }
    }
    ctx->pc = 0x14A514u;
    // 0x14a514: 0x0  nop
    ctx->pc = 0x14a514u;
    // NOP
label_14a518:
    // 0x14a518: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x14a518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x14a51c: 0x24a51230  addiu       $a1, $a1, 0x1230
    ctx->pc = 0x14a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4656));
    // 0x14a520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A520u;
    {
        const bool branch_taken_0x14a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A520u;
            // 0x14a524: 0xafa500a0  sw          $a1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a520) {
            ctx->pc = 0x14A530u;
            goto label_14a530;
        }
    }
    ctx->pc = 0x14A528u;
label_14a528:
    // 0x14a528: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x14a528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x14a52c: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x14a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_14a530:
    // 0x14a530: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x14a530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a534: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x14a534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a538: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x14a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14a53c: 0xc04ce64  jal         func_133990
    ctx->pc = 0x14A53Cu;
    SET_GPR_U32(ctx, 31, 0x14A544u);
    ctx->pc = 0x14A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A53Cu;
            // 0x14a540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A544u; }
        if (ctx->pc != 0x14A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A544u; }
        if (ctx->pc != 0x14A544u) { return; }
    }
    ctx->pc = 0x14A544u;
label_14a544:
    // 0x14a544: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a548: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x14a548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x14a54c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A54Cu;
    {
        const bool branch_taken_0x14a54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a54c) {
            ctx->pc = 0x14A568u;
            goto label_14a568;
        }
    }
    ctx->pc = 0x14A554u;
    // 0x14a554: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x14a554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14a558: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x14A558u;
    SET_GPR_U32(ctx, 31, 0x14A560u);
    ctx->pc = 0x14A55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A558u;
            // 0x14a55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A560u; }
        if (ctx->pc != 0x14A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A560u; }
        if (ctx->pc != 0x14A560u) { return; }
    }
    ctx->pc = 0x14A560u;
label_14a560:
    // 0x14a560: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14A560u;
    {
        const bool branch_taken_0x14a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a560) {
            ctx->pc = 0x14A5D8u;
            goto label_14a5d8;
        }
    }
    ctx->pc = 0x14A568u;
label_14a568:
    // 0x14a568: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x14a568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x14a56c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a570: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14A570u;
    {
        const bool branch_taken_0x14a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a570) {
            ctx->pc = 0x14A5D8u;
            goto label_14a5d8;
        }
    }
    ctx->pc = 0x14A578u;
    // 0x14a578: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x14a578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x14a57c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A580u;
    {
        const bool branch_taken_0x14a580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a580) {
            ctx->pc = 0x14A598u;
            goto label_14a598;
        }
    }
    ctx->pc = 0x14A588u;
    // 0x14a588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a58c: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x14A58Cu;
    SET_GPR_U32(ctx, 31, 0x14A594u);
    ctx->pc = 0x14A590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A58Cu;
            // 0x14a590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A594u; }
        if (ctx->pc != 0x14A594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A594u; }
        if (ctx->pc != 0x14A594u) { return; }
    }
    ctx->pc = 0x14A594u;
label_14a594:
    // 0x14a594: 0x0  nop
    ctx->pc = 0x14a594u;
    // NOP
label_14a598:
    // 0x14a598: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a59c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x14a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x14a5a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a5a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A5A4u;
    {
        const bool branch_taken_0x14a5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a5a4) {
            ctx->pc = 0x14A5B8u;
            goto label_14a5b8;
        }
    }
    ctx->pc = 0x14A5ACu;
    // 0x14a5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5b0: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x14A5B0u;
    SET_GPR_U32(ctx, 31, 0x14A5B8u);
    ctx->pc = 0x14A5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5B0u;
            // 0x14a5b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5B8u; }
        if (ctx->pc != 0x14A5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5B8u; }
        if (ctx->pc != 0x14A5B8u) { return; }
    }
    ctx->pc = 0x14A5B8u;
label_14a5b8:
    // 0x14a5b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a5bc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x14a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x14a5c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14a5c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A5C4u;
    {
        const bool branch_taken_0x14a5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a5c4) {
            ctx->pc = 0x14A5D8u;
            goto label_14a5d8;
        }
    }
    ctx->pc = 0x14A5CCu;
    // 0x14a5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5d0: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x14A5D0u;
    SET_GPR_U32(ctx, 31, 0x14A5D8u);
    ctx->pc = 0x14A5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5D0u;
            // 0x14a5d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5D8u; }
        if (ctx->pc != 0x14A5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5D8u; }
        if (ctx->pc != 0x14A5D8u) { return; }
    }
    ctx->pc = 0x14A5D8u;
label_14a5d8:
    // 0x14a5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5e0: 0xc04cd80  jal         func_133600
    ctx->pc = 0x14A5E0u;
    SET_GPR_U32(ctx, 31, 0x14A5E8u);
    ctx->pc = 0x14A5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5E0u;
            // 0x14a5e4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5E8u; }
        if (ctx->pc != 0x14A5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5E8u; }
        if (ctx->pc != 0x14A5E8u) { return; }
    }
    ctx->pc = 0x14A5E8u;
label_14a5e8:
    // 0x14a5e8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x14a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5f0: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x14a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a5f4: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x14a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14a5f8: 0xc04ce50  jal         func_133940
    ctx->pc = 0x14A5F8u;
    SET_GPR_U32(ctx, 31, 0x14A600u);
    ctx->pc = 0x14A5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5F8u;
            // 0x14a5fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A600u; }
        if (ctx->pc != 0x14A600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A600u; }
        if (ctx->pc != 0x14A600u) { return; }
    }
    ctx->pc = 0x14A600u;
label_14a600:
    // 0x14a600: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14A600u;
    {
        const bool branch_taken_0x14a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a600) {
            ctx->pc = 0x14A6C0u;
            goto label_14a6c0;
        }
    }
    ctx->pc = 0x14A608u;
label_14a608:
    // 0x14a608: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x14a608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x14a60c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A60Cu;
    {
        const bool branch_taken_0x14a60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a60c) {
            ctx->pc = 0x14A678u;
            goto label_14a678;
        }
    }
    ctx->pc = 0x14A614u;
    // 0x14a614: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x14a614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x14a618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a61c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14a620: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14A620u;
    SET_GPR_U32(ctx, 31, 0x14A628u);
    ctx->pc = 0x14A624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A620u;
            // 0x14a624: 0x2a22821  addu        $a1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A628u; }
        if (ctx->pc != 0x14A628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A628u; }
        if (ctx->pc != 0x14A628u) { return; }
    }
    ctx->pc = 0x14A628u;
label_14a628:
    // 0x14a628: 0x86460008  lh          $a2, 0x8($s2)
    ctx->pc = 0x14a628u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14a62c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a630: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x14a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14a634: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14a634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a638: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x14a638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a63c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x14a63cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a640: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x14a640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x14a644: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x14a644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x14a648: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14a648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14a64c: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x14a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x14a650: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14a650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14a654: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x14a654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14a65c: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x14a65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a660: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14a660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14a664: 0xc04e42c  jal         func_1390B0
    ctx->pc = 0x14A664u;
    SET_GPR_U32(ctx, 31, 0x14A66Cu);
    ctx->pc = 0x14A668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A664u;
            // 0x14a668: 0x2a23021  addu        $a2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1390B0u;
    if (runtime->hasFunction(0x1390B0u)) {
        auto targetFn = runtime->lookupFunction(0x1390B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A66Cu; }
        if (ctx->pc != 0x14A66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001390B0_0x1390b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A66Cu; }
        if (ctx->pc != 0x14A66Cu) { return; }
    }
    ctx->pc = 0x14A66Cu;
label_14a66c:
    // 0x14a66c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14A66Cu;
    {
        const bool branch_taken_0x14a66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a66c) {
            ctx->pc = 0x14A6C0u;
            goto label_14a6c0;
        }
    }
    ctx->pc = 0x14A674u;
    // 0x14a674: 0x0  nop
    ctx->pc = 0x14a674u;
    // NOP
label_14a678:
    // 0x14a678: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x14a678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x14a67c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A67Cu;
    {
        const bool branch_taken_0x14a67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a67c) {
            ctx->pc = 0x14A6C0u;
            goto label_14a6c0;
        }
    }
    ctx->pc = 0x14A684u;
    // 0x14a684: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x14a688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a68c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14a690: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14A690u;
    SET_GPR_U32(ctx, 31, 0x14A698u);
    ctx->pc = 0x14A694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A690u;
            // 0x14a694: 0x2a22821  addu        $a1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A698u; }
        if (ctx->pc != 0x14A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A698u; }
        if (ctx->pc != 0x14A698u) { return; }
    }
    ctx->pc = 0x14A698u;
label_14a698:
    // 0x14a698: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14a69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14a6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6a4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x14a6a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6a8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x14a6a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6ac: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x14a6acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6b0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14a6b4: 0xc04e3d8  jal         func_138F60
    ctx->pc = 0x14A6B4u;
    SET_GPR_U32(ctx, 31, 0x14A6BCu);
    ctx->pc = 0x14A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6B4u;
            // 0x14a6b8: 0x2a22821  addu        $a1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138F60u;
    if (runtime->hasFunction(0x138F60u)) {
        auto targetFn = runtime->lookupFunction(0x138F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6BCu; }
        if (ctx->pc != 0x14A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138F60_0x138f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6BCu; }
        if (ctx->pc != 0x14A6BCu) { return; }
    }
    ctx->pc = 0x14A6BCu;
label_14a6bc:
    // 0x14a6bc: 0x0  nop
    ctx->pc = 0x14a6bcu;
    // NOP
label_14a6c0:
    // 0x14a6c0: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x14a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x14a6c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14a6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14a6c8: 0x26f70090  addiu       $s7, $s7, 0x90
    ctx->pc = 0x14a6c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x14a6cc: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x14a6d0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x14a6d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a6d4: 0x1460ff7d  bnez        $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x14A6D4u;
    {
        const bool branch_taken_0x14a6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6D4u;
            // 0x14a6d8: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6d4) {
            ctx->pc = 0x14A4CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a4cc;
        }
    }
    ctx->pc = 0x14A6DCu;
    // 0x14a6dc: 0x0  nop
    ctx->pc = 0x14a6dcu;
    // NOP
label_14a6e0:
    // 0x14a6e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14a6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14a6e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14a6e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14a6e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14a6e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a6ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14a6ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a6f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14a6f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a6f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14a6f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a6f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a6f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a6fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a708: 0x3e00008  jr          $ra
    ctx->pc = 0x14A708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A708u;
            // 0x14a70c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A710u;
}
