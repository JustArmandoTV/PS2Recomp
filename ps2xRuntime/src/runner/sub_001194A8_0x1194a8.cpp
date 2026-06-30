#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001194A8
// Address: 0x1194a8 - 0x11a2f0
void sub_001194A8_0x1194a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001194A8_0x1194a8");
#endif

    switch (ctx->pc) {
        case 0x119504u: goto label_119504;
        case 0x11955cu: goto label_11955c;
        case 0x119578u: goto label_119578;
        case 0x119580u: goto label_119580;
        case 0x119590u: goto label_119590;
        case 0x11959cu: goto label_11959c;
        case 0x1195b8u: goto label_1195b8;
        case 0x1195d4u: goto label_1195d4;
        case 0x1195f0u: goto label_1195f0;
        case 0x1195f8u: goto label_1195f8;
        case 0x119608u: goto label_119608;
        case 0x119614u: goto label_119614;
        case 0x119630u: goto label_119630;
        case 0x119660u: goto label_119660;
        case 0x119674u: goto label_119674;
        case 0x119684u: goto label_119684;
        case 0x11968cu: goto label_11968c;
        case 0x119698u: goto label_119698;
        case 0x1196acu: goto label_1196ac;
        case 0x1196b8u: goto label_1196b8;
        case 0x1196ccu: goto label_1196cc;
        case 0x119700u: goto label_119700;
        case 0x119730u: goto label_119730;
        case 0x119740u: goto label_119740;
        case 0x119758u: goto label_119758;
        case 0x119768u: goto label_119768;
        case 0x119774u: goto label_119774;
        case 0x119780u: goto label_119780;
        case 0x119790u: goto label_119790;
        case 0x1197b8u: goto label_1197b8;
        case 0x1197c8u: goto label_1197c8;
        case 0x1197dcu: goto label_1197dc;
        case 0x1197ecu: goto label_1197ec;
        case 0x1197f8u: goto label_1197f8;
        case 0x119804u: goto label_119804;
        case 0x119814u: goto label_119814;
        case 0x119828u: goto label_119828;
        case 0x119834u: goto label_119834;
        case 0x119850u: goto label_119850;
        case 0x11985cu: goto label_11985c;
        case 0x119864u: goto label_119864;
        case 0x119870u: goto label_119870;
        case 0x119890u: goto label_119890;
        case 0x1198ccu: goto label_1198cc;
        case 0x1198d8u: goto label_1198d8;
        case 0x1198e0u: goto label_1198e0;
        case 0x1198f0u: goto label_1198f0;
        case 0x119904u: goto label_119904;
        case 0x11991cu: goto label_11991c;
        case 0x11992cu: goto label_11992c;
        case 0x119950u: goto label_119950;
        case 0x119964u: goto label_119964;
        case 0x119980u: goto label_119980;
        case 0x1199c4u: goto label_1199c4;
        case 0x1199ccu: goto label_1199cc;
        case 0x119b24u: goto label_119b24;
        case 0x119c20u: goto label_119c20;
        case 0x119c7cu: goto label_119c7c;
        case 0x119d90u: goto label_119d90;
        case 0x119de8u: goto label_119de8;
        case 0x119decu: goto label_119dec;
        case 0x119e7cu: goto label_119e7c;
        case 0x119f68u: goto label_119f68;
        case 0x119fb8u: goto label_119fb8;
        case 0x11a128u: goto label_11a128;
        case 0x11a1b0u: goto label_11a1b0;
        case 0x11a1b4u: goto label_11a1b4;
        case 0x11a1b8u: goto label_11a1b8;
        case 0x11a1ccu: goto label_11a1cc;
        case 0x11a254u: goto label_11a254;
        case 0x11a25cu: goto label_11a25c;
        case 0x11a280u: goto label_11a280;
        default: break;
    }

    ctx->pc = 0x1194a8u;

    // 0x1194a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1194a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1194ac: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x1194acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x1194b0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1194b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1194b4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1194b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1194b8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1194b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1194bc: 0x3c0e3fe9  lui         $t6, 0x3FE9
    ctx->pc = 0x1194bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16361 << 16));
    // 0x1194c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1194c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1194c4: 0x4a03f  dsra32      $s4, $a0, 0
    ctx->pc = 0x1194c4u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1194c8: 0x28f8024  and         $s0, $s4, $t7
    ctx->pc = 0x1194c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
    // 0x1194cc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1194ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1194d0: 0x35ce21fb  ori         $t6, $t6, 0x21FB
    ctx->pc = 0x1194d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8699);
    // 0x1194d4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1194d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1194d8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1194d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1194dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1194dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1194e0: 0x1d0702a  slt         $t6, $t6, $s0
    ctx->pc = 0x1194e0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1194e4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1194e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1194e8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1194e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1194ec: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1194ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1194f0: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x1194F0u;
    {
        const bool branch_taken_0x1194f0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1194F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194F0u;
            // 0x1194f4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194f0) {
            ctx->pc = 0x119538u;
            goto label_119538;
        }
    }
    ctx->pc = 0x1194F8u;
    // 0x1194f8: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x1194f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x1194fc: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x1194fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x119500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x119500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119504:
    // 0x119504: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x119504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119508: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x119508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11950c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x11950cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x119510: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x119510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119514: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x119514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x119518: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x119518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11951c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x11951cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x119520: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x119520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119524: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x119524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x119528: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x119528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11952c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x11952cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x119530: 0x3e00008  jr          $ra
    ctx->pc = 0x119530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119530u;
            // 0x119534: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119538u;
label_119538:
    // 0x119538: 0x3c0f4002  lui         $t7, 0x4002
    ctx->pc = 0x119538u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16386 << 16));
    // 0x11953c: 0x35efd97b  ori         $t7, $t7, 0xD97B
    ctx->pc = 0x11953cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)55675);
    // 0x119540: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x119540u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119544: 0x15e00040  bnez        $t7, . + 4 + (0x40 << 2)
    ctx->pc = 0x119544u;
    {
        const bool branch_taken_0x119544 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119544u;
            // 0x119548: 0x3c0f4139  lui         $t7, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119544) {
            ctx->pc = 0x119648u;
            goto label_119648;
        }
    }
    ctx->pc = 0x11954Cu;
    // 0x11954c: 0x1a80001f  blez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x11954Cu;
    {
        const bool branch_taken_0x11954c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x119550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11954Cu;
            // 0x119550: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11954c) {
            ctx->pc = 0x1195CCu;
            goto label_1195cc;
        }
    }
    ctx->pc = 0x119554u;
    // 0x119554: 0xc049622  jal         func_125888
    ctx->pc = 0x119554u;
    SET_GPR_U32(ctx, 31, 0x11955Cu);
    ctx->pc = 0x119558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119554u;
            // 0x119558: 0xdde5f588  ld          $a1, -0xA78($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11955Cu; }
        if (ctx->pc != 0x11955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11955Cu; }
        if (ctx->pc != 0x11955Cu) { return; }
    }
    ctx->pc = 0x11955Cu;
label_11955c:
    // 0x11955c: 0x3c0f3ff9  lui         $t7, 0x3FF9
    ctx->pc = 0x11955cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16377 << 16));
    // 0x119560: 0x35ef21fb  ori         $t7, $t7, 0x21FB
    ctx->pc = 0x119560u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8699);
    // 0x119564: 0x120f0010  beq         $s0, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x119564u;
    {
        const bool branch_taken_0x119564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x119568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119564u;
            // 0x119568: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119564) {
            ctx->pc = 0x1195A8u;
            goto label_1195a8;
        }
    }
    ctx->pc = 0x11956Cu;
    // 0x11956c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11956cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119574: 0xddf0f590  ld          $s0, -0xA70($t7)
    ctx->pc = 0x119574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 4294964624)));
label_119578:
    // 0x119578: 0xc049622  jal         func_125888
    ctx->pc = 0x119578u;
    SET_GPR_U32(ctx, 31, 0x119580u);
    ctx->pc = 0x11957Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119578u;
            // 0x11957c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119580u; }
        if (ctx->pc != 0x119580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119580u; }
        if (ctx->pc != 0x119580u) { return; }
    }
    ctx->pc = 0x119580u;
label_119580:
    // 0x119580: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x119580u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x119584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x119584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119588: 0xc049622  jal         func_125888
    ctx->pc = 0x119588u;
    SET_GPR_U32(ctx, 31, 0x119590u);
    ctx->pc = 0x11958Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119588u;
            // 0x11958c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119590u; }
        if (ctx->pc != 0x119590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119590u; }
        if (ctx->pc != 0x119590u) { return; }
    }
    ctx->pc = 0x119590u;
label_119590:
    // 0x119590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119594: 0xc049622  jal         func_125888
    ctx->pc = 0x119594u;
    SET_GPR_U32(ctx, 31, 0x11959Cu);
    ctx->pc = 0x119598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119594u;
            // 0x119598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11959Cu; }
        if (ctx->pc != 0x11959Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11959Cu; }
        if (ctx->pc != 0x11959Cu) { return; }
    }
    ctx->pc = 0x11959Cu;
label_11959c:
    // 0x11959c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x11959cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x1195a0: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1195A0u;
    {
        const bool branch_taken_0x1195a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195A0u;
            // 0x1195a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195a0) {
            ctx->pc = 0x119504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119504;
        }
    }
    ctx->pc = 0x1195A8u;
label_1195a8:
    // 0x1195a8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1195a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1195ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1195acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195b0: 0xc049622  jal         func_125888
    ctx->pc = 0x1195B0u;
    SET_GPR_U32(ctx, 31, 0x1195B8u);
    ctx->pc = 0x1195B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1195B0u;
            // 0x1195b4: 0xdde5f598  ld          $a1, -0xA68($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964632)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195B8u; }
        if (ctx->pc != 0x1195B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195B8u; }
        if (ctx->pc != 0x1195B8u) { return; }
    }
    ctx->pc = 0x1195B8u;
label_1195b8:
    // 0x1195b8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1195b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1195bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1195bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195c0: 0xddf0f5a0  ld          $s0, -0xA60($t7)
    ctx->pc = 0x1195c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 4294964640)));
    // 0x1195c4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1195C4u;
    {
        const bool branch_taken_0x1195c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195C4u;
            // 0x1195c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195c4) {
            ctx->pc = 0x119578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119578;
        }
    }
    ctx->pc = 0x1195CCu;
label_1195cc:
    // 0x1195cc: 0xc04960a  jal         func_125828
    ctx->pc = 0x1195CCu;
    SET_GPR_U32(ctx, 31, 0x1195D4u);
    ctx->pc = 0x1195D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1195CCu;
            // 0x1195d0: 0xdde5f588  ld          $a1, -0xA78($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195D4u; }
        if (ctx->pc != 0x1195D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195D4u; }
        if (ctx->pc != 0x1195D4u) { return; }
    }
    ctx->pc = 0x1195D4u;
label_1195d4:
    // 0x1195d4: 0x3c0f3ff9  lui         $t7, 0x3FF9
    ctx->pc = 0x1195d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16377 << 16));
    // 0x1195d8: 0x35ef21fb  ori         $t7, $t7, 0x21FB
    ctx->pc = 0x1195d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8699);
    // 0x1195dc: 0x120f0010  beq         $s0, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x1195DCu;
    {
        const bool branch_taken_0x1195dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x1195E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195DCu;
            // 0x1195e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195dc) {
            ctx->pc = 0x119620u;
            goto label_119620;
        }
    }
    ctx->pc = 0x1195E4u;
    // 0x1195e4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1195e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1195e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1195e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195ec: 0xddf0f590  ld          $s0, -0xA70($t7)
    ctx->pc = 0x1195ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 4294964624)));
label_1195f0:
    // 0x1195f0: 0xc04960a  jal         func_125828
    ctx->pc = 0x1195F0u;
    SET_GPR_U32(ctx, 31, 0x1195F8u);
    ctx->pc = 0x1195F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1195F0u;
            // 0x1195f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195F8u; }
        if (ctx->pc != 0x1195F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1195F8u; }
        if (ctx->pc != 0x1195F8u) { return; }
    }
    ctx->pc = 0x1195F8u;
label_1195f8:
    // 0x1195f8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1195f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x1195fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1195fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119600: 0xc049622  jal         func_125888
    ctx->pc = 0x119600u;
    SET_GPR_U32(ctx, 31, 0x119608u);
    ctx->pc = 0x119604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119600u;
            // 0x119604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119608u; }
        if (ctx->pc != 0x119608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119608u; }
        if (ctx->pc != 0x119608u) { return; }
    }
    ctx->pc = 0x119608u;
label_119608:
    // 0x119608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11960c: 0xc04960a  jal         func_125828
    ctx->pc = 0x11960Cu;
    SET_GPR_U32(ctx, 31, 0x119614u);
    ctx->pc = 0x119610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11960Cu;
            // 0x119610: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119614u; }
        if (ctx->pc != 0x119614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119614u; }
        if (ctx->pc != 0x119614u) { return; }
    }
    ctx->pc = 0x119614u;
label_119614:
    // 0x119614: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x119614u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x119618: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x119618u;
    {
        const bool branch_taken_0x119618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119618u;
            // 0x11961c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119618) {
            ctx->pc = 0x119504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119504;
        }
    }
    ctx->pc = 0x119620u;
label_119620:
    // 0x119620: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119620u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119628: 0xc04960a  jal         func_125828
    ctx->pc = 0x119628u;
    SET_GPR_U32(ctx, 31, 0x119630u);
    ctx->pc = 0x11962Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119628u;
            // 0x11962c: 0xdde5f598  ld          $a1, -0xA68($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964632)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119630u; }
        if (ctx->pc != 0x119630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119630u; }
        if (ctx->pc != 0x119630u) { return; }
    }
    ctx->pc = 0x119630u;
label_119630:
    // 0x119630: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119630u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119634: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119638: 0xddf0f5a0  ld          $s0, -0xA60($t7)
    ctx->pc = 0x119638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 4294964640)));
    // 0x11963c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x11963Cu;
    {
        const bool branch_taken_0x11963c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11963Cu;
            // 0x119640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11963c) {
            ctx->pc = 0x1195F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1195f0;
        }
    }
    ctx->pc = 0x119644u;
    // 0x119644: 0x0  nop
    ctx->pc = 0x119644u;
    // NOP
label_119648:
    // 0x119648: 0x35ef21fb  ori         $t7, $t7, 0x21FB
    ctx->pc = 0x119648u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8699);
    // 0x11964c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11964cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119650: 0x15e00089  bnez        $t7, . + 4 + (0x89 << 2)
    ctx->pc = 0x119650u;
    {
        const bool branch_taken_0x119650 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119650u;
            // 0x119654: 0x3c0f7fef  lui         $t7, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119650) {
            ctx->pc = 0x119878u;
            goto label_119878;
        }
    }
    ctx->pc = 0x119658u;
    // 0x119658: 0xc0474b6  jal         func_11D2D8
    ctx->pc = 0x119658u;
    SET_GPR_U32(ctx, 31, 0x119660u);
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119660u; }
        if (ctx->pc != 0x119660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119660u; }
        if (ctx->pc != 0x119660u) { return; }
    }
    ctx->pc = 0x119660u;
label_119660:
    // 0x119660: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119660u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119664: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119668: 0xdde5f5a8  ld          $a1, -0xA58($t7)
    ctx->pc = 0x119668u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964648)));
    // 0x11966c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11966Cu;
    SET_GPR_U32(ctx, 31, 0x119674u);
    ctx->pc = 0x119670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11966Cu;
            // 0x119670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119674u; }
        if (ctx->pc != 0x119674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119674u; }
        if (ctx->pc != 0x119674u) { return; }
    }
    ctx->pc = 0x119674u;
label_119674:
    // 0x119674: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x119674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x119678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11967c: 0xc04960a  jal         func_125828
    ctx->pc = 0x11967Cu;
    SET_GPR_U32(ctx, 31, 0x119684u);
    ctx->pc = 0x119680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11967Cu;
            // 0x119680: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119684u; }
        if (ctx->pc != 0x119684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119684u; }
        if (ctx->pc != 0x119684u) { return; }
    }
    ctx->pc = 0x119684u;
label_119684:
    // 0x119684: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x119684u;
    SET_GPR_U32(ctx, 31, 0x11968Cu);
    ctx->pc = 0x119688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119684u;
            // 0x119688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11968Cu; }
        if (ctx->pc != 0x11968Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11968Cu; }
        if (ctx->pc != 0x11968Cu) { return; }
    }
    ctx->pc = 0x11968Cu;
label_11968c:
    // 0x11968c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11968cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119690: 0xc049776  jal         func_125DD8
    ctx->pc = 0x119690u;
    SET_GPR_U32(ctx, 31, 0x119698u);
    ctx->pc = 0x119694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119690u;
            // 0x119694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119698u; }
        if (ctx->pc != 0x119698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119698u; }
        if (ctx->pc != 0x119698u) { return; }
    }
    ctx->pc = 0x119698u;
label_119698:
    // 0x119698: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119698u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11969c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11969cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196a0: 0xdde5f588  ld          $a1, -0xA78($t7)
    ctx->pc = 0x1196a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964616)));
    // 0x1196a4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1196A4u;
    SET_GPR_U32(ctx, 31, 0x1196ACu);
    ctx->pc = 0x1196A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196A4u;
            // 0x1196a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196ACu; }
        if (ctx->pc != 0x1196ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196ACu; }
        if (ctx->pc != 0x1196ACu) { return; }
    }
    ctx->pc = 0x1196ACu;
label_1196ac:
    // 0x1196ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1196acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196b0: 0xc049622  jal         func_125888
    ctx->pc = 0x1196B0u;
    SET_GPR_U32(ctx, 31, 0x1196B8u);
    ctx->pc = 0x1196B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196B0u;
            // 0x1196b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196B8u; }
        if (ctx->pc != 0x1196B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196B8u; }
        if (ctx->pc != 0x1196B8u) { return; }
    }
    ctx->pc = 0x1196B8u;
label_1196b8:
    // 0x1196b8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1196b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1196bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1196bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196c0: 0xdde5f590  ld          $a1, -0xA70($t7)
    ctx->pc = 0x1196c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964624)));
    // 0x1196c4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1196C4u;
    SET_GPR_U32(ctx, 31, 0x1196CCu);
    ctx->pc = 0x1196C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196C4u;
            // 0x1196c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196CCu; }
        if (ctx->pc != 0x1196CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196CCu; }
        if (ctx->pc != 0x1196CCu) { return; }
    }
    ctx->pc = 0x1196CCu;
label_1196cc:
    // 0x1196cc: 0x2acf0020  slti        $t7, $s6, 0x20
    ctx->pc = 0x1196ccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1196d0: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1196D0u;
    {
        const bool branch_taken_0x1196d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196D0u;
            // 0x1196d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196d0) {
            ctx->pc = 0x1196F4u;
            goto label_1196f4;
        }
    }
    ctx->pc = 0x1196D8u;
    // 0x1196d8: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1196d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x1196dc: 0x167880  sll         $t7, $s6, 2
    ctx->pc = 0x1196dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1196e0: 0x25cef4b8  addiu       $t6, $t6, -0xB48
    ctx->pc = 0x1196e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964408));
    // 0x1196e4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1196e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1196e8: 0x8dedfffc  lw          $t5, -0x4($t7)
    ctx->pc = 0x1196e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x1196ec: 0x160d0047  bne         $s0, $t5, . + 4 + (0x47 << 2)
    ctx->pc = 0x1196ECu;
    {
        const bool branch_taken_0x1196ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 13));
        ctx->pc = 0x1196F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196ECu;
            // 0x1196f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196ec) {
            ctx->pc = 0x11980Cu;
            goto label_11980c;
        }
    }
    ctx->pc = 0x1196F4u;
label_1196f4:
    // 0x1196f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1196f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196f8: 0xc049622  jal         func_125888
    ctx->pc = 0x1196F8u;
    SET_GPR_U32(ctx, 31, 0x119700u);
    ctx->pc = 0x1196FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196F8u;
            // 0x1196fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119700u; }
        if (ctx->pc != 0x119700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119700u; }
        if (ctx->pc != 0x119700u) { return; }
    }
    ctx->pc = 0x119700u;
label_119700:
    // 0x119700: 0x10f503  sra         $fp, $s0, 20
    ctx->pc = 0x119700u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 16), 20));
    // 0x119704: 0x27d3e  dsrl32      $t7, $v0, 20
    ctx->pc = 0x119704u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x119708: 0x31ef07ff  andi        $t7, $t7, 0x7FF
    ctx->pc = 0x119708u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2047);
    // 0x11970c: 0x3cf8023  subu        $s0, $fp, $t7
    ctx->pc = 0x11970cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x119710: 0x2a0e0011  slti        $t6, $s0, 0x11
    ctx->pc = 0x119710u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x119714: 0x15c00040  bnez        $t6, . + 4 + (0x40 << 2)
    ctx->pc = 0x119714u;
    {
        const bool branch_taken_0x119714 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x119718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119714u;
            // 0x119718: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119714) {
            ctx->pc = 0x119818u;
            goto label_119818;
        }
    }
    ctx->pc = 0x11971Cu;
    // 0x11971c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11971cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119720: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119724: 0xdde5f598  ld          $a1, -0xA68($t7)
    ctx->pc = 0x119724u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964632)));
    // 0x119728: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x119728u;
    SET_GPR_U32(ctx, 31, 0x119730u);
    ctx->pc = 0x11972Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119728u;
            // 0x11972c: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119730u; }
        if (ctx->pc != 0x119730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119730u; }
        if (ctx->pc != 0x119730u) { return; }
    }
    ctx->pc = 0x119730u;
label_119730:
    // 0x119730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119734: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119738: 0xc049622  jal         func_125888
    ctx->pc = 0x119738u;
    SET_GPR_U32(ctx, 31, 0x119740u);
    ctx->pc = 0x11973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119738u;
            // 0x11973c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119740u; }
        if (ctx->pc != 0x119740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119740u; }
        if (ctx->pc != 0x119740u) { return; }
    }
    ctx->pc = 0x119740u;
label_119740:
    // 0x119740: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119740u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119744: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x119744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x119748: 0xdde5f5a0  ld          $a1, -0xA60($t7)
    ctx->pc = 0x119748u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964640)));
    // 0x11974c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11974cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119750: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x119750u;
    SET_GPR_U32(ctx, 31, 0x119758u);
    ctx->pc = 0x119754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119750u;
            // 0x119754: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119758u; }
        if (ctx->pc != 0x119758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119758u; }
        if (ctx->pc != 0x119758u) { return; }
    }
    ctx->pc = 0x119758u;
label_119758:
    // 0x119758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11975c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119760: 0xc049622  jal         func_125888
    ctx->pc = 0x119760u;
    SET_GPR_U32(ctx, 31, 0x119768u);
    ctx->pc = 0x119764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119760u;
            // 0x119764: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119768u; }
        if (ctx->pc != 0x119768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119768u; }
        if (ctx->pc != 0x119768u) { return; }
    }
    ctx->pc = 0x119768u;
label_119768:
    // 0x119768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11976c: 0xc049622  jal         func_125888
    ctx->pc = 0x11976Cu;
    SET_GPR_U32(ctx, 31, 0x119774u);
    ctx->pc = 0x119770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11976Cu;
            // 0x119770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119774u; }
        if (ctx->pc != 0x119774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119774u; }
        if (ctx->pc != 0x119774u) { return; }
    }
    ctx->pc = 0x119774u;
label_119774:
    // 0x119774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119778: 0xc049622  jal         func_125888
    ctx->pc = 0x119778u;
    SET_GPR_U32(ctx, 31, 0x119780u);
    ctx->pc = 0x11977Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119778u;
            // 0x11977c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119780u; }
        if (ctx->pc != 0x119780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119780u; }
        if (ctx->pc != 0x119780u) { return; }
    }
    ctx->pc = 0x119780u;
label_119780:
    // 0x119780: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119784: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119788: 0xc049622  jal         func_125888
    ctx->pc = 0x119788u;
    SET_GPR_U32(ctx, 31, 0x119790u);
    ctx->pc = 0x11978Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119788u;
            // 0x11978c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119790u; }
        if (ctx->pc != 0x119790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119790u; }
        if (ctx->pc != 0x119790u) { return; }
    }
    ctx->pc = 0x119790u;
label_119790:
    // 0x119790: 0x27d3e  dsrl32      $t7, $v0, 20
    ctx->pc = 0x119790u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x119794: 0x31ef07ff  andi        $t7, $t7, 0x7FF
    ctx->pc = 0x119794u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2047);
    // 0x119798: 0x3cf8023  subu        $s0, $fp, $t7
    ctx->pc = 0x119798u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x11979c: 0x2a0e0032  slti        $t6, $s0, 0x32
    ctx->pc = 0x11979cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1197a0: 0x15c0001d  bnez        $t6, . + 4 + (0x1D << 2)
    ctx->pc = 0x1197A0u;
    {
        const bool branch_taken_0x1197a0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1197A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1197A0u;
            // 0x1197a4: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197a0) {
            ctx->pc = 0x119818u;
            goto label_119818;
        }
    }
    ctx->pc = 0x1197A8u;
    // 0x1197a8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1197a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1197ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1197acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197b0: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1197B0u;
    SET_GPR_U32(ctx, 31, 0x1197B8u);
    ctx->pc = 0x1197B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1197B0u;
            // 0x1197b4: 0xdde5f5b0  ld          $a1, -0xA50($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197B8u; }
        if (ctx->pc != 0x1197B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197B8u; }
        if (ctx->pc != 0x1197B8u) { return; }
    }
    ctx->pc = 0x1197B8u;
label_1197b8:
    // 0x1197b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1197b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1197bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197c0: 0xc049622  jal         func_125888
    ctx->pc = 0x1197C0u;
    SET_GPR_U32(ctx, 31, 0x1197C8u);
    ctx->pc = 0x1197C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1197C0u;
            // 0x1197c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197C8u; }
        if (ctx->pc != 0x1197C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197C8u; }
        if (ctx->pc != 0x1197C8u) { return; }
    }
    ctx->pc = 0x1197C8u;
label_1197c8:
    // 0x1197c8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1197c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1197cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1197ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197d0: 0xdde5f5b8  ld          $a1, -0xA48($t7)
    ctx->pc = 0x1197d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294964664)));
    // 0x1197d4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1197D4u;
    SET_GPR_U32(ctx, 31, 0x1197DCu);
    ctx->pc = 0x1197D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1197D4u;
            // 0x1197d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197DCu; }
        if (ctx->pc != 0x1197DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197DCu; }
        if (ctx->pc != 0x1197DCu) { return; }
    }
    ctx->pc = 0x1197DCu;
label_1197dc:
    // 0x1197dc: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x1197dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1197e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1197e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197e4: 0xc049622  jal         func_125888
    ctx->pc = 0x1197E4u;
    SET_GPR_U32(ctx, 31, 0x1197ECu);
    ctx->pc = 0x1197E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1197E4u;
            // 0x1197e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197ECu; }
        if (ctx->pc != 0x1197ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197ECu; }
        if (ctx->pc != 0x1197ECu) { return; }
    }
    ctx->pc = 0x1197ECu;
label_1197ec:
    // 0x1197ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1197ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197f0: 0xc049622  jal         func_125888
    ctx->pc = 0x1197F0u;
    SET_GPR_U32(ctx, 31, 0x1197F8u);
    ctx->pc = 0x1197F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1197F0u;
            // 0x1197f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197F8u; }
        if (ctx->pc != 0x1197F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197F8u; }
        if (ctx->pc != 0x1197F8u) { return; }
    }
    ctx->pc = 0x1197F8u;
label_1197f8:
    // 0x1197f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1197f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197fc: 0xc049622  jal         func_125888
    ctx->pc = 0x1197FCu;
    SET_GPR_U32(ctx, 31, 0x119804u);
    ctx->pc = 0x119800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1197FCu;
            // 0x119800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119804u; }
        if (ctx->pc != 0x119804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119804u; }
        if (ctx->pc != 0x119804u) { return; }
    }
    ctx->pc = 0x119804u;
label_119804:
    // 0x119804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119808: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11980c:
    // 0x11980c: 0xc049622  jal         func_125888
    ctx->pc = 0x11980Cu;
    SET_GPR_U32(ctx, 31, 0x119814u);
    ctx->pc = 0x119810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11980Cu;
            // 0x119810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119814u; }
        if (ctx->pc != 0x119814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119814u; }
        if (ctx->pc != 0x119814u) { return; }
    }
    ctx->pc = 0x119814u;
label_119814:
    // 0x119814: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x119814u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_119818:
    // 0x119818: 0xde530000  ld          $s3, 0x0($s2)
    ctx->pc = 0x119818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11981c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119820: 0xc049622  jal         func_125888
    ctx->pc = 0x119820u;
    SET_GPR_U32(ctx, 31, 0x119828u);
    ctx->pc = 0x119824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119820u;
            // 0x119824: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119828u; }
        if (ctx->pc != 0x119828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119828u; }
        if (ctx->pc != 0x119828u) { return; }
    }
    ctx->pc = 0x119828u;
label_119828:
    // 0x119828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11982c: 0xc049622  jal         func_125888
    ctx->pc = 0x11982Cu;
    SET_GPR_U32(ctx, 31, 0x119834u);
    ctx->pc = 0x119830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11982Cu;
            // 0x119830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119834u; }
        if (ctx->pc != 0x119834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119834u; }
        if (ctx->pc != 0x119834u) { return; }
    }
    ctx->pc = 0x119834u;
label_119834:
    // 0x119834: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x119834u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x119838: 0x681000d  bgez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x119838u;
    {
        const bool branch_taken_0x119838 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119838u;
            // 0x11983c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119838) {
            ctx->pc = 0x119870u;
            goto label_119870;
        }
    }
    ctx->pc = 0x119840u;
    // 0x119840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x119840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119844: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x119844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119848: 0xc049622  jal         func_125888
    ctx->pc = 0x119848u;
    SET_GPR_U32(ctx, 31, 0x119850u);
    ctx->pc = 0x11984Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119848u;
            // 0x11984c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119850u; }
        if (ctx->pc != 0x119850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119850u; }
        if (ctx->pc != 0x119850u) { return; }
    }
    ctx->pc = 0x119850u;
label_119850:
    // 0x119850: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x119850u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x119854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119858: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11985c:
    // 0x11985c: 0xc049622  jal         func_125888
    ctx->pc = 0x11985Cu;
    SET_GPR_U32(ctx, 31, 0x119864u);
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119864u; }
        if (ctx->pc != 0x119864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119864u; }
        if (ctx->pc != 0x119864u) { return; }
    }
    ctx->pc = 0x119864u;
label_119864:
    // 0x119864: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x119864u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x119868: 0x1000ff26  b           . + 4 + (-0xDA << 2)
    ctx->pc = 0x119868u;
    {
        const bool branch_taken_0x119868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119868u;
            // 0x11986c: 0x162023  negu        $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119868) {
            ctx->pc = 0x119504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119504;
        }
    }
    ctx->pc = 0x119870u;
label_119870:
    // 0x119870: 0x1000ff24  b           . + 4 + (-0xDC << 2)
    ctx->pc = 0x119870u;
    {
        const bool branch_taken_0x119870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119870u;
            // 0x119874: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119870) {
            ctx->pc = 0x119504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119504;
        }
    }
    ctx->pc = 0x119878u;
label_119878:
    // 0x119878: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119878u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11987c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11987cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119880: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x119880u;
    {
        const bool branch_taken_0x119880 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x119884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119880u;
            // 0x119884: 0x107d03  sra         $t7, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119880) {
            ctx->pc = 0x1198A0u;
            goto label_1198a0;
        }
    }
    ctx->pc = 0x119888u;
    // 0x119888: 0xc049622  jal         func_125888
    ctx->pc = 0x119888u;
    SET_GPR_U32(ctx, 31, 0x119890u);
    ctx->pc = 0x11988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119888u;
            // 0x11988c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119890u; }
        if (ctx->pc != 0x119890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119890u; }
        if (ctx->pc != 0x119890u) { return; }
    }
    ctx->pc = 0x119890u;
label_119890:
    // 0x119890: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x119890u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x119894: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x119894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119898: 0x1000ff1a  b           . + 4 + (-0xE6 << 2)
    ctx->pc = 0x119898u;
    {
        const bool branch_taken_0x119898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119898u;
            // 0x11989c: 0xfe420008  sd          $v0, 0x8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119898) {
            ctx->pc = 0x119504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119504;
        }
    }
    ctx->pc = 0x1198A0u;
label_1198a0:
    // 0x1198a0: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x1198a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1198a4: 0x25f5fbea  addiu       $s5, $t7, -0x416
    ctx->pc = 0x1198a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966250));
    // 0x1198a8: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x1198a8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x1198ac: 0x157d00  sll         $t7, $s5, 20
    ctx->pc = 0x1198acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 20));
    // 0x1198b0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1198b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1198b4: 0x20f7823  subu        $t7, $s0, $t7
    ctx->pc = 0x1198b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x1198b8: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x1198b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x1198bc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1198bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1198c0: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x1198c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198c4: 0x1cf8825  or          $s1, $t6, $t7
    ctx->pc = 0x1198c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1198c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1198c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1198cc:
    // 0x1198cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1198ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198d0: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x1198D0u;
    SET_GPR_U32(ctx, 31, 0x1198D8u);
    ctx->pc = 0x1198D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198D0u;
            // 0x1198d4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198D8u; }
        if (ctx->pc != 0x1198D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198D8u; }
        if (ctx->pc != 0x1198D8u) { return; }
    }
    ctx->pc = 0x1198D8u;
label_1198d8:
    // 0x1198d8: 0xc049776  jal         func_125DD8
    ctx->pc = 0x1198D8u;
    SET_GPR_U32(ctx, 31, 0x1198E0u);
    ctx->pc = 0x1198DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198D8u;
            // 0x1198dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198E0u; }
        if (ctx->pc != 0x1198E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198E0u; }
        if (ctx->pc != 0x1198E0u) { return; }
    }
    ctx->pc = 0x1198E0u;
label_1198e0:
    // 0x1198e0: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1198e0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x1198e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1198e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198e8: 0xc049622  jal         func_125888
    ctx->pc = 0x1198E8u;
    SET_GPR_U32(ctx, 31, 0x1198F0u);
    ctx->pc = 0x1198ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198E8u;
            // 0x1198ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198F0u; }
        if (ctx->pc != 0x1198F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198F0u; }
        if (ctx->pc != 0x1198F0u) { return; }
    }
    ctx->pc = 0x1198F0u;
label_1198f0:
    // 0x1198f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1198f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1198f4: 0x24050417  addiu       $a1, $zero, 0x417
    ctx->pc = 0x1198f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x1198f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1198f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198fc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1198FCu;
    SET_GPR_U32(ctx, 31, 0x119904u);
    ctx->pc = 0x119900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198FCu;
            // 0x119900: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119904u; }
        if (ctx->pc != 0x119904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119904u; }
        if (ctx->pc != 0x119904u) { return; }
    }
    ctx->pc = 0x119904u;
label_119904:
    // 0x119904: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x119904u;
    {
        const bool branch_taken_0x119904 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x119908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119904u;
            // 0x119908: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119904) {
            ctx->pc = 0x1198CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1198cc;
        }
    }
    ctx->pc = 0x11990Cu;
    // 0x11990c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x11990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x119910: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x119910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x119914: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x119914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119918: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x119918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11991c:
    // 0x11991c: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x11991cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119920: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x119920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119924: 0xc049760  jal         func_125D80
    ctx->pc = 0x119924u;
    SET_GPR_U32(ctx, 31, 0x11992Cu);
    ctx->pc = 0x119928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119924u;
            // 0x119928: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11992Cu; }
        if (ctx->pc != 0x11992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11992Cu; }
        if (ctx->pc != 0x11992Cu) { return; }
    }
    ctx->pc = 0x11992Cu;
label_11992c:
    // 0x11992c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11992Cu;
    {
        const bool branch_taken_0x11992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11992Cu;
            // 0x119930: 0x3c090063  lui         $t1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11992c) {
            ctx->pc = 0x119978u;
            goto label_119978;
        }
    }
    ctx->pc = 0x119934u;
    // 0x119934: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x119934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119938: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x119938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11993c: 0x2529f3b0  addiu       $t1, $t1, -0xC50
    ctx->pc = 0x11993cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964144));
    // 0x119940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119944: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119948: 0xc046d54  jal         func_11B550
    ctx->pc = 0x119948u;
    SET_GPR_U32(ctx, 31, 0x119950u);
    ctx->pc = 0x11994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119948u;
            // 0x11994c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B550u;
    if (runtime->hasFunction(0x11B550u)) {
        auto targetFn = runtime->lookupFunction(0x11B550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119950u; }
        if (ctx->pc != 0x119950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B550_0x11b550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119950u; }
        if (ctx->pc != 0x119950u) { return; }
    }
    ctx->pc = 0x119950u;
label_119950:
    // 0x119950: 0x681ffc7  bgez        $s4, . + 4 + (-0x39 << 2)
    ctx->pc = 0x119950u;
    {
        const bool branch_taken_0x119950 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x119954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119950u;
            // 0x119954: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119950) {
            ctx->pc = 0x119870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119870;
        }
    }
    ctx->pc = 0x119958u;
    // 0x119958: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x119958u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11995c: 0xc049622  jal         func_125888
    ctx->pc = 0x11995Cu;
    SET_GPR_U32(ctx, 31, 0x119964u);
    ctx->pc = 0x119960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11995Cu;
            // 0x119960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119964u; }
        if (ctx->pc != 0x119964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119964u; }
        if (ctx->pc != 0x119964u) { return; }
    }
    ctx->pc = 0x119964u;
label_119964:
    // 0x119964: 0xde450008  ld          $a1, 0x8($s2)
    ctx->pc = 0x119964u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x119968: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11996c: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x11996Cu;
    {
        const bool branch_taken_0x11996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11996Cu;
            // 0x119970: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11996c) {
            ctx->pc = 0x11985Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11985c;
        }
    }
    ctx->pc = 0x119974u;
    // 0x119974: 0x0  nop
    ctx->pc = 0x119974u;
    // NOP
label_119978:
    // 0x119978: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x119978u;
    {
        const bool branch_taken_0x119978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119978u;
            // 0x11997c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119978) {
            ctx->pc = 0x11991Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11991c;
        }
    }
    ctx->pc = 0x119980u;
label_119980:
    // 0x119980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119984: 0x440d6000  mfc1        $t5, $f12
    ctx->pc = 0x119984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x119988: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x119988u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11998c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119990: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119990u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x119994: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x119994u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x119998: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x119998u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11999c: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x11999cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x1199a0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1199a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1199a4: 0x1af7024  and         $t6, $t5, $t7
    ctx->pc = 0x1199a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x1199a8: 0x15cc000c  bne         $t6, $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x1199A8u;
    {
        const bool branch_taken_0x1199a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 12));
        ctx->pc = 0x1199ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199A8u;
            // 0x1199ac: 0x18e782a  slt         $t7, $t4, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199a8) {
            ctx->pc = 0x1199DCu;
            goto label_1199dc;
        }
    }
    ctx->pc = 0x1199B0u;
    // 0x1199b0: 0x1da00004  bgtz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1199B0u;
    {
        const bool branch_taken_0x1199b0 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x1199B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199B0u;
            // 0x1199b4: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199b0) {
            ctx->pc = 0x1199C4u;
            goto label_1199c4;
        }
    }
    ctx->pc = 0x1199B8u;
    // 0x1199b8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1199b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1199bc: 0x25eff5f8  addiu       $t7, $t7, -0xA08
    ctx->pc = 0x1199bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964728));
    // 0x1199c0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1199c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1199c4:
    // 0x1199c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1199c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1199c8: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x1199c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1199cc:
    // 0x1199cc: 0xc7b5000c  lwc1        $f21, 0xC($sp)
    ctx->pc = 0x1199ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1199d0: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x1199d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1199d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1199D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1199D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199D4u;
            // 0x1199d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1199DCu;
label_1199dc:
    // 0x1199dc: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1199DCu;
    {
        const bool branch_taken_0x1199dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199DCu;
            // 0x1199e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199dc) {
            ctx->pc = 0x1199FCu;
            goto label_1199fc;
        }
    }
    ctx->pc = 0x1199E4u;
    // 0x1199e4: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x1199e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x1199e8: 0x0  nop
    ctx->pc = 0x1199e8u;
    // NOP
    // 0x1199ec: 0x0  nop
    ctx->pc = 0x1199ecu;
    // NOP
    // 0x1199f0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1199f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x1199f4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1199F4u;
    {
        const bool branch_taken_0x1199f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199F4u;
            // 0x1199f8: 0xc7b60010  lwc1        $f22, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199f4) {
            ctx->pc = 0x1199CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1199cc;
        }
    }
    ctx->pc = 0x1199FCu;
label_1199fc:
    // 0x1199fc: 0x3c0f3eff  lui         $t7, 0x3EFF
    ctx->pc = 0x1199fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16127 << 16));
    // 0x119a00: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119a00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x119a04: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x119a04u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x119a08: 0x15e00049  bnez        $t7, . + 4 + (0x49 << 2)
    ctx->pc = 0x119A08u;
    {
        const bool branch_taken_0x119a08 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119A08u;
            // 0x119a0c: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a08) {
            ctx->pc = 0x119B30u;
            goto label_119b30;
        }
    }
    ctx->pc = 0x119A10u;
    // 0x119a10: 0x25eff5fc  addiu       $t7, $t7, -0xA04
    ctx->pc = 0x119a10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964732));
    // 0x119a14: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119a18: 0x3c0f2300  lui         $t7, 0x2300
    ctx->pc = 0x119a18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8960 << 16));
    // 0x119a1c: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x119a1cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x119a20: 0x11e0ffe8  beqz        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x119A20u;
    {
        const bool branch_taken_0x119a20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119A20u;
            // 0x119a24: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a20) {
            ctx->pc = 0x1199C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1199c4;
        }
    }
    ctx->pc = 0x119A28u;
    // 0x119a28: 0x460c6542  mul.s       $f21, $f12, $f12
    ctx->pc = 0x119a28u;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x119a2c: 0x25eff600  addiu       $t7, $t7, -0xA00
    ctx->pc = 0x119a2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964736));
    // 0x119a30: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119a34: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119a34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119a38: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119a3c: 0x25eff604  addiu       $t7, $t7, -0x9FC
    ctx->pc = 0x119a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964740));
    // 0x119a40: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119a44: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119a44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119a48: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119a4c: 0x25eff608  addiu       $t7, $t7, -0x9F8
    ctx->pc = 0x119a4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964744));
    // 0x119a50: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119a54: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119a54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119a58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119a5c: 0x25eff60c  addiu       $t7, $t7, -0x9F4
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964748));
    // 0x119a60: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119a64: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119a64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119a68: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119a68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119a6c: 0x25eff610  addiu       $t7, $t7, -0x9F0
    ctx->pc = 0x119a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964752));
    // 0x119a70: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119a74: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119a78: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119a78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119a7c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119a80: 0x25eff614  addiu       $t7, $t7, -0x9EC
    ctx->pc = 0x119a80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964756));
    // 0x119a84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119a88: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119a8c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119a90: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119a90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119a94: 0x25eff618  addiu       $t7, $t7, -0x9E8
    ctx->pc = 0x119a94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964760));
    // 0x119a98: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119a9c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119aa0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119aa4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119aa8: 0x25eff61c  addiu       $t7, $t7, -0x9E4
    ctx->pc = 0x119aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964764));
    // 0x119aac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119ab0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119ab4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ab8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119ab8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119abc: 0x25eff620  addiu       $t7, $t7, -0x9E0
    ctx->pc = 0x119abcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964768));
    // 0x119ac0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119ac4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119ac8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119acc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119accu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ad0: 0x25eff624  addiu       $t7, $t7, -0x9DC
    ctx->pc = 0x119ad0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964772));
    // 0x119ad4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119ad8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119adc: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x119adcu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119ae0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119ae0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ae4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119ae8: 0x25eff628  addiu       $t7, $t7, -0x9D8
    ctx->pc = 0x119ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964776));
    // 0x119aec: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119af0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119af4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119af4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119af8: 0x25eff62c  addiu       $t7, $t7, -0x9D4
    ctx->pc = 0x119af8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964780));
    // 0x119afc: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x119afcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119b00: 0x0  nop
    ctx->pc = 0x119b00u;
    // NOP
    // 0x119b04: 0x0  nop
    ctx->pc = 0x119b04u;
    // NOP
    // 0x119b08: 0x4616a003  div.s       $f0, $f20, $f22
    ctx->pc = 0x119b08u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[22];
    // 0x119b0c: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x119b0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x119b10: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119b14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x119b14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x119b18: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119b18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119b1c: 0x25eff5fc  addiu       $t7, $t7, -0xA04
    ctx->pc = 0x119b1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964732));
    // 0x119b20: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x119b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_119b24:
    // 0x119b24: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119b28: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x119B28u;
    {
        const bool branch_taken_0x119b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B28u;
            // 0x119b2c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b28) {
            ctx->pc = 0x1199C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1199c4;
        }
    }
    ctx->pc = 0x119B30u;
label_119b30:
    // 0x119b30: 0x5a10049  bgez        $t5, . + 4 + (0x49 << 2)
    ctx->pc = 0x119B30u;
    {
        const bool branch_taken_0x119b30 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x119B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B30u;
            // 0x119b34: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b30) {
            ctx->pc = 0x119C58u;
            goto label_119c58;
        }
    }
    ctx->pc = 0x119B38u;
    // 0x119b38: 0x25eff624  addiu       $t7, $t7, -0x9DC
    ctx->pc = 0x119b38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964772));
    // 0x119b3c: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x119b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x119b40: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119b40u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119b44: 0x46046080  add.s       $f2, $f12, $f4
    ctx->pc = 0x119b44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x119b48: 0x25eff630  addiu       $t7, $t7, -0x9D0
    ctx->pc = 0x119b48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964784));
    // 0x119b4c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119b50: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119b50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119b54: 0x46011542  mul.s       $f21, $f2, $f1
    ctx->pc = 0x119b54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x119b58: 0x25eff600  addiu       $t7, $t7, -0xA00
    ctx->pc = 0x119b58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964736));
    // 0x119b5c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119b60: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119b60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119b64: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119b68: 0x25eff604  addiu       $t7, $t7, -0x9FC
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964740));
    // 0x119b6c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x119b6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x119b70: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119b74: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119b74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119b78: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119b7c: 0x25eff608  addiu       $t7, $t7, -0x9F8
    ctx->pc = 0x119b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964744));
    // 0x119b80: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119b84: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119b84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119b88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119b8c: 0x25eff60c  addiu       $t7, $t7, -0x9F4
    ctx->pc = 0x119b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964748));
    // 0x119b90: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119b94: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119b94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119b98: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119b98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119b9c: 0x25eff610  addiu       $t7, $t7, -0x9F0
    ctx->pc = 0x119b9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964752));
    // 0x119ba0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119ba4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119ba8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119bac: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119bacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119bb0: 0x25eff614  addiu       $t7, $t7, -0x9EC
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964756));
    // 0x119bb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119bb8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119bbc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119bc0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119bc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119bc4: 0x25eff618  addiu       $t7, $t7, -0x9E8
    ctx->pc = 0x119bc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964760));
    // 0x119bc8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119bcc: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119bd0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119bd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119bd4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119bd8: 0x25eff61c  addiu       $t7, $t7, -0x9E4
    ctx->pc = 0x119bd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964764));
    // 0x119bdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119be0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119be4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119be8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119be8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119bec: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119bf0: 0x25eff620  addiu       $t7, $t7, -0x9E0
    ctx->pc = 0x119bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964768));
    // 0x119bf4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119bf8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119bfc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119bfcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119c00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119c04: 0x25eff628  addiu       $t7, $t7, -0x9D8
    ctx->pc = 0x119c04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964776));
    // 0x119c08: 0x46040d80  add.s       $f22, $f1, $f4
    ctx->pc = 0x119c08u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x119c0c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119c10: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119c14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119c18: 0xc046c86  jal         func_11B218
    ctx->pc = 0x119C18u;
    SET_GPR_U32(ctx, 31, 0x119C20u);
    ctx->pc = 0x119C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C18u;
            // 0x119c1c: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B218u;
    if (runtime->hasFunction(0x11B218u)) {
        auto targetFn = runtime->lookupFunction(0x11B218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C20u; }
        if (ctx->pc != 0x119C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B218_0x11b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C20u; }
        if (ctx->pc != 0x119C20u) { return; }
    }
    ctx->pc = 0x119C20u;
label_119c20:
    // 0x119c20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x119c20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x119c24: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119c24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119c28: 0x25eff62c  addiu       $t7, $t7, -0x9D4
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964780));
    // 0x119c2c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119c30: 0x0  nop
    ctx->pc = 0x119c30u;
    // NOP
    // 0x119c34: 0x0  nop
    ctx->pc = 0x119c34u;
    // NOP
    // 0x119c38: 0x4616a003  div.s       $f0, $f20, $f22
    ctx->pc = 0x119c38u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[22];
    // 0x119c3c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119c40: 0x25eff5f8  addiu       $t7, $t7, -0xA08
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964728));
    // 0x119c44: 0x460c0082  mul.s       $f2, $f0, $f12
    ctx->pc = 0x119c44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x119c48: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x119c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x119c4c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x119c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x119c50: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x119C50u;
    {
        const bool branch_taken_0x119c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C50u;
            // 0x119c54: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c50) {
            ctx->pc = 0x119B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119b24;
        }
    }
    ctx->pc = 0x119C58u;
label_119c58:
    // 0x119c58: 0x25eff624  addiu       $t7, $t7, -0x9DC
    ctx->pc = 0x119c58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964772));
    // 0x119c5c: 0xc5f40000  lwc1        $f20, 0x0($t7)
    ctx->pc = 0x119c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119c60: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119c64: 0x460ca041  sub.s       $f1, $f20, $f12
    ctx->pc = 0x119c64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x119c68: 0x25eff630  addiu       $t7, $t7, -0x9D0
    ctx->pc = 0x119c68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964784));
    // 0x119c6c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119c70: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x119c70u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x119c74: 0xc046c86  jal         func_11B218
    ctx->pc = 0x119C74u;
    SET_GPR_U32(ctx, 31, 0x119C7Cu);
    ctx->pc = 0x119C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C74u;
            // 0x119c78: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B218u;
    if (runtime->hasFunction(0x11B218u)) {
        auto targetFn = runtime->lookupFunction(0x11B218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C7Cu; }
        if (ctx->pc != 0x119C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B218_0x11b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C7Cu; }
        if (ctx->pc != 0x119C7Cu) { return; }
    }
    ctx->pc = 0x119C7Cu;
label_119c7c:
    // 0x119c7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x119c7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x119c80: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119c80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119c84: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x119c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x119c88: 0x25eff600  addiu       $t7, $t7, -0xA00
    ctx->pc = 0x119c88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964736));
    // 0x119c8c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119c90: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x119c90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x119c94: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119c98: 0x1cf6824  and         $t5, $t6, $t7
    ctx->pc = 0x119c98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x119c9c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119c9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ca0: 0x25eff604  addiu       $t7, $t7, -0x9FC
    ctx->pc = 0x119ca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964740));
    // 0x119ca4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119ca8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119cac: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119cb0: 0x25eff608  addiu       $t7, $t7, -0x9F8
    ctx->pc = 0x119cb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964744));
    // 0x119cb4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119cb8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119cbc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119cbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119cc0: 0x25eff60c  addiu       $t7, $t7, -0x9F4
    ctx->pc = 0x119cc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964748));
    // 0x119cc4: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x119cc4u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119cc8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119ccc: 0x460260c0  add.s       $f3, $f12, $f2
    ctx->pc = 0x119cccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x119cd0: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x119cd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x119cd4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119cd8: 0x4604a901  sub.s       $f4, $f21, $f4
    ctx->pc = 0x119cd8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[21], ctx->f[4]);
    // 0x119cdc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x119cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x119ce0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ce4: 0x25eff610  addiu       $t7, $t7, -0x9F0
    ctx->pc = 0x119ce4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964752));
    // 0x119ce8: 0x0  nop
    ctx->pc = 0x119ce8u;
    // NOP
    // 0x119cec: 0x0  nop
    ctx->pc = 0x119cecu;
    // NOP
    // 0x119cf0: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x119cf0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[3];
    // 0x119cf4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119cf8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119cfc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119d00: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119d00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119d04: 0x25eff614  addiu       $t7, $t7, -0x9EC
    ctx->pc = 0x119d04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964756));
    // 0x119d08: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119d0c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119d10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x119d10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x119d14: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119d14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119d18: 0x25eff618  addiu       $t7, $t7, -0x9E8
    ctx->pc = 0x119d18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964760));
    // 0x119d1c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119d20: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119d20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119d24: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119d24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119d28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119d2c: 0x25eff61c  addiu       $t7, $t7, -0x9E4
    ctx->pc = 0x119d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964764));
    // 0x119d30: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119d34: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119d34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119d38: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119d38u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119d3c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119d40: 0x25eff620  addiu       $t7, $t7, -0x9E0
    ctx->pc = 0x119d40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964768));
    // 0x119d44: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119d48: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x119d48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x119d4c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119d4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119d50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119d54: 0x25eff628  addiu       $t7, $t7, -0x9D8
    ctx->pc = 0x119d54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964776));
    // 0x119d58: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x119d58u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x119d5c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x119d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119d60: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119d64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119d68: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x119d68u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x119d6c: 0x0  nop
    ctx->pc = 0x119d6cu;
    // NOP
    // 0x119d70: 0x0  nop
    ctx->pc = 0x119d70u;
    // NOP
    // 0x119d74: 0x4616a003  div.s       $f0, $f20, $f22
    ctx->pc = 0x119d74u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[22];
    // 0x119d78: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x119d78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x119d7c: 0x46040800  add.s       $f0, $f1, $f4
    ctx->pc = 0x119d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x119d80: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x119d80u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119d84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x119d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x119d88: 0x1000ff0e  b           . + 4 + (-0xF2 << 2)
    ctx->pc = 0x119D88u;
    {
        const bool branch_taken_0x119d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D88u;
            // 0x119d8c: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d88) {
            ctx->pc = 0x1199C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1199c4;
        }
    }
    ctx->pc = 0x119D90u;
label_119d90:
    // 0x119d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119d94: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x119d94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x119d98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119d9c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119d9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x119da0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119da4: 0x3c0e3f80  lui         $t6, 0x3F80
    ctx->pc = 0x119da4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16256 << 16));
    // 0x119da8: 0x44116000  mfc1        $s1, $f12
    ctx->pc = 0x119da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x119dac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119db0: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x119db0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x119db4: 0x22f8024  and         $s0, $s1, $t7
    ctx->pc = 0x119db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x119db8: 0xe7b5001c  swc1        $f21, 0x1C($sp)
    ctx->pc = 0x119db8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x119dbc: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x119dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x119dc0: 0x160e0012  bne         $s0, $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x119DC0u;
    {
        const bool branch_taken_0x119dc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 14));
        ctx->pc = 0x119DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DC0u;
            // 0x119dc4: 0x1d0782a  slt         $t7, $t6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119dc0) {
            ctx->pc = 0x119E0Cu;
            goto label_119e0c;
        }
    }
    ctx->pc = 0x119DC8u;
    // 0x119dc8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119dc8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119dcc: 0x25eff674  addiu       $t7, $t7, -0x98C
    ctx->pc = 0x119dccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964852));
    // 0x119dd0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119dd4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119dd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119dd8: 0x4600601a  mula.s      $f12, $f0
    ctx->pc = 0x119dd8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x119ddc: 0x25eff678  addiu       $t7, $t7, -0x988
    ctx->pc = 0x119ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964856));
    // 0x119de0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119de4: 0x4601611c  madd.s      $f4, $f12, $f1
    ctx->pc = 0x119de4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
label_119de8:
    // 0x119de8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x119de8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_119dec:
    // 0x119dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119df8: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x119df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x119dfc: 0xc7b5001c  lwc1        $f21, 0x1C($sp)
    ctx->pc = 0x119dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x119e00: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x119e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119e04: 0x3e00008  jr          $ra
    ctx->pc = 0x119E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E04u;
            // 0x119e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119E0Cu;
label_119e0c:
    // 0x119e0c: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x119E0Cu;
    {
        const bool branch_taken_0x119e0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E0Cu;
            // 0x119e10: 0x3c0f3eff  lui         $t7, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e0c) {
            ctx->pc = 0x119E2Cu;
            goto label_119e2c;
        }
    }
    ctx->pc = 0x119E14u;
    // 0x119e14: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x119e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x119e18: 0x0  nop
    ctx->pc = 0x119e18u;
    // NOP
    // 0x119e1c: 0x0  nop
    ctx->pc = 0x119e1cu;
    // NOP
    // 0x119e20: 0x46000103  div.s       $f4, $f0, $f0
    ctx->pc = 0x119e20u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[0];
    // 0x119e24: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x119E24u;
    {
        const bool branch_taken_0x119e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E24u;
            // 0x119e28: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e24) {
            ctx->pc = 0x119DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119dec;
        }
    }
    ctx->pc = 0x119E2Cu;
label_119e2c:
    // 0x119e2c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119e2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x119e30: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x119e30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119e34: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x119E34u;
    {
        const bool branch_taken_0x119e34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E34u;
            // 0x119e38: 0x3c0f31ff  lui         $t7, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e34) {
            ctx->pc = 0x119E74u;
            goto label_119e74;
        }
    }
    ctx->pc = 0x119E3Cu;
    // 0x119e3c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119e3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x119e40: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x119e40u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119e44: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x119E44u;
    {
        const bool branch_taken_0x119e44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E44u;
            // 0x119e48: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e44) {
            ctx->pc = 0x11A040u;
            goto label_11a040;
        }
    }
    ctx->pc = 0x119E4Cu;
    // 0x119e4c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119e50: 0x25eff67c  addiu       $t7, $t7, -0x984
    ctx->pc = 0x119e50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964860));
    // 0x119e54: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119e58: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119e58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119e5c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x119e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x119e60: 0x25eff680  addiu       $t7, $t7, -0x980
    ctx->pc = 0x119e60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964864));
    // 0x119e64: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119e68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x119e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119e6c: 0x4501ffde  bc1t        . + 4 + (-0x22 << 2)
    ctx->pc = 0x119E6Cu;
    {
        const bool branch_taken_0x119e6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x119E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E6Cu;
            // 0x119e70: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e6c) {
            ctx->pc = 0x119DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119de8;
        }
    }
    ctx->pc = 0x119E74u;
label_119e74:
    // 0x119e74: 0xc047740  jal         func_11DD00
    ctx->pc = 0x119E74u;
    SET_GPR_U32(ctx, 31, 0x119E7Cu);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E7Cu; }
        if (ctx->pc != 0x119E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E7Cu; }
        if (ctx->pc != 0x119E7Cu) { return; }
    }
    ctx->pc = 0x119E7Cu;
label_119e7c:
    // 0x119e7c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119e80: 0x25eff680  addiu       $t7, $t7, -0x980
    ctx->pc = 0x119e80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964864));
    // 0x119e84: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x119e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x119e88: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119e88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119e8c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x119e8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x119e90: 0x25eff6ac  addiu       $t7, $t7, -0x954
    ctx->pc = 0x119e90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964908));
    // 0x119e94: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119e98: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x119e98u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x119e9c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ea0: 0x25eff684  addiu       $t7, $t7, -0x97C
    ctx->pc = 0x119ea0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964868));
    // 0x119ea4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119ea8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x119ea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x119eac: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119eacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119eb0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x119eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x119eb4: 0x25eff688  addiu       $t7, $t7, -0x978
    ctx->pc = 0x119eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964872));
    // 0x119eb8: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119ebc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ec0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x119ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x119ec4: 0x25eff68c  addiu       $t7, $t7, -0x974
    ctx->pc = 0x119ec4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964876));
    // 0x119ec8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119ecc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119eccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ed0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119ed4: 0x25eff690  addiu       $t7, $t7, -0x970
    ctx->pc = 0x119ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964880));
    // 0x119ed8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119edc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119edcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ee0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119ee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119ee4: 0x25eff694  addiu       $t7, $t7, -0x96C
    ctx->pc = 0x119ee4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964884));
    // 0x119ee8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x119ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x119eec: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119ef0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x119ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x119ef4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119ef8: 0x25eff698  addiu       $t7, $t7, -0x968
    ctx->pc = 0x119ef8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964888));
    // 0x119efc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119f00: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119f04: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119f04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119f08: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119f08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119f0c: 0x25eff69c  addiu       $t7, $t7, -0x964
    ctx->pc = 0x119f0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964892));
    // 0x119f10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x119f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x119f14: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119f18: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x119f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x119f1c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119f20: 0x25eff6a0  addiu       $t7, $t7, -0x960
    ctx->pc = 0x119f20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964896));
    // 0x119f24: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119f28: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x119f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119f2c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119f2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119f30: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119f30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119f34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x119f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x119f38: 0x25eff6a4  addiu       $t7, $t7, -0x95C
    ctx->pc = 0x119f38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964900));
    // 0x119f3c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119f40: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x119f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x119f44: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119f44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119f48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119f4c: 0x25eff6a8  addiu       $t7, $t7, -0x958
    ctx->pc = 0x119f4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964904));
    // 0x119f50: 0x46040d80  add.s       $f22, $f1, $f4
    ctx->pc = 0x119f50u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x119f54: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x119f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x119f58: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119f5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119f60: 0xc046c86  jal         func_11B218
    ctx->pc = 0x119F60u;
    SET_GPR_U32(ctx, 31, 0x119F68u);
    ctx->pc = 0x119F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F60u;
            // 0x119f64: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B218u;
    if (runtime->hasFunction(0x11B218u)) {
        auto targetFn = runtime->lookupFunction(0x11B218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F68u; }
        if (ctx->pc != 0x119F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B218_0x11b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F68u; }
        if (ctx->pc != 0x119F68u) { return; }
    }
    ctx->pc = 0x119F68u;
label_119f68:
    // 0x119f68: 0x3c0f3f79  lui         $t7, 0x3F79
    ctx->pc = 0x119f68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16249 << 16));
    // 0x119f6c: 0x35ef9999  ori         $t7, $t7, 0x9999
    ctx->pc = 0x119f6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)39321);
    // 0x119f70: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x119f70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119f74: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x119F74u;
    {
        const bool branch_taken_0x119f74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F74u;
            // 0x119f78: 0x440d0000  mfc1        $t5, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f74) {
            ctx->pc = 0x119FC8u;
            goto label_119fc8;
        }
    }
    ctx->pc = 0x119F7Cu;
    // 0x119f7c: 0x0  nop
    ctx->pc = 0x119f7cu;
    // NOP
    // 0x119f80: 0x0  nop
    ctx->pc = 0x119f80u;
    // NOP
    // 0x119f84: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x119f84u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[22];
    // 0x119f88: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119f88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119f8c: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x119f8cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119f90: 0x25eff678  addiu       $t7, $t7, -0x988
    ctx->pc = 0x119f90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964856));
    // 0x119f94: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x119f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x119f98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x119f98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x119f9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x119f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x119fa0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119fa4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119fa8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x119fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x119fac: 0x25eff674  addiu       $t7, $t7, -0x98C
    ctx->pc = 0x119facu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964852));
    // 0x119fb0: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119fb4: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x119fb4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_119fb8:
    // 0x119fb8: 0x1e20ff8b  bgtz        $s1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x119FB8u;
    {
        const bool branch_taken_0x119fb8 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x119FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119FB8u;
            // 0x119fbc: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fb8) {
            ctx->pc = 0x119DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119de8;
        }
    }
    ctx->pc = 0x119FC0u;
    // 0x119fc0: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x119FC0u;
    {
        const bool branch_taken_0x119fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119FC0u;
            // 0x119fc4: 0x4600a107  neg.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fc0) {
            ctx->pc = 0x119DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119de8;
        }
    }
    ctx->pc = 0x119FC8u;
label_119fc8:
    // 0x119fc8: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x119fc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x119fcc: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x119fccu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119fd0: 0x1af7024  and         $t6, $t5, $t7
    ctx->pc = 0x119fd0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x119fd4: 0x0  nop
    ctx->pc = 0x119fd4u;
    // NOP
    // 0x119fd8: 0x0  nop
    ctx->pc = 0x119fd8u;
    // NOP
    // 0x119fdc: 0x4616a903  div.s       $f4, $f21, $f22
    ctx->pc = 0x119fdcu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[4] = ctx->f[21] / ctx->f[22];
    // 0x119fe0: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x119fe0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119fe4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x119fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x119fe8: 0x448e3000  mtc1        $t6, $f6
    ctx->pc = 0x119fe8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119fec: 0x25eff6b0  addiu       $t7, $t7, -0x950
    ctx->pc = 0x119fecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964912));
    // 0x119ff0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x119ff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x119ff4: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x119ff4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x119ff8: 0xc5e50000  lwc1        $f5, 0x0($t7)
    ctx->pc = 0x119ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x119ffc: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x119ffcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x11a000: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a000u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a004: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x11a004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x11a008: 0x25eff678  addiu       $t7, $t7, -0x988
    ctx->pc = 0x11a008u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964856));
    // 0x11a00c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x11a00cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x11a010: 0x0  nop
    ctx->pc = 0x11a010u;
    // NOP
    // 0x11a014: 0x0  nop
    ctx->pc = 0x11a014u;
    // NOP
    // 0x11a018: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x11a018u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x11a01c: 0x46002d81  sub.s       $f22, $f5, $f0
    ctx->pc = 0x11a01cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x11a020: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11a020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11a024: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a028: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11a028u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x11a02c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a02cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a030: 0x46001541  sub.s       $f21, $f2, $f0
    ctx->pc = 0x11a030u;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11a034: 0x4616a841  sub.s       $f1, $f21, $f22
    ctx->pc = 0x11a034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x11a038: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x11A038u;
    {
        const bool branch_taken_0x11a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A038u;
            // 0x11a03c: 0x46012d01  sub.s       $f20, $f5, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a038) {
            ctx->pc = 0x119FB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119fb8;
        }
    }
    ctx->pc = 0x11A040u;
label_11a040:
    // 0x11a040: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x11a040u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11a044: 0x25eff684  addiu       $t7, $t7, -0x97C
    ctx->pc = 0x11a044u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964868));
    // 0x11a048: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a04c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a04cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a050: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11a050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11a054: 0x25eff688  addiu       $t7, $t7, -0x978
    ctx->pc = 0x11a054u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964872));
    // 0x11a058: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a05c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a05cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a060: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11a060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11a064: 0x25eff68c  addiu       $t7, $t7, -0x974
    ctx->pc = 0x11a064u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964876));
    // 0x11a068: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a06c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a06cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a070: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a074: 0x25eff690  addiu       $t7, $t7, -0x970
    ctx->pc = 0x11a074u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964880));
    // 0x11a078: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a07c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a07cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a080: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a084: 0x25eff694  addiu       $t7, $t7, -0x96C
    ctx->pc = 0x11a084u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964884));
    // 0x11a088: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11a088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11a08c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a090: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11a090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11a094: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a094u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a098: 0x25eff698  addiu       $t7, $t7, -0x968
    ctx->pc = 0x11a098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964888));
    // 0x11a09c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a0a0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a0a4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a0a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a0a8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a0a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a0ac: 0x25eff69c  addiu       $t7, $t7, -0x964
    ctx->pc = 0x11a0acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964892));
    // 0x11a0b0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11a0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11a0b4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a0b8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11a0b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11a0bc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a0bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a0c0: 0x25eff6a0  addiu       $t7, $t7, -0x960
    ctx->pc = 0x11a0c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964896));
    // 0x11a0c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a0c8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a0cc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a0ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a0d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a0d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a0d4: 0x25eff6a4  addiu       $t7, $t7, -0x95C
    ctx->pc = 0x11a0d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964900));
    // 0x11a0d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11a0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11a0dc: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a0e0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11a0e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11a0e4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a0e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a0e8: 0x25eff680  addiu       $t7, $t7, -0x980
    ctx->pc = 0x11a0e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964864));
    // 0x11a0ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a0f0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11a0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a0f4: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x11a0f4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a0f8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a0f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a0fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11a0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11a100: 0x25eff6a8  addiu       $t7, $t7, -0x958
    ctx->pc = 0x11a100u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964904));
    // 0x11a104: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a10c: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x11a10cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11a110: 0x0  nop
    ctx->pc = 0x11a110u;
    // NOP
    // 0x11a114: 0x0  nop
    ctx->pc = 0x11a114u;
    // NOP
    // 0x11a118: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x11a118u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[22];
    // 0x11a11c: 0x46156002  mul.s       $f0, $f12, $f21
    ctx->pc = 0x11a11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x11a120: 0x1000ff31  b           . + 4 + (-0xCF << 2)
    ctx->pc = 0x11A120u;
    {
        const bool branch_taken_0x11a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A120u;
            // 0x11a124: 0x46006100  add.s       $f4, $f12, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a120) {
            ctx->pc = 0x119DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119de8;
        }
    }
    ctx->pc = 0x11A128u;
label_11a128:
    // 0x11a128: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11a128u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11a12c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a130: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11a130u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11a134: 0x440c6800  mfc1        $t4, $f13
    ctx->pc = 0x11a134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11a138: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11a138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11a13c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11a13cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11a140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a144: 0x18e4824  and         $t1, $t4, $t6
    ctx->pc = 0x11a144u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x11a148: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11a14c: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x11a14cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
    // 0x11a150: 0x158f0005  bne         $t4, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A150u;
    {
        const bool branch_taken_0x11a150 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 15));
        ctx->pc = 0x11A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A150u;
            // 0x11a154: 0x16e5024  and         $t2, $t3, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a150) {
            ctx->pc = 0x11A168u;
            goto label_11a168;
        }
    }
    ctx->pc = 0x11A158u;
    // 0x11a158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a15c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11a15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a160: 0x8047656  j           func_11D958
    ctx->pc = 0x11A160u;
    ctx->pc = 0x11A164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A160u;
            // 0x11a164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D958u;
    if (runtime->hasFunction(0x11D958u)) {
        auto targetFn = runtime->lookupFunction(0x11D958u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0011D958_0x11d958(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11A168u;
label_11a168:
    // 0x11a168: 0xc7f83  sra         $t7, $t4, 30
    ctx->pc = 0x11a168u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 12), 30));
    // 0x11a16c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11a16cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11a170: 0x31ef0002  andi        $t7, $t7, 0x2
    ctx->pc = 0x11a170u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x11a174: 0xb6fc2  srl         $t5, $t3, 31
    ctx->pc = 0x11a174u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x11a178: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11a178u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11a17c: 0x1ca702a  slt         $t6, $t6, $t2
    ctx->pc = 0x11a17cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x11a180: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x11A180u;
    {
        const bool branch_taken_0x11a180 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A180u;
            // 0x11a184: 0x1af8025  or          $s0, $t5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a180) {
            ctx->pc = 0x11A1C8u;
            goto label_11a1c8;
        }
    }
    ctx->pc = 0x11A188u;
    // 0x11a188: 0x3c0e4049  lui         $t6, 0x4049
    ctx->pc = 0x11a188u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16457 << 16));
    // 0x11a18c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11a18cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a190: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A190u;
    {
        const bool branch_taken_0x11a190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x11A194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A190u;
            // 0x11a194: 0x35ce0fda  ori         $t6, $t6, 0xFDA (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4058);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a190) {
            ctx->pc = 0x11A1B4u;
            goto label_11a1b4;
        }
    }
    ctx->pc = 0x11A198u;
    // 0x11a198: 0x2a0f0003  slti        $t7, $s0, 0x3
    ctx->pc = 0x11a198u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11a19c: 0x51e0004f  beql        $t7, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x11A19Cu;
    {
        const bool branch_taken_0x11a19c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a19c) {
            ctx->pc = 0x11A1A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A19Cu;
            // 0x11a1a0: 0x3c0ec049  lui         $t6, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A2DCu;
            goto label_11a2dc;
        }
    }
    ctx->pc = 0x11A1A4u;
    // 0x11a1a4: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A1A4u;
    {
        const bool branch_taken_0x11a1a4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11A1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1A4u;
            // 0x11a1a8: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1a4) {
            ctx->pc = 0x11A1CCu;
            goto label_11a1cc;
        }
    }
    ctx->pc = 0x11A1ACu;
    // 0x11a1ac: 0x0  nop
    ctx->pc = 0x11a1acu;
    // NOP
label_11a1b0:
    // 0x11a1b0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11a1b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_11a1b4:
    // 0x11a1b4: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x11a1b4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a1b8:
    // 0x11a1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a1bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11a1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x11A1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1C0u;
            // 0x11a1c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A1C8u;
label_11a1c8:
    // 0x11a1c8: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x11a1c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
label_11a1cc:
    // 0x11a1cc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a1ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a1d0: 0x1e9782a  slt         $t7, $t7, $t1
    ctx->pc = 0x11a1d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11a1d4: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x11A1D4u;
    {
        const bool branch_taken_0x11a1d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1D4u;
            // 0x11a1d8: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1d4) {
            ctx->pc = 0x11A214u;
            goto label_11a214;
        }
    }
    ctx->pc = 0x11A1DCu;
    // 0x11a1dc: 0x3c0fbfc9  lui         $t7, 0xBFC9
    ctx->pc = 0x11a1dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49097 << 16));
    // 0x11a1e0: 0x35ef0fda  ori         $t7, $t7, 0xFDA
    ctx->pc = 0x11a1e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4058);
    // 0x11a1e4: 0x48cfb000  ctc2.ni     $t7, $vi22
    ctx->pc = 0x11a1e4u;
    ctx->vu0_clip_flags2 = GPR_U32(ctx, 15);
    // 0x11a1e8: 0x4a0002ff  vnop
    ctx->pc = 0x11a1e8u;
    // NOP operation, no action needed for VU0
    // 0x11a1ec: 0x5600004  bltz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A1ECu;
    {
        const bool branch_taken_0x11a1ec = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x11A1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1ECu;
            // 0x11a1f0: 0x3c0f3fc9  lui         $t7, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1ec) {
            ctx->pc = 0x11A200u;
            goto label_11a200;
        }
    }
    ctx->pc = 0x11A1F4u;
    // 0x11a1f4: 0x35ef0fda  ori         $t7, $t7, 0xFDA
    ctx->pc = 0x11a1f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4058);
    // 0x11a1f8: 0x48cfb000  ctc2.ni     $t7, $vi22
    ctx->pc = 0x11a1f8u;
    ctx->vu0_clip_flags2 = GPR_U32(ctx, 15);
    // 0x11a1fc: 0x4a0002ff  vnop
    ctx->pc = 0x11a1fcu;
    // NOP operation, no action needed for VU0
label_11a200:
    // 0x11a200: 0x4a0003bf  vwaitq
    ctx->pc = 0x11a200u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11a204: 0x484eb000  cfc2.ni     $t6, $vi22
    ctx->pc = 0x11a204u;
    SET_GPR_U32(ctx, 14, ctx->vu0_clip_flags2);
    // 0x11a208: 0x4a0002ff  vnop
    ctx->pc = 0x11a208u;
    // NOP operation, no action needed for VU0
    // 0x11a20c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x11A20Cu;
    {
        const bool branch_taken_0x11a20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A20Cu;
            // 0x11a210: 0x448e0000  mtc1        $t6, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a20c) {
            ctx->pc = 0x11A1B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a1b8;
        }
    }
    ctx->pc = 0x11A214u;
label_11a214:
    // 0x11a214: 0x1497023  subu        $t6, $t2, $t1
    ctx->pc = 0x11a214u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x11a218: 0x25eff6d0  addiu       $t7, $t7, -0x930
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964944));
    // 0x11a21c: 0xe75c3  sra         $t6, $t6, 23
    ctx->pc = 0x11a21cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 23));
    // 0x11a220: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a224: 0x29cf003d  slti        $t7, $t6, 0x3D
    ctx->pc = 0x11a224u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x11a228: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11A228u;
    {
        const bool branch_taken_0x11a228 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A228u;
            // 0x11a22c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a228) {
            ctx->pc = 0x11A264u;
            goto label_11a264;
        }
    }
    ctx->pc = 0x11A230u;
    // 0x11a230: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A230u;
    {
        const bool branch_taken_0x11a230 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x11A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A230u;
            // 0x11a234: 0x29cfffc4  slti        $t7, $t6, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a230) {
            ctx->pc = 0x11A240u;
            goto label_11a240;
        }
    }
    ctx->pc = 0x11A238u;
    // 0x11a238: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A238u;
    {
        const bool branch_taken_0x11a238 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A238u;
            // 0x11a23c: 0x44800800  mtc1        $zero, $f1 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a238) {
            ctx->pc = 0x11A260u;
            goto label_11a260;
        }
    }
    ctx->pc = 0x11A240u;
label_11a240:
    // 0x11a240: 0x0  nop
    ctx->pc = 0x11a240u;
    // NOP
    // 0x11a244: 0x0  nop
    ctx->pc = 0x11a244u;
    // NOP
    // 0x11a248: 0x460d0303  div.s       $f12, $f0, $f13
    ctx->pc = 0x11a248u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[13];
    // 0x11a24c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x11A24Cu;
    SET_GPR_U32(ctx, 31, 0x11A254u);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A254u; }
        if (ctx->pc != 0x11A254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A254u; }
        if (ctx->pc != 0x11A254u) { return; }
    }
    ctx->pc = 0x11A254u;
label_11a254:
    // 0x11a254: 0xc047656  jal         func_11D958
    ctx->pc = 0x11A254u;
    SET_GPR_U32(ctx, 31, 0x11A25Cu);
    ctx->pc = 0x11A258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A254u;
            // 0x11a258: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D958u;
    if (runtime->hasFunction(0x11D958u)) {
        auto targetFn = runtime->lookupFunction(0x11D958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A25Cu; }
        if (ctx->pc != 0x11A25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D958_0x11d958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A25Cu; }
        if (ctx->pc != 0x11A25Cu) { return; }
    }
    ctx->pc = 0x11A25Cu;
label_11a25c:
    // 0x11a25c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11a25cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_11a260:
    // 0x11a260: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11a260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a264:
    // 0x11a264: 0x120f0019  beq         $s0, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x11A264u;
    {
        const bool branch_taken_0x11a264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x11A268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A264u;
            // 0x11a268: 0x2a0f0002  slti        $t7, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a264) {
            ctx->pc = 0x11A2CCu;
            goto label_11a2cc;
        }
    }
    ctx->pc = 0x11A26Cu;
    // 0x11a26c: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11A26Cu;
    {
        const bool branch_taken_0x11a26c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A26Cu;
            // 0x11a270: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a26c) {
            ctx->pc = 0x11A2A0u;
            goto label_11a2a0;
        }
    }
    ctx->pc = 0x11A274u;
    // 0x11a274: 0x1200ffcf  beqz        $s0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x11A274u;
    {
        const bool branch_taken_0x11a274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A274u;
            // 0x11a278: 0x440e0800  mfc1        $t6, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a274) {
            ctx->pc = 0x11A1B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a1b4;
        }
    }
    ctx->pc = 0x11A27Cu;
    // 0x11a27c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a27cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_11a280:
    // 0x11a280: 0x25eff6d4  addiu       $t7, $t7, -0x92C
    ctx->pc = 0x11a280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964948));
    // 0x11a284: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a288: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11a288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11a28c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a28cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a290: 0x25eff6d8  addiu       $t7, $t7, -0x928
    ctx->pc = 0x11a290u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964952));
    // 0x11a294: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a298: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x11A298u;
    {
        const bool branch_taken_0x11a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A298u;
            // 0x11a29c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a298) {
            ctx->pc = 0x11A1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a1b0;
        }
    }
    ctx->pc = 0x11A2A0u;
label_11a2a0:
    // 0x11a2a0: 0x160ffff7  bne         $s0, $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11A2A0u;
    {
        const bool branch_taken_0x11a2a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x11A2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2A0u;
            // 0x11a2a4: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2a0) {
            ctx->pc = 0x11A280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a280;
        }
    }
    ctx->pc = 0x11A2A8u;
    // 0x11a2a8: 0x25eff6d4  addiu       $t7, $t7, -0x92C
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964948));
    // 0x11a2ac: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a2b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11a2b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11a2b4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11a2b8: 0x25eff6d8  addiu       $t7, $t7, -0x928
    ctx->pc = 0x11a2b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964952));
    // 0x11a2bc: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a2c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11a2c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11a2c4: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x11A2C4u;
    {
        const bool branch_taken_0x11a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2C4u;
            // 0x11a2c8: 0x440e0800  mfc1        $t6, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2c4) {
            ctx->pc = 0x11A1B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a1b4;
        }
    }
    ctx->pc = 0x11A2CCu;
label_11a2cc:
    // 0x11a2cc: 0x440e0800  mfc1        $t6, $f1
    ctx->pc = 0x11a2ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11a2d0: 0x3c0f8000  lui         $t7, 0x8000
    ctx->pc = 0x11a2d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32768 << 16));
    // 0x11a2d4: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x11A2D4u;
    {
        const bool branch_taken_0x11a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2D4u;
            // 0x11a2d8: 0x1cf7026  xor         $t6, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2d4) {
            ctx->pc = 0x11A1B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a1b4;
        }
    }
    ctx->pc = 0x11A2DCu;
label_11a2dc:
    // 0x11a2dc: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x11a2dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a2e0: 0x120fffb4  beq         $s0, $t7, . + 4 + (-0x4C << 2)
    ctx->pc = 0x11A2E0u;
    {
        const bool branch_taken_0x11a2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x11A2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2E0u;
            // 0x11a2e4: 0x35ce0fda  ori         $t6, $t6, 0xFDA (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4058);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2e0) {
            ctx->pc = 0x11A1B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a1b4;
        }
    }
    ctx->pc = 0x11A2E8u;
    // 0x11a2e8: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x11A2E8u;
    {
        const bool branch_taken_0x11a2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2E8u;
            // 0x11a2ec: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2e8) {
            ctx->pc = 0x11A1CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a1cc;
        }
    }
    ctx->pc = 0x11A2F0u;
}
