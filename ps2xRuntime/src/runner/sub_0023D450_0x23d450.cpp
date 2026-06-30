#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D450
// Address: 0x23d450 - 0x23d990
void sub_0023D450_0x23d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D450_0x23d450");
#endif

    switch (ctx->pc) {
        case 0x23d4c8u: goto label_23d4c8;
        case 0x23d574u: goto label_23d574;
        case 0x23d6e4u: goto label_23d6e4;
        case 0x23d7b4u: goto label_23d7b4;
        case 0x23d924u: goto label_23d924;
        default: break;
    }

    ctx->pc = 0x23d450u;

    // 0x23d450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23d454: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x23d458: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23d45c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23d460: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23d460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d464: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23d464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23d468: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23d468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d46c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23d46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23d470: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23d470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d478: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x23d478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d480: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23d484: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x23d484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23d488: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23d488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x23d48c: 0x2458021  addu        $s0, $s2, $a1
    ctx->pc = 0x23d48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x23d490: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23d490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x23d494: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x23d494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23d498: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x23D498u;
    {
        const bool branch_taken_0x23d498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D498u;
            // 0x23d49c: 0xb58823  subu        $s1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d498) {
            ctx->pc = 0x23D4C8u;
            goto label_23d4c8;
        }
    }
    ctx->pc = 0x23D4A0u;
    // 0x23d4a0: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x23d4a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23d4a4: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D4A4u;
    {
        const bool branch_taken_0x23d4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d4a4) {
            ctx->pc = 0x23D4A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4A4u;
            // 0x23d4a8: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23D4CCu;
            goto label_23d4cc;
        }
    }
    ctx->pc = 0x23D4ACu;
    // 0x23d4ac: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x23d4acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d4b0: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x23d4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23d4b4: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D4B4u;
    {
        const bool branch_taken_0x23d4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d4b4) {
            ctx->pc = 0x23D4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4B4u;
            // 0x23d4b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23D4BCu;
            goto label_23d4bc;
        }
    }
    ctx->pc = 0x23D4BCu;
label_23d4bc:
    // 0x23d4bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4c0: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x23D4C0u;
    SET_GPR_U32(ctx, 31, 0x23D4C8u);
    ctx->pc = 0x23D4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4C0u;
            // 0x23d4c4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4C8u; }
        if (ctx->pc != 0x23D4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4C8u; }
        if (ctx->pc != 0x23D4C8u) { return; }
    }
    ctx->pc = 0x23D4C8u;
label_23d4c8:
    // 0x23d4c8: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x23d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_23d4cc:
    // 0x23d4cc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x23d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23d4d0: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x23d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x23d4d4: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x23d4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x23d4d8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x23d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23d4dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23d4e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x23d4e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23d4e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d4ec: 0x4c0008c  bltz        $a2, . + 4 + (0x8C << 2)
    ctx->pc = 0x23D4ECu;
    {
        const bool branch_taken_0x23d4ec = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x23D4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4ECu;
            // 0x23d4f0: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4ec) {
            ctx->pc = 0x23D720u;
            goto label_23d720;
        }
    }
    ctx->pc = 0x23D4F4u;
    // 0x23d4f4: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x23d4f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x23d4f8: 0x14200073  bnez        $at, . + 4 + (0x73 << 2)
    ctx->pc = 0x23D4F8u;
    {
        const bool branch_taken_0x23d4f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d4f8) {
            ctx->pc = 0x23D6C8u;
            goto label_23d6c8;
        }
    }
    ctx->pc = 0x23D500u;
    // 0x23d500: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23d500u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d504: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D504u;
    {
        const bool branch_taken_0x23d504 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x23D508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D504u;
            // 0x23d508: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d504) {
            ctx->pc = 0x23D524u;
            goto label_23d524;
        }
    }
    ctx->pc = 0x23D50Cu;
    // 0x23d50c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x23d50cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x23d510: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x23d510u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x23d514: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x23d514u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23d518: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D518u;
    {
        const bool branch_taken_0x23d518 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d518) {
            ctx->pc = 0x23D524u;
            goto label_23d524;
        }
    }
    ctx->pc = 0x23D520u;
    // 0x23d520: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x23d520u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23d524:
    // 0x23d524: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D524u;
    {
        const bool branch_taken_0x23d524 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d524) {
            ctx->pc = 0x23D558u;
            goto label_23d558;
        }
    }
    ctx->pc = 0x23D52Cu;
    // 0x23d52c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x23d530: 0xc83824  and         $a3, $a2, $t0
    ctx->pc = 0x23d530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x23d534: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D534u;
    {
        const bool branch_taken_0x23d534 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D534u;
            // 0x23d538: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d534) {
            ctx->pc = 0x23D54Cu;
            goto label_23d54c;
        }
    }
    ctx->pc = 0x23D53Cu;
    // 0x23d53c: 0x2283824  and         $a3, $s1, $t0
    ctx->pc = 0x23d53cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 8));
    // 0x23d540: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D540u;
    {
        const bool branch_taken_0x23d540 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d540) {
            ctx->pc = 0x23D54Cu;
            goto label_23d54c;
        }
    }
    ctx->pc = 0x23D548u;
    // 0x23d548: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23d548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d54c:
    // 0x23d54c: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D54Cu;
    {
        const bool branch_taken_0x23d54c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d54c) {
            ctx->pc = 0x23D558u;
            goto label_23d558;
        }
    }
    ctx->pc = 0x23D554u;
    // 0x23d554: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x23d554u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23d558:
    // 0x23d558: 0x1140005b  beqz        $t2, . + 4 + (0x5B << 2)
    ctx->pc = 0x23D558u;
    {
        const bool branch_taken_0x23d558 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d558) {
            ctx->pc = 0x23D6C8u;
            goto label_23d6c8;
        }
    }
    ctx->pc = 0x23D560u;
    // 0x23d560: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x23d560u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23d564: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x23d564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x23d568: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x23d568u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23d56c: 0x874821  addu        $t1, $a0, $a3
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x23d570: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x23d570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_23d574:
    // 0x23d574: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x23d574u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x23d578: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23d578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x23d57c: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x23d57cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23d580: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x23d580u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x23d584: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x23d584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d588: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x23d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d58c: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x23d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d590: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x23d590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d594: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x23d594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x23d598: 0xe5020008  swc1        $f2, 0x8($t0)
    ctx->pc = 0x23d598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x23d59c: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x23d59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x23d5a0: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x23d5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x23d5a4: 0x9127ffec  lbu         $a3, -0x14($t1)
    ctx->pc = 0x23d5a4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967276)));
    // 0x23d5a8: 0xa107ffec  sb          $a3, -0x14($t0)
    ctx->pc = 0x23d5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967276), (uint8_t)GPR_U32(ctx, 7));
    // 0x23d5ac: 0xc523fff0  lwc1        $f3, -0x10($t1)
    ctx->pc = 0x23d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d5b0: 0xc522fff4  lwc1        $f2, -0xC($t1)
    ctx->pc = 0x23d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d5b4: 0xc521fff8  lwc1        $f1, -0x8($t1)
    ctx->pc = 0x23d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d5b8: 0xc520fffc  lwc1        $f0, -0x4($t1)
    ctx->pc = 0x23d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d5bc: 0xe503fff0  swc1        $f3, -0x10($t0)
    ctx->pc = 0x23d5bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967280), bits); }
    // 0x23d5c0: 0xe502fff4  swc1        $f2, -0xC($t0)
    ctx->pc = 0x23d5c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967284), bits); }
    // 0x23d5c4: 0xe501fff8  swc1        $f1, -0x8($t0)
    ctx->pc = 0x23d5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967288), bits); }
    // 0x23d5c8: 0xe500fffc  swc1        $f0, -0x4($t0)
    ctx->pc = 0x23d5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967292), bits); }
    // 0x23d5cc: 0x9127ffd8  lbu         $a3, -0x28($t1)
    ctx->pc = 0x23d5ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967256)));
    // 0x23d5d0: 0xa107ffd8  sb          $a3, -0x28($t0)
    ctx->pc = 0x23d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967256), (uint8_t)GPR_U32(ctx, 7));
    // 0x23d5d4: 0xc523ffdc  lwc1        $f3, -0x24($t1)
    ctx->pc = 0x23d5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d5d8: 0xc522ffe0  lwc1        $f2, -0x20($t1)
    ctx->pc = 0x23d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d5dc: 0xc521ffe4  lwc1        $f1, -0x1C($t1)
    ctx->pc = 0x23d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d5e0: 0xc520ffe8  lwc1        $f0, -0x18($t1)
    ctx->pc = 0x23d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d5e4: 0xe503ffdc  swc1        $f3, -0x24($t0)
    ctx->pc = 0x23d5e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967260), bits); }
    // 0x23d5e8: 0xe502ffe0  swc1        $f2, -0x20($t0)
    ctx->pc = 0x23d5e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967264), bits); }
    // 0x23d5ec: 0xe501ffe4  swc1        $f1, -0x1C($t0)
    ctx->pc = 0x23d5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967268), bits); }
    // 0x23d5f0: 0xe500ffe8  swc1        $f0, -0x18($t0)
    ctx->pc = 0x23d5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967272), bits); }
    // 0x23d5f4: 0x9127ffc4  lbu         $a3, -0x3C($t1)
    ctx->pc = 0x23d5f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967236)));
    // 0x23d5f8: 0xa107ffc4  sb          $a3, -0x3C($t0)
    ctx->pc = 0x23d5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967236), (uint8_t)GPR_U32(ctx, 7));
    // 0x23d5fc: 0xc523ffc8  lwc1        $f3, -0x38($t1)
    ctx->pc = 0x23d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d600: 0xc522ffcc  lwc1        $f2, -0x34($t1)
    ctx->pc = 0x23d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d604: 0xc521ffd0  lwc1        $f1, -0x30($t1)
    ctx->pc = 0x23d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d608: 0xc520ffd4  lwc1        $f0, -0x2C($t1)
    ctx->pc = 0x23d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d60c: 0xe503ffc8  swc1        $f3, -0x38($t0)
    ctx->pc = 0x23d60cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967240), bits); }
    // 0x23d610: 0xe502ffcc  swc1        $f2, -0x34($t0)
    ctx->pc = 0x23d610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967244), bits); }
    // 0x23d614: 0xe501ffd0  swc1        $f1, -0x30($t0)
    ctx->pc = 0x23d614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967248), bits); }
    // 0x23d618: 0xe500ffd4  swc1        $f0, -0x2C($t0)
    ctx->pc = 0x23d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967252), bits); }
    // 0x23d61c: 0x9127ffb0  lbu         $a3, -0x50($t1)
    ctx->pc = 0x23d61cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967216)));
    // 0x23d620: 0xa107ffb0  sb          $a3, -0x50($t0)
    ctx->pc = 0x23d620u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967216), (uint8_t)GPR_U32(ctx, 7));
    // 0x23d624: 0xc523ffb4  lwc1        $f3, -0x4C($t1)
    ctx->pc = 0x23d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d628: 0xc522ffb8  lwc1        $f2, -0x48($t1)
    ctx->pc = 0x23d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d62c: 0xc521ffbc  lwc1        $f1, -0x44($t1)
    ctx->pc = 0x23d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d630: 0xc520ffc0  lwc1        $f0, -0x40($t1)
    ctx->pc = 0x23d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d634: 0xe503ffb4  swc1        $f3, -0x4C($t0)
    ctx->pc = 0x23d634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967220), bits); }
    // 0x23d638: 0xe502ffb8  swc1        $f2, -0x48($t0)
    ctx->pc = 0x23d638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967224), bits); }
    // 0x23d63c: 0xe501ffbc  swc1        $f1, -0x44($t0)
    ctx->pc = 0x23d63cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967228), bits); }
    // 0x23d640: 0xe500ffc0  swc1        $f0, -0x40($t0)
    ctx->pc = 0x23d640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967232), bits); }
    // 0x23d644: 0x9127ff9c  lbu         $a3, -0x64($t1)
    ctx->pc = 0x23d644u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967196)));
    // 0x23d648: 0xa107ff9c  sb          $a3, -0x64($t0)
    ctx->pc = 0x23d648u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967196), (uint8_t)GPR_U32(ctx, 7));
    // 0x23d64c: 0xc523ffa0  lwc1        $f3, -0x60($t1)
    ctx->pc = 0x23d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d650: 0xc522ffa4  lwc1        $f2, -0x5C($t1)
    ctx->pc = 0x23d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d654: 0xc521ffa8  lwc1        $f1, -0x58($t1)
    ctx->pc = 0x23d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d658: 0xc520ffac  lwc1        $f0, -0x54($t1)
    ctx->pc = 0x23d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d65c: 0xe503ffa0  swc1        $f3, -0x60($t0)
    ctx->pc = 0x23d65cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967200), bits); }
    // 0x23d660: 0xe502ffa4  swc1        $f2, -0x5C($t0)
    ctx->pc = 0x23d660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967204), bits); }
    // 0x23d664: 0xe501ffa8  swc1        $f1, -0x58($t0)
    ctx->pc = 0x23d664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967208), bits); }
    // 0x23d668: 0xe500ffac  swc1        $f0, -0x54($t0)
    ctx->pc = 0x23d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967212), bits); }
    // 0x23d66c: 0x9127ff88  lbu         $a3, -0x78($t1)
    ctx->pc = 0x23d66cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967176)));
    // 0x23d670: 0xa107ff88  sb          $a3, -0x78($t0)
    ctx->pc = 0x23d670u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967176), (uint8_t)GPR_U32(ctx, 7));
    // 0x23d674: 0xc523ff8c  lwc1        $f3, -0x74($t1)
    ctx->pc = 0x23d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d678: 0xc522ff90  lwc1        $f2, -0x70($t1)
    ctx->pc = 0x23d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d67c: 0xc521ff94  lwc1        $f1, -0x6C($t1)
    ctx->pc = 0x23d67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d680: 0xc520ff98  lwc1        $f0, -0x68($t1)
    ctx->pc = 0x23d680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d684: 0xe503ff8c  swc1        $f3, -0x74($t0)
    ctx->pc = 0x23d684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967180), bits); }
    // 0x23d688: 0xe502ff90  swc1        $f2, -0x70($t0)
    ctx->pc = 0x23d688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967184), bits); }
    // 0x23d68c: 0xe501ff94  swc1        $f1, -0x6C($t0)
    ctx->pc = 0x23d68cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967188), bits); }
    // 0x23d690: 0xe500ff98  swc1        $f0, -0x68($t0)
    ctx->pc = 0x23d690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967192), bits); }
    // 0x23d694: 0x9127ff74  lbu         $a3, -0x8C($t1)
    ctx->pc = 0x23d694u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967156)));
    // 0x23d698: 0xa107ff74  sb          $a3, -0x8C($t0)
    ctx->pc = 0x23d698u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294967156), (uint8_t)GPR_U32(ctx, 7));
    // 0x23d69c: 0xc523ff78  lwc1        $f3, -0x88($t1)
    ctx->pc = 0x23d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d6a0: 0xc522ff7c  lwc1        $f2, -0x84($t1)
    ctx->pc = 0x23d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d6a4: 0xc521ff80  lwc1        $f1, -0x80($t1)
    ctx->pc = 0x23d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d6a8: 0xc520ff84  lwc1        $f0, -0x7C($t1)
    ctx->pc = 0x23d6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d6ac: 0xe503ff78  swc1        $f3, -0x88($t0)
    ctx->pc = 0x23d6acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967160), bits); }
    // 0x23d6b0: 0x2529ff60  addiu       $t1, $t1, -0xA0
    ctx->pc = 0x23d6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967136));
    // 0x23d6b4: 0xe502ff7c  swc1        $f2, -0x84($t0)
    ctx->pc = 0x23d6b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967164), bits); }
    // 0x23d6b8: 0xe501ff80  swc1        $f1, -0x80($t0)
    ctx->pc = 0x23d6b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967168), bits); }
    // 0x23d6bc: 0xe500ff84  swc1        $f0, -0x7C($t0)
    ctx->pc = 0x23d6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967172), bits); }
    // 0x23d6c0: 0x1020ffac  beqz        $at, . + 4 + (-0x54 << 2)
    ctx->pc = 0x23D6C0u;
    {
        const bool branch_taken_0x23d6c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D6C0u;
            // 0x23d6c4: 0x2508ff60  addiu       $t0, $t0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6c0) {
            ctx->pc = 0x23D574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d574;
        }
    }
    ctx->pc = 0x23D6C8u;
label_23d6c8:
    // 0x23d6c8: 0x4c00015  bltz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x23D6C8u;
    {
        const bool branch_taken_0x23d6c8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x23d6c8) {
            ctx->pc = 0x23D720u;
            goto label_23d720;
        }
    }
    ctx->pc = 0x23D6D0u;
    // 0x23d6d0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x23d6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23d6d4: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x23d6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x23d6d8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x23d6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x23d6dc: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x23d6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x23d6e0: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x23d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_23d6e4:
    // 0x23d6e4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x23d6e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23d6e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23d6ec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x23d6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d6f0: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x23d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d6f4: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x23d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d6f8: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x23d6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d6fc: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x23d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d700: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x23d700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x23d704: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x23d704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
    // 0x23d708: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x23d708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x23d70c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x23d70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23d710: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x23d710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x23d714: 0x4c1fff3  bgez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x23D714u;
    {
        const bool branch_taken_0x23d714 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x23D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D714u;
            // 0x23d718: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d714) {
            ctx->pc = 0x23D6E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d6e4;
        }
    }
    ctx->pc = 0x23D71Cu;
    // 0x23d71c: 0x0  nop
    ctx->pc = 0x23d71cu;
    // NOP
label_23d720:
    // 0x23d720: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23d720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23d724: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x23d724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23d728: 0x480008d  bltz        $a0, . + 4 + (0x8D << 2)
    ctx->pc = 0x23D728u;
    {
        const bool branch_taken_0x23d728 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23D72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D728u;
            // 0x23d72c: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d728) {
            ctx->pc = 0x23D960u;
            goto label_23d960;
        }
    }
    ctx->pc = 0x23D730u;
    // 0x23d730: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x23d730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x23d734: 0x14200074  bnez        $at, . + 4 + (0x74 << 2)
    ctx->pc = 0x23D734u;
    {
        const bool branch_taken_0x23d734 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d734) {
            ctx->pc = 0x23D908u;
            goto label_23d908;
        }
    }
    ctx->pc = 0x23D73Cu;
    // 0x23d73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23d73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d740: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D740u;
    {
        const bool branch_taken_0x23d740 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D740u;
            // 0x23d744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d740) {
            ctx->pc = 0x23D760u;
            goto label_23d760;
        }
    }
    ctx->pc = 0x23D748u;
    // 0x23d748: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x23d748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x23d74c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x23d74cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x23d750: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x23d750u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23d754: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D754u;
    {
        const bool branch_taken_0x23d754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d754) {
            ctx->pc = 0x23D760u;
            goto label_23d760;
        }
    }
    ctx->pc = 0x23D75Cu;
    // 0x23d75c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x23d75cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23d760:
    // 0x23d760: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x23D760u;
    {
        const bool branch_taken_0x23d760 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d760) {
            ctx->pc = 0x23D798u;
            goto label_23d798;
        }
    }
    ctx->pc = 0x23D768u;
    // 0x23d768: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x23d768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23d76c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x23d76cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x23d770: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x23d770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x23d774: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D774u;
    {
        const bool branch_taken_0x23d774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D774u;
            // 0x23d778: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d774) {
            ctx->pc = 0x23D78Cu;
            goto label_23d78c;
        }
    }
    ctx->pc = 0x23D77Cu;
    // 0x23d77c: 0x2462824  and         $a1, $s2, $a2
    ctx->pc = 0x23d77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
    // 0x23d780: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D780u;
    {
        const bool branch_taken_0x23d780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d780) {
            ctx->pc = 0x23D78Cu;
            goto label_23d78c;
        }
    }
    ctx->pc = 0x23D788u;
    // 0x23d788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23d788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d78c:
    // 0x23d78c: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D78Cu;
    {
        const bool branch_taken_0x23d78c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d78c) {
            ctx->pc = 0x23D798u;
            goto label_23d798;
        }
    }
    ctx->pc = 0x23D794u;
    // 0x23d794: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x23d794u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23d798:
    // 0x23d798: 0x1100005b  beqz        $t0, . + 4 + (0x5B << 2)
    ctx->pc = 0x23D798u;
    {
        const bool branch_taken_0x23d798 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d798) {
            ctx->pc = 0x23D908u;
            goto label_23d908;
        }
    }
    ctx->pc = 0x23D7A0u;
    // 0x23d7a0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x23d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d7a4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23d7a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23d7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23d7ac: 0x2653821  addu        $a3, $s3, $a1
    ctx->pc = 0x23d7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x23d7b0: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x23d7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23d7b4:
    // 0x23d7b4: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x23d7b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23d7b8: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x23d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x23d7bc: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x23d7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23d7c0: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x23d7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23d7c4: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x23d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d7c8: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x23d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d7cc: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x23d7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d7d0: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x23d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d7d4: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x23d7d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x23d7d8: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x23d7d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x23d7dc: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x23d7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x23d7e0: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x23d7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x23d7e4: 0x90e5ffec  lbu         $a1, -0x14($a3)
    ctx->pc = 0x23d7e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967276)));
    // 0x23d7e8: 0xa0c5ffec  sb          $a1, -0x14($a2)
    ctx->pc = 0x23d7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967276), (uint8_t)GPR_U32(ctx, 5));
    // 0x23d7ec: 0xc4e3fff0  lwc1        $f3, -0x10($a3)
    ctx->pc = 0x23d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d7f0: 0xc4e2fff4  lwc1        $f2, -0xC($a3)
    ctx->pc = 0x23d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d7f4: 0xc4e1fff8  lwc1        $f1, -0x8($a3)
    ctx->pc = 0x23d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d7f8: 0xc4e0fffc  lwc1        $f0, -0x4($a3)
    ctx->pc = 0x23d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d7fc: 0xe4c3fff0  swc1        $f3, -0x10($a2)
    ctx->pc = 0x23d7fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), bits); }
    // 0x23d800: 0xe4c2fff4  swc1        $f2, -0xC($a2)
    ctx->pc = 0x23d800u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), bits); }
    // 0x23d804: 0xe4c1fff8  swc1        $f1, -0x8($a2)
    ctx->pc = 0x23d804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), bits); }
    // 0x23d808: 0xe4c0fffc  swc1        $f0, -0x4($a2)
    ctx->pc = 0x23d808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), bits); }
    // 0x23d80c: 0x90e5ffd8  lbu         $a1, -0x28($a3)
    ctx->pc = 0x23d80cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967256)));
    // 0x23d810: 0xa0c5ffd8  sb          $a1, -0x28($a2)
    ctx->pc = 0x23d810u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967256), (uint8_t)GPR_U32(ctx, 5));
    // 0x23d814: 0xc4e3ffdc  lwc1        $f3, -0x24($a3)
    ctx->pc = 0x23d814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d818: 0xc4e2ffe0  lwc1        $f2, -0x20($a3)
    ctx->pc = 0x23d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d81c: 0xc4e1ffe4  lwc1        $f1, -0x1C($a3)
    ctx->pc = 0x23d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d820: 0xc4e0ffe8  lwc1        $f0, -0x18($a3)
    ctx->pc = 0x23d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d824: 0xe4c3ffdc  swc1        $f3, -0x24($a2)
    ctx->pc = 0x23d824u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967260), bits); }
    // 0x23d828: 0xe4c2ffe0  swc1        $f2, -0x20($a2)
    ctx->pc = 0x23d828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967264), bits); }
    // 0x23d82c: 0xe4c1ffe4  swc1        $f1, -0x1C($a2)
    ctx->pc = 0x23d82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967268), bits); }
    // 0x23d830: 0xe4c0ffe8  swc1        $f0, -0x18($a2)
    ctx->pc = 0x23d830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967272), bits); }
    // 0x23d834: 0x90e5ffc4  lbu         $a1, -0x3C($a3)
    ctx->pc = 0x23d834u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967236)));
    // 0x23d838: 0xa0c5ffc4  sb          $a1, -0x3C($a2)
    ctx->pc = 0x23d838u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967236), (uint8_t)GPR_U32(ctx, 5));
    // 0x23d83c: 0xc4e3ffc8  lwc1        $f3, -0x38($a3)
    ctx->pc = 0x23d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d840: 0xc4e2ffcc  lwc1        $f2, -0x34($a3)
    ctx->pc = 0x23d840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d844: 0xc4e1ffd0  lwc1        $f1, -0x30($a3)
    ctx->pc = 0x23d844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d848: 0xc4e0ffd4  lwc1        $f0, -0x2C($a3)
    ctx->pc = 0x23d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d84c: 0xe4c3ffc8  swc1        $f3, -0x38($a2)
    ctx->pc = 0x23d84cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967240), bits); }
    // 0x23d850: 0xe4c2ffcc  swc1        $f2, -0x34($a2)
    ctx->pc = 0x23d850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967244), bits); }
    // 0x23d854: 0xe4c1ffd0  swc1        $f1, -0x30($a2)
    ctx->pc = 0x23d854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967248), bits); }
    // 0x23d858: 0xe4c0ffd4  swc1        $f0, -0x2C($a2)
    ctx->pc = 0x23d858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967252), bits); }
    // 0x23d85c: 0x90e5ffb0  lbu         $a1, -0x50($a3)
    ctx->pc = 0x23d85cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967216)));
    // 0x23d860: 0xa0c5ffb0  sb          $a1, -0x50($a2)
    ctx->pc = 0x23d860u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967216), (uint8_t)GPR_U32(ctx, 5));
    // 0x23d864: 0xc4e3ffb4  lwc1        $f3, -0x4C($a3)
    ctx->pc = 0x23d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d868: 0xc4e2ffb8  lwc1        $f2, -0x48($a3)
    ctx->pc = 0x23d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d86c: 0xc4e1ffbc  lwc1        $f1, -0x44($a3)
    ctx->pc = 0x23d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d870: 0xc4e0ffc0  lwc1        $f0, -0x40($a3)
    ctx->pc = 0x23d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d874: 0xe4c3ffb4  swc1        $f3, -0x4C($a2)
    ctx->pc = 0x23d874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967220), bits); }
    // 0x23d878: 0xe4c2ffb8  swc1        $f2, -0x48($a2)
    ctx->pc = 0x23d878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967224), bits); }
    // 0x23d87c: 0xe4c1ffbc  swc1        $f1, -0x44($a2)
    ctx->pc = 0x23d87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967228), bits); }
    // 0x23d880: 0xe4c0ffc0  swc1        $f0, -0x40($a2)
    ctx->pc = 0x23d880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967232), bits); }
    // 0x23d884: 0x90e5ff9c  lbu         $a1, -0x64($a3)
    ctx->pc = 0x23d884u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967196)));
    // 0x23d888: 0xa0c5ff9c  sb          $a1, -0x64($a2)
    ctx->pc = 0x23d888u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967196), (uint8_t)GPR_U32(ctx, 5));
    // 0x23d88c: 0xc4e3ffa0  lwc1        $f3, -0x60($a3)
    ctx->pc = 0x23d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d890: 0xc4e2ffa4  lwc1        $f2, -0x5C($a3)
    ctx->pc = 0x23d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d894: 0xc4e1ffa8  lwc1        $f1, -0x58($a3)
    ctx->pc = 0x23d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d898: 0xc4e0ffac  lwc1        $f0, -0x54($a3)
    ctx->pc = 0x23d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d89c: 0xe4c3ffa0  swc1        $f3, -0x60($a2)
    ctx->pc = 0x23d89cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967200), bits); }
    // 0x23d8a0: 0xe4c2ffa4  swc1        $f2, -0x5C($a2)
    ctx->pc = 0x23d8a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967204), bits); }
    // 0x23d8a4: 0xe4c1ffa8  swc1        $f1, -0x58($a2)
    ctx->pc = 0x23d8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967208), bits); }
    // 0x23d8a8: 0xe4c0ffac  swc1        $f0, -0x54($a2)
    ctx->pc = 0x23d8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967212), bits); }
    // 0x23d8ac: 0x90e5ff88  lbu         $a1, -0x78($a3)
    ctx->pc = 0x23d8acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967176)));
    // 0x23d8b0: 0xa0c5ff88  sb          $a1, -0x78($a2)
    ctx->pc = 0x23d8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967176), (uint8_t)GPR_U32(ctx, 5));
    // 0x23d8b4: 0xc4e3ff8c  lwc1        $f3, -0x74($a3)
    ctx->pc = 0x23d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d8b8: 0xc4e2ff90  lwc1        $f2, -0x70($a3)
    ctx->pc = 0x23d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d8bc: 0xc4e1ff94  lwc1        $f1, -0x6C($a3)
    ctx->pc = 0x23d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d8c0: 0xc4e0ff98  lwc1        $f0, -0x68($a3)
    ctx->pc = 0x23d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d8c4: 0xe4c3ff8c  swc1        $f3, -0x74($a2)
    ctx->pc = 0x23d8c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967180), bits); }
    // 0x23d8c8: 0xe4c2ff90  swc1        $f2, -0x70($a2)
    ctx->pc = 0x23d8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967184), bits); }
    // 0x23d8cc: 0xe4c1ff94  swc1        $f1, -0x6C($a2)
    ctx->pc = 0x23d8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967188), bits); }
    // 0x23d8d0: 0xe4c0ff98  swc1        $f0, -0x68($a2)
    ctx->pc = 0x23d8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967192), bits); }
    // 0x23d8d4: 0x90e5ff74  lbu         $a1, -0x8C($a3)
    ctx->pc = 0x23d8d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967156)));
    // 0x23d8d8: 0xa0c5ff74  sb          $a1, -0x8C($a2)
    ctx->pc = 0x23d8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967156), (uint8_t)GPR_U32(ctx, 5));
    // 0x23d8dc: 0xc4e3ff78  lwc1        $f3, -0x88($a3)
    ctx->pc = 0x23d8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d8e0: 0xc4e2ff7c  lwc1        $f2, -0x84($a3)
    ctx->pc = 0x23d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d8e4: 0xc4e1ff80  lwc1        $f1, -0x80($a3)
    ctx->pc = 0x23d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d8e8: 0xc4e0ff84  lwc1        $f0, -0x7C($a3)
    ctx->pc = 0x23d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d8ec: 0xe4c3ff78  swc1        $f3, -0x88($a2)
    ctx->pc = 0x23d8ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967160), bits); }
    // 0x23d8f0: 0x24e7ff60  addiu       $a3, $a3, -0xA0
    ctx->pc = 0x23d8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967136));
    // 0x23d8f4: 0xe4c2ff7c  swc1        $f2, -0x84($a2)
    ctx->pc = 0x23d8f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967164), bits); }
    // 0x23d8f8: 0xe4c1ff80  swc1        $f1, -0x80($a2)
    ctx->pc = 0x23d8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967168), bits); }
    // 0x23d8fc: 0xe4c0ff84  swc1        $f0, -0x7C($a2)
    ctx->pc = 0x23d8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967172), bits); }
    // 0x23d900: 0x1020ffac  beqz        $at, . + 4 + (-0x54 << 2)
    ctx->pc = 0x23D900u;
    {
        const bool branch_taken_0x23d900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D900u;
            // 0x23d904: 0x24c6ff60  addiu       $a2, $a2, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d900) {
            ctx->pc = 0x23D7B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d7b4;
        }
    }
    ctx->pc = 0x23D908u;
label_23d908:
    // 0x23d908: 0x4800015  bltz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23D908u;
    {
        const bool branch_taken_0x23d908 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x23d908) {
            ctx->pc = 0x23D960u;
            goto label_23d960;
        }
    }
    ctx->pc = 0x23D910u;
    // 0x23d910: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x23d910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d914: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23d914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23d918: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23d918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23d91c: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x23d91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x23d920: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x23d920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23d924:
    // 0x23d924: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x23d924u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23d928: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23d92c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x23d92cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d930: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x23d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d934: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x23d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d938: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x23d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d93c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x23d93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d940: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x23d940u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x23d944: 0x24c6ffec  addiu       $a2, $a2, -0x14
    ctx->pc = 0x23d944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x23d948: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x23d948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x23d94c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x23d94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23d950: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x23d950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x23d954: 0x481fff3  bgez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x23D954u;
    {
        const bool branch_taken_0x23d954 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x23D958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D954u;
            // 0x23d958: 0x24a5ffec  addiu       $a1, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d954) {
            ctx->pc = 0x23D924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d924;
        }
    }
    ctx->pc = 0x23D95Cu;
    // 0x23d95c: 0x0  nop
    ctx->pc = 0x23d95cu;
    // NOP
label_23d960:
    // 0x23d960: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x23d960u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x23d964: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23d964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23d968: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23d968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23d96c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23d96cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d970: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23d970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23d974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d980: 0x3e00008  jr          $ra
    ctx->pc = 0x23D980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D980u;
            // 0x23d984: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D988u;
    // 0x23d988: 0x0  nop
    ctx->pc = 0x23d988u;
    // NOP
    // 0x23d98c: 0x0  nop
    ctx->pc = 0x23d98cu;
    // NOP
}
