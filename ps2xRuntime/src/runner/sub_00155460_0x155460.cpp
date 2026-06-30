#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155460
// Address: 0x155460 - 0x1558d0
void sub_00155460_0x155460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155460_0x155460");
#endif

    switch (ctx->pc) {
        case 0x1554acu: goto label_1554ac;
        case 0x1554bcu: goto label_1554bc;
        case 0x1554d0u: goto label_1554d0;
        case 0x1554f4u: goto label_1554f4;
        case 0x155588u: goto label_155588;
        case 0x155598u: goto label_155598;
        case 0x155658u: goto label_155658;
        case 0x15568cu: goto label_15568c;
        case 0x1556c8u: goto label_1556c8;
        case 0x155720u: goto label_155720;
        case 0x155730u: goto label_155730;
        case 0x155744u: goto label_155744;
        case 0x15575cu: goto label_15575c;
        case 0x155768u: goto label_155768;
        case 0x155848u: goto label_155848;
        case 0x155864u: goto label_155864;
        default: break;
    }

    ctx->pc = 0x155460u;

    // 0x155460: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x155464: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x155464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x155468: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x155468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15546c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x155470: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x155470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x155474: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x155474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x155478: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x155478u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15547c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x155480: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x155480u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155484: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155488: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x155488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x15548c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15548cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155490: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x155490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x155494: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155498: 0x24841fa0  addiu       $a0, $a0, 0x1FA0
    ctx->pc = 0x155498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
    // 0x15549c: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x15549cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x1554a0: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x1554a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x1554a4: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x1554A4u;
    SET_GPR_U32(ctx, 31, 0x1554ACu);
    ctx->pc = 0x1554A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1554A4u;
            // 0x1554a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554ACu; }
        if (ctx->pc != 0x1554ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554ACu; }
        if (ctx->pc != 0x1554ACu) { return; }
    }
    ctx->pc = 0x1554ACu;
label_1554ac:
    // 0x1554ac: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1554acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1554b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1554b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1554b4: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x1554B4u;
    SET_GPR_U32(ctx, 31, 0x1554BCu);
    ctx->pc = 0x1554B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1554B4u;
            // 0x1554b8: 0x24a55520  addiu       $a1, $a1, 0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554BCu; }
        if (ctx->pc != 0x1554BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554BCu; }
        if (ctx->pc != 0x1554BCu) { return; }
    }
    ctx->pc = 0x1554BCu;
label_1554bc:
    // 0x1554bc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1554bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1554c0: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x1554c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1554c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1554c8: 0x186000f3  blez        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1554C8u;
    {
        const bool branch_taken_0x1554c8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1554CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554C8u;
            // 0x1554cc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554c8) {
            ctx->pc = 0x155898u;
            goto label_155898;
        }
    }
    ctx->pc = 0x1554D0u;
label_1554d0:
    // 0x1554d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1554d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1554d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1554d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1554d8: 0xac7e5774  sw          $fp, 0x5774($v1)
    ctx->pc = 0x1554d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 30));
    // 0x1554dc: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1554dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1554e0: 0xac435770  sw          $v1, 0x5770($v0)
    ctx->pc = 0x1554e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
    // 0x1554e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1554e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1554e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1554ec: 0xc0535e0  jal         func_14D780
    ctx->pc = 0x1554ECu;
    SET_GPR_U32(ctx, 31, 0x1554F4u);
    ctx->pc = 0x1554F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1554ECu;
            // 0x1554f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D780u;
    if (runtime->hasFunction(0x14D780u)) {
        auto targetFn = runtime->lookupFunction(0x14D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554F4u; }
        if (ctx->pc != 0x1554F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D780_0x14d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554F4u; }
        if (ctx->pc != 0x1554F4u) { return; }
    }
    ctx->pc = 0x1554F4u;
label_1554f4:
    // 0x1554f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1554f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1554f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1554fc: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x1554fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
    // 0x155500: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x155500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x155504: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x155504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x155508: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x15550c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155510: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x155510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
    // 0x155514: 0x8c495768  lw          $t1, 0x5768($v0)
    ctx->pc = 0x155514u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
    // 0x155518: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15551c: 0x8e8a0018  lw          $t2, 0x18($s4)
    ctx->pc = 0x15551cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x155520: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155524: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155528: 0x8c485814  lw          $t0, 0x5814($v0)
    ctx->pc = 0x155528u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x15552c: 0xacea5760  sw          $t2, 0x5760($a3)
    ctx->pc = 0x15552cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22368), GPR_U32(ctx, 10));
    // 0x155530: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x155530u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x155534: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x155534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x155538: 0x31070002  andi        $a3, $t0, 0x2
    ctx->pc = 0x155538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x15553c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x15553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x155540: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x155540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x155544: 0xaca9576c  sw          $t1, 0x576C($a1)
    ctx->pc = 0x155544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22380), GPR_U32(ctx, 9));
    // 0x155548: 0xacc2577c  sw          $v0, 0x577C($a2)
    ctx->pc = 0x155548u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22396), GPR_U32(ctx, 2));
    // 0x15554c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x15554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x155550: 0xac825768  sw          $v0, 0x5768($a0)
    ctx->pc = 0x155550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22376), GPR_U32(ctx, 2));
    // 0x155554: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x155554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x155558: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x155558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x15555c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x155560: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x155560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x155564: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x155564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x155568: 0xac735780  sw          $s3, 0x5780($v1)
    ctx->pc = 0x155568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 19));
    // 0x15556c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x155570: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x155570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x155574: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x155578: 0x10e0003f  beqz        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x155578u;
    {
        const bool branch_taken_0x155578 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155578u;
            // 0x15557c: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155578) {
            ctx->pc = 0x155678u;
            goto label_155678;
        }
    }
    ctx->pc = 0x155580u;
    // 0x155580: 0xc053658  jal         func_14D960
    ctx->pc = 0x155580u;
    SET_GPR_U32(ctx, 31, 0x155588u);
    ctx->pc = 0x14D960u;
    if (runtime->hasFunction(0x14D960u)) {
        auto targetFn = runtime->lookupFunction(0x14D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155588u; }
        if (ctx->pc != 0x155588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D960_0x14d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155588u; }
        if (ctx->pc != 0x155588u) { return; }
    }
    ctx->pc = 0x155588u;
label_155588:
    // 0x155588: 0x1ac000bd  blez        $s6, . + 4 + (0xBD << 2)
    ctx->pc = 0x155588u;
    {
        const bool branch_taken_0x155588 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x15558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155588u;
            // 0x15558c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155588) {
            ctx->pc = 0x155880u;
            goto label_155880;
        }
    }
    ctx->pc = 0x155590u;
    // 0x155590: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x155594: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x155594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_155598:
    // 0x155598: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x155598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15559c: 0x10c000b2  beqz        $a2, . + 4 + (0xB2 << 2)
    ctx->pc = 0x15559Cu;
    {
        const bool branch_taken_0x15559c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15559c) {
            ctx->pc = 0x155868u;
            goto label_155868;
        }
    }
    ctx->pc = 0x1555A4u;
    // 0x1555a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1555a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1555a8: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1555A8u;
    {
        const bool branch_taken_0x1555a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1555ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555A8u;
            // 0x1555ac: 0xac665788  sw          $a2, 0x5788($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555a8) {
            ctx->pc = 0x1555B8u;
            goto label_1555b8;
        }
    }
    ctx->pc = 0x1555B0u;
    // 0x1555b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1555B0u;
    {
        const bool branch_taken_0x1555b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555B0u;
            // 0x1555b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555b0) {
            ctx->pc = 0x1555BCu;
            goto label_1555bc;
        }
    }
    ctx->pc = 0x1555B8u;
label_1555b8:
    // 0x1555b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1555b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1555bc:
    // 0x1555bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1555bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1555c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1555C0u;
    {
        const bool branch_taken_0x1555c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555C0u;
            // 0x1555c4: 0xac64578c  sw          $a0, 0x578C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555c0) {
            ctx->pc = 0x1555E0u;
            goto label_1555e0;
        }
    }
    ctx->pc = 0x1555C8u;
    // 0x1555c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1555cc: 0x8c635770  lw          $v1, 0x5770($v1)
    ctx->pc = 0x1555ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22384)));
    // 0x1555d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1555d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1555d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1555d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1555d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1555D8u;
    {
        const bool branch_taken_0x1555d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555D8u;
            // 0x1555dc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555d8) {
            ctx->pc = 0x1555E4u;
            goto label_1555e4;
        }
    }
    ctx->pc = 0x1555E0u;
label_1555e0:
    // 0x1555e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1555e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1555e4:
    // 0x1555e4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1555e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1555e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1555E8u;
    {
        const bool branch_taken_0x1555e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1555e8) {
            ctx->pc = 0x1555F8u;
            goto label_1555f8;
        }
    }
    ctx->pc = 0x1555F0u;
    // 0x1555f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1555F0u;
    {
        const bool branch_taken_0x1555f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555F0u;
            // 0x1555f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555f0) {
            ctx->pc = 0x155640u;
            goto label_155640;
        }
    }
    ctx->pc = 0x1555F8u;
label_1555f8:
    // 0x1555f8: 0x30850022  andi        $a1, $a0, 0x22
    ctx->pc = 0x1555f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
    // 0x1555fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1555fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x155600: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155604: 0x8c8457b0  lw          $a0, 0x57B0($a0)
    ctx->pc = 0x155604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22448)));
    // 0x155608: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x155608u;
    {
        const bool branch_taken_0x155608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155608u;
            // 0x15560c: 0xac6457f0  sw          $a0, 0x57F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155608) {
            ctx->pc = 0x155620u;
            goto label_155620;
        }
    }
    ctx->pc = 0x155610u;
    // 0x155610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155614: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155618: 0xac6457f0  sw          $a0, 0x57F0($v1)
    ctx->pc = 0x155618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
    // 0x15561c: 0x0  nop
    ctx->pc = 0x15561cu;
    // NOP
label_155620:
    // 0x155620: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155624: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x155628: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x155628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15562c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15562cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155630: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155634: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x155634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x155638: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x155638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
    // 0x15563c: 0x0  nop
    ctx->pc = 0x15563cu;
    // NOP
label_155640:
    // 0x155640: 0x14e00089  bnez        $a3, . + 4 + (0x89 << 2)
    ctx->pc = 0x155640u;
    {
        const bool branch_taken_0x155640 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x155640) {
            ctx->pc = 0x155868u;
            goto label_155868;
        }
    }
    ctx->pc = 0x155648u;
    // 0x155648: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x155648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x15564c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155650: 0xc053684  jal         func_14DA10
    ctx->pc = 0x155650u;
    SET_GPR_U32(ctx, 31, 0x155658u);
    ctx->pc = 0x155654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155650u;
            // 0x155654: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA10u;
    if (runtime->hasFunction(0x14DA10u)) {
        auto targetFn = runtime->lookupFunction(0x14DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155658u; }
        if (ctx->pc != 0x155658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DA10_0x14da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155658u; }
        if (ctx->pc != 0x155658u) { return; }
    }
    ctx->pc = 0x155658u;
label_155658:
    // 0x155658: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15565c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15565cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x155660: 0x256182a  slt         $v1, $s2, $s6
    ctx->pc = 0x155660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x155664: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x155664u;
    {
        const bool branch_taken_0x155664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155664u;
            // 0x155668: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155664) {
            ctx->pc = 0x155598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155598;
        }
    }
    ctx->pc = 0x15566Cu;
    // 0x15566c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x15566Cu;
    {
        const bool branch_taken_0x15566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15566c) {
            ctx->pc = 0x155880u;
            goto label_155880;
        }
    }
    ctx->pc = 0x155674u;
    // 0x155674: 0x0  nop
    ctx->pc = 0x155674u;
    // NOP
label_155678:
    // 0x155678: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15567c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15567cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x155680: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x155680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
    // 0x155684: 0xc05056c  jal         func_1415B0
    ctx->pc = 0x155684u;
    SET_GPR_U32(ctx, 31, 0x15568Cu);
    ctx->pc = 0x155688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155684u;
            // 0x155688: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1415B0u;
    if (runtime->hasFunction(0x1415B0u)) {
        auto targetFn = runtime->lookupFunction(0x1415B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15568Cu; }
        if (ctx->pc != 0x15568Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001415B0_0x1415b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15568Cu; }
        if (ctx->pc != 0x15568Cu) { return; }
    }
    ctx->pc = 0x15568Cu;
label_15568c:
    // 0x15568c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x15568Cu;
    {
        const bool branch_taken_0x15568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15568c) {
            ctx->pc = 0x155880u;
            goto label_155880;
        }
    }
    ctx->pc = 0x155694u;
    // 0x155694: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155698: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15569c: 0x8c655828  lw          $a1, 0x5828($v1)
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1556a0: 0x8c865824  lw          $a2, 0x5824($a0)
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22564)));
    // 0x1556a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1556a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1556a8: 0x8c6354d8  lw          $v1, 0x54D8($v1)
    ctx->pc = 0x1556a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21720)));
    // 0x1556ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1556acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1556b0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1556b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1556b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1556B4u;
    {
        const bool branch_taken_0x1556b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556B4u;
            // 0x1556b8: 0xac855824  sw          $a1, 0x5824($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22564), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556b4) {
            ctx->pc = 0x1556C8u;
            goto label_1556c8;
        }
    }
    ctx->pc = 0x1556BCu;
    // 0x1556bc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1556bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1556c0: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x1556C0u;
    SET_GPR_U32(ctx, 31, 0x1556C8u);
    ctx->pc = 0x1556C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1556C0u;
            // 0x1556c4: 0x24841fa0  addiu       $a0, $a0, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1556C8u; }
        if (ctx->pc != 0x1556C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1556C8u; }
        if (ctx->pc != 0x1556C8u) { return; }
    }
    ctx->pc = 0x1556C8u;
label_1556c8:
    // 0x1556c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1556c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1556cc: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x1556ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1556d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1556d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1556d4: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x1556d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1556d8: 0x10a4001d  beq         $a1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1556D8u;
    {
        const bool branch_taken_0x1556d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1556d8) {
            ctx->pc = 0x155750u;
            goto label_155750;
        }
    }
    ctx->pc = 0x1556E0u;
    // 0x1556e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1556e4: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1556E4u;
    {
        const bool branch_taken_0x1556e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1556e4) {
            ctx->pc = 0x155738u;
            goto label_155738;
        }
    }
    ctx->pc = 0x1556ECu;
    // 0x1556ec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1556ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1556f0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1556F0u;
    {
        const bool branch_taken_0x1556f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1556f0) {
            ctx->pc = 0x155728u;
            goto label_155728;
        }
    }
    ctx->pc = 0x1556F8u;
    // 0x1556f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1556fc: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1556FCu;
    {
        const bool branch_taken_0x1556fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1556fc) {
            ctx->pc = 0x155718u;
            goto label_155718;
        }
    }
    ctx->pc = 0x155704u;
    // 0x155704: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x155704u;
    {
        const bool branch_taken_0x155704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x155704) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x15570Cu;
    // 0x15570c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15570Cu;
    {
        const bool branch_taken_0x15570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15570c) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x155714u;
    // 0x155714: 0x0  nop
    ctx->pc = 0x155714u;
    // NOP
label_155718:
    // 0x155718: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x155718u;
    SET_GPR_U32(ctx, 31, 0x155720u);
    ctx->pc = 0x15571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155718u;
            // 0x15571c: 0x8f858110  lw          $a1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155720u; }
        if (ctx->pc != 0x155720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155720u; }
        if (ctx->pc != 0x155720u) { return; }
    }
    ctx->pc = 0x155720u;
label_155720:
    // 0x155720: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x155720u;
    {
        const bool branch_taken_0x155720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155720) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x155728u;
label_155728:
    // 0x155728: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x155728u;
    SET_GPR_U32(ctx, 31, 0x155730u);
    ctx->pc = 0x15572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155728u;
            // 0x15572c: 0x8f858110  lw          $a1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155730u; }
        if (ctx->pc != 0x155730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155730u; }
        if (ctx->pc != 0x155730u) { return; }
    }
    ctx->pc = 0x155730u;
label_155730:
    // 0x155730: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x155730u;
    {
        const bool branch_taken_0x155730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155730) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x155738u;
label_155738:
    // 0x155738: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x155738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x15573c: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x15573Cu;
    SET_GPR_U32(ctx, 31, 0x155744u);
    ctx->pc = 0x155740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15573Cu;
            // 0x155740: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155744u; }
        if (ctx->pc != 0x155744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155744u; }
        if (ctx->pc != 0x155744u) { return; }
    }
    ctx->pc = 0x155744u;
label_155744:
    // 0x155744: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155744u;
    {
        const bool branch_taken_0x155744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155744) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x15574Cu;
    // 0x15574c: 0x0  nop
    ctx->pc = 0x15574cu;
    // NOP
label_155750:
    // 0x155750: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x155750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x155754: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x155754u;
    SET_GPR_U32(ctx, 31, 0x15575Cu);
    ctx->pc = 0x155758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155754u;
            // 0x155758: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15575Cu; }
        if (ctx->pc != 0x15575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15575Cu; }
        if (ctx->pc != 0x15575Cu) { return; }
    }
    ctx->pc = 0x15575Cu;
label_15575c:
    // 0x15575c: 0x0  nop
    ctx->pc = 0x15575cu;
    // NOP
label_155760:
    // 0x155760: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x155760u;
    {
        const bool branch_taken_0x155760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155760u;
            // 0x155764: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155760) {
            ctx->pc = 0x155870u;
            goto label_155870;
        }
    }
    ctx->pc = 0x155768u;
label_155768:
    // 0x155768: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x155768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15576c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x15576cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x155770: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155774: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x155774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155778: 0x10c0003b  beqz        $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x155778u;
    {
        const bool branch_taken_0x155778 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x155778) {
            ctx->pc = 0x155868u;
            goto label_155868;
        }
    }
    ctx->pc = 0x155780u;
    // 0x155780: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155784: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x155784u;
    {
        const bool branch_taken_0x155784 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x155788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155784u;
            // 0x155788: 0xac665788  sw          $a2, 0x5788($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155784) {
            ctx->pc = 0x155794u;
            goto label_155794;
        }
    }
    ctx->pc = 0x15578Cu;
    // 0x15578c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15578Cu;
    {
        const bool branch_taken_0x15578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15578Cu;
            // 0x155790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15578c) {
            ctx->pc = 0x15579Cu;
            goto label_15579c;
        }
    }
    ctx->pc = 0x155794u;
label_155794:
    // 0x155794: 0x2a41821  addu        $v1, $s5, $a0
    ctx->pc = 0x155794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x155798: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15579c:
    // 0x15579c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1557a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1557A0u;
    {
        const bool branch_taken_0x1557a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557A0u;
            // 0x1557a4: 0xac64578c  sw          $a0, 0x578C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557a0) {
            ctx->pc = 0x1557C0u;
            goto label_1557c0;
        }
    }
    ctx->pc = 0x1557A8u;
    // 0x1557a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1557a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1557ac: 0x8c635770  lw          $v1, 0x5770($v1)
    ctx->pc = 0x1557acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22384)));
    // 0x1557b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1557b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1557b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1557b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1557b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1557B8u;
    {
        const bool branch_taken_0x1557b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557B8u;
            // 0x1557bc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557b8) {
            ctx->pc = 0x1557C4u;
            goto label_1557c4;
        }
    }
    ctx->pc = 0x1557C0u;
label_1557c0:
    // 0x1557c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1557c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1557c4:
    // 0x1557c4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1557c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1557c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1557C8u;
    {
        const bool branch_taken_0x1557c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557c8) {
            ctx->pc = 0x1557D8u;
            goto label_1557d8;
        }
    }
    ctx->pc = 0x1557D0u;
    // 0x1557d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1557D0u;
    {
        const bool branch_taken_0x1557d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557D0u;
            // 0x1557d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557d0) {
            ctx->pc = 0x155820u;
            goto label_155820;
        }
    }
    ctx->pc = 0x1557D8u;
label_1557d8:
    // 0x1557d8: 0x30850022  andi        $a1, $a0, 0x22
    ctx->pc = 0x1557d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
    // 0x1557dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1557dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1557e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1557e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1557e4: 0x8c8457b0  lw          $a0, 0x57B0($a0)
    ctx->pc = 0x1557e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22448)));
    // 0x1557e8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1557E8u;
    {
        const bool branch_taken_0x1557e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557E8u;
            // 0x1557ec: 0xac6457f0  sw          $a0, 0x57F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557e8) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1557F0u;
    // 0x1557f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1557f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1557f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1557f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1557f8: 0xac6457f0  sw          $a0, 0x57F0($v1)
    ctx->pc = 0x1557f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22512), GPR_U32(ctx, 4));
    // 0x1557fc: 0x0  nop
    ctx->pc = 0x1557fcu;
    // NOP
label_155800:
    // 0x155800: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155804: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x155804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x155808: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x155808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15580c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15580cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155810: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155814: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x155814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x155818: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x155818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
    // 0x15581c: 0x0  nop
    ctx->pc = 0x15581cu;
    // NOP
label_155820:
    // 0x155820: 0x14e00011  bnez        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x155820u;
    {
        const bool branch_taken_0x155820 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x155820) {
            ctx->pc = 0x155868u;
            goto label_155868;
        }
    }
    ctx->pc = 0x155828u;
    // 0x155828: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x155828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15582c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15582cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x155830: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155834: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x155834u;
    {
        const bool branch_taken_0x155834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155834) {
            ctx->pc = 0x155858u;
            goto label_155858;
        }
    }
    ctx->pc = 0x15583Cu;
    // 0x15583c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155840: 0xc054390  jal         func_150E40
    ctx->pc = 0x155840u;
    SET_GPR_U32(ctx, 31, 0x155848u);
    ctx->pc = 0x155844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155840u;
            // 0x155844: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150E40u;
    if (runtime->hasFunction(0x150E40u)) {
        auto targetFn = runtime->lookupFunction(0x150E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155848u; }
        if (ctx->pc != 0x155848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150E40_0x150e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155848u; }
        if (ctx->pc != 0x155848u) { return; }
    }
    ctx->pc = 0x155848u;
label_155848:
    // 0x155848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15584c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15584Cu;
    {
        const bool branch_taken_0x15584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15584Cu;
            // 0x155850: 0xaf8381a4  sw          $v1, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15584c) {
            ctx->pc = 0x155868u;
            goto label_155868;
        }
    }
    ctx->pc = 0x155854u;
    // 0x155854: 0x0  nop
    ctx->pc = 0x155854u;
    // NOP
label_155858:
    // 0x155858: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x155858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15585c: 0xc053978  jal         func_14E5E0
    ctx->pc = 0x15585Cu;
    SET_GPR_U32(ctx, 31, 0x155864u);
    ctx->pc = 0x155860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15585Cu;
            // 0x155860: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E5E0u;
    if (runtime->hasFunction(0x14E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x14E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155864u; }
        if (ctx->pc != 0x155864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E5E0_0x14e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155864u; }
        if (ctx->pc != 0x155864u) { return; }
    }
    ctx->pc = 0x155864u;
label_155864:
    // 0x155864: 0x0  nop
    ctx->pc = 0x155864u;
    // NOP
label_155868:
    // 0x155868: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15586c: 0x0  nop
    ctx->pc = 0x15586cu;
    // NOP
label_155870:
    // 0x155870: 0x256182a  slt         $v1, $s2, $s6
    ctx->pc = 0x155870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x155874: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x155874u;
    {
        const bool branch_taken_0x155874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155874) {
            ctx->pc = 0x155768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155768;
        }
    }
    ctx->pc = 0x15587Cu;
    // 0x15587c: 0x0  nop
    ctx->pc = 0x15587cu;
    // NOP
label_155880:
    // 0x155880: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x155880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x155884: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x155884u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x155888: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15588c: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x15588cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x155890: 0x1460ff0f  bnez        $v1, . + 4 + (-0xF1 << 2)
    ctx->pc = 0x155890u;
    {
        const bool branch_taken_0x155890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155890u;
            // 0x155894: 0x26940024  addiu       $s4, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155890) {
            ctx->pc = 0x1554D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1554d0;
        }
    }
    ctx->pc = 0x155898u;
label_155898:
    // 0x155898: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x155898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15589c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15589cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1558a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1558a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1558a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1558a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1558a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1558a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1558ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1558acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1558b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1558b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1558b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1558b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1558b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1558b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1558bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1558bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1558C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558C0u;
            // 0x1558c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1558C8u;
    // 0x1558c8: 0x0  nop
    ctx->pc = 0x1558c8u;
    // NOP
    // 0x1558cc: 0x0  nop
    ctx->pc = 0x1558ccu;
    // NOP
}
