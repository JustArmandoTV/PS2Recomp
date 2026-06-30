#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003752F0
// Address: 0x3752f0 - 0x375540
void sub_003752F0_0x3752f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003752F0_0x3752f0");
#endif

    switch (ctx->pc) {
        case 0x3752f0u: goto label_3752f0;
        case 0x3752f4u: goto label_3752f4;
        case 0x3752f8u: goto label_3752f8;
        case 0x3752fcu: goto label_3752fc;
        case 0x375300u: goto label_375300;
        case 0x375304u: goto label_375304;
        case 0x375308u: goto label_375308;
        case 0x37530cu: goto label_37530c;
        case 0x375310u: goto label_375310;
        case 0x375314u: goto label_375314;
        case 0x375318u: goto label_375318;
        case 0x37531cu: goto label_37531c;
        case 0x375320u: goto label_375320;
        case 0x375324u: goto label_375324;
        case 0x375328u: goto label_375328;
        case 0x37532cu: goto label_37532c;
        case 0x375330u: goto label_375330;
        case 0x375334u: goto label_375334;
        case 0x375338u: goto label_375338;
        case 0x37533cu: goto label_37533c;
        case 0x375340u: goto label_375340;
        case 0x375344u: goto label_375344;
        case 0x375348u: goto label_375348;
        case 0x37534cu: goto label_37534c;
        case 0x375350u: goto label_375350;
        case 0x375354u: goto label_375354;
        case 0x375358u: goto label_375358;
        case 0x37535cu: goto label_37535c;
        case 0x375360u: goto label_375360;
        case 0x375364u: goto label_375364;
        case 0x375368u: goto label_375368;
        case 0x37536cu: goto label_37536c;
        case 0x375370u: goto label_375370;
        case 0x375374u: goto label_375374;
        case 0x375378u: goto label_375378;
        case 0x37537cu: goto label_37537c;
        case 0x375380u: goto label_375380;
        case 0x375384u: goto label_375384;
        case 0x375388u: goto label_375388;
        case 0x37538cu: goto label_37538c;
        case 0x375390u: goto label_375390;
        case 0x375394u: goto label_375394;
        case 0x375398u: goto label_375398;
        case 0x37539cu: goto label_37539c;
        case 0x3753a0u: goto label_3753a0;
        case 0x3753a4u: goto label_3753a4;
        case 0x3753a8u: goto label_3753a8;
        case 0x3753acu: goto label_3753ac;
        case 0x3753b0u: goto label_3753b0;
        case 0x3753b4u: goto label_3753b4;
        case 0x3753b8u: goto label_3753b8;
        case 0x3753bcu: goto label_3753bc;
        case 0x3753c0u: goto label_3753c0;
        case 0x3753c4u: goto label_3753c4;
        case 0x3753c8u: goto label_3753c8;
        case 0x3753ccu: goto label_3753cc;
        case 0x3753d0u: goto label_3753d0;
        case 0x3753d4u: goto label_3753d4;
        case 0x3753d8u: goto label_3753d8;
        case 0x3753dcu: goto label_3753dc;
        case 0x3753e0u: goto label_3753e0;
        case 0x3753e4u: goto label_3753e4;
        case 0x3753e8u: goto label_3753e8;
        case 0x3753ecu: goto label_3753ec;
        case 0x3753f0u: goto label_3753f0;
        case 0x3753f4u: goto label_3753f4;
        case 0x3753f8u: goto label_3753f8;
        case 0x3753fcu: goto label_3753fc;
        case 0x375400u: goto label_375400;
        case 0x375404u: goto label_375404;
        case 0x375408u: goto label_375408;
        case 0x37540cu: goto label_37540c;
        case 0x375410u: goto label_375410;
        case 0x375414u: goto label_375414;
        case 0x375418u: goto label_375418;
        case 0x37541cu: goto label_37541c;
        case 0x375420u: goto label_375420;
        case 0x375424u: goto label_375424;
        case 0x375428u: goto label_375428;
        case 0x37542cu: goto label_37542c;
        case 0x375430u: goto label_375430;
        case 0x375434u: goto label_375434;
        case 0x375438u: goto label_375438;
        case 0x37543cu: goto label_37543c;
        case 0x375440u: goto label_375440;
        case 0x375444u: goto label_375444;
        case 0x375448u: goto label_375448;
        case 0x37544cu: goto label_37544c;
        case 0x375450u: goto label_375450;
        case 0x375454u: goto label_375454;
        case 0x375458u: goto label_375458;
        case 0x37545cu: goto label_37545c;
        case 0x375460u: goto label_375460;
        case 0x375464u: goto label_375464;
        case 0x375468u: goto label_375468;
        case 0x37546cu: goto label_37546c;
        case 0x375470u: goto label_375470;
        case 0x375474u: goto label_375474;
        case 0x375478u: goto label_375478;
        case 0x37547cu: goto label_37547c;
        case 0x375480u: goto label_375480;
        case 0x375484u: goto label_375484;
        case 0x375488u: goto label_375488;
        case 0x37548cu: goto label_37548c;
        case 0x375490u: goto label_375490;
        case 0x375494u: goto label_375494;
        case 0x375498u: goto label_375498;
        case 0x37549cu: goto label_37549c;
        case 0x3754a0u: goto label_3754a0;
        case 0x3754a4u: goto label_3754a4;
        case 0x3754a8u: goto label_3754a8;
        case 0x3754acu: goto label_3754ac;
        case 0x3754b0u: goto label_3754b0;
        case 0x3754b4u: goto label_3754b4;
        case 0x3754b8u: goto label_3754b8;
        case 0x3754bcu: goto label_3754bc;
        case 0x3754c0u: goto label_3754c0;
        case 0x3754c4u: goto label_3754c4;
        case 0x3754c8u: goto label_3754c8;
        case 0x3754ccu: goto label_3754cc;
        case 0x3754d0u: goto label_3754d0;
        case 0x3754d4u: goto label_3754d4;
        case 0x3754d8u: goto label_3754d8;
        case 0x3754dcu: goto label_3754dc;
        case 0x3754e0u: goto label_3754e0;
        case 0x3754e4u: goto label_3754e4;
        case 0x3754e8u: goto label_3754e8;
        case 0x3754ecu: goto label_3754ec;
        case 0x3754f0u: goto label_3754f0;
        case 0x3754f4u: goto label_3754f4;
        case 0x3754f8u: goto label_3754f8;
        case 0x3754fcu: goto label_3754fc;
        case 0x375500u: goto label_375500;
        case 0x375504u: goto label_375504;
        case 0x375508u: goto label_375508;
        case 0x37550cu: goto label_37550c;
        case 0x375510u: goto label_375510;
        case 0x375514u: goto label_375514;
        case 0x375518u: goto label_375518;
        case 0x37551cu: goto label_37551c;
        case 0x375520u: goto label_375520;
        case 0x375524u: goto label_375524;
        case 0x375528u: goto label_375528;
        case 0x37552cu: goto label_37552c;
        case 0x375530u: goto label_375530;
        case 0x375534u: goto label_375534;
        case 0x375538u: goto label_375538;
        case 0x37553cu: goto label_37553c;
        default: break;
    }

    ctx->pc = 0x3752f0u;

label_3752f0:
    // 0x3752f0: 0x3e00008  jr          $ra
label_3752f4:
    if (ctx->pc == 0x3752F4u) {
        ctx->pc = 0x3752F4u;
            // 0x3752f4: 0x8c8200ac  lw          $v0, 0xAC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
        ctx->pc = 0x3752F8u;
        goto label_3752f8;
    }
    ctx->pc = 0x3752F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3752F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3752F0u;
            // 0x3752f4: 0x8c8200ac  lw          $v0, 0xAC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3752F8u;
label_3752f8:
    // 0x3752f8: 0x0  nop
    ctx->pc = 0x3752f8u;
    // NOP
label_3752fc:
    // 0x3752fc: 0x0  nop
    ctx->pc = 0x3752fcu;
    // NOP
label_375300:
    // 0x375300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x375300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_375304:
    // 0x375304: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x375304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_375308:
    // 0x375308: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x375308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37530c:
    // 0x37530c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_375310:
    // 0x375310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x375310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_375314:
    // 0x375314: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x375314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_375318:
    // 0x375318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x375318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37531c:
    // 0x37531c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_375320:
    // 0x375320: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x375320u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_375324:
    // 0x375324: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_375328:
    if (ctx->pc == 0x375328u) {
        ctx->pc = 0x375328u;
            // 0x375328: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37532Cu;
        goto label_37532c;
    }
    ctx->pc = 0x375324u;
    {
        const bool branch_taken_0x375324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x375328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375324u;
            // 0x375328: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375324) {
            ctx->pc = 0x375374u;
            goto label_375374;
        }
    }
    ctx->pc = 0x37532Cu;
label_37532c:
    // 0x37532c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_375330:
    // 0x375330: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_375334:
    if (ctx->pc == 0x375334u) {
        ctx->pc = 0x375338u;
        goto label_375338;
    }
    ctx->pc = 0x375330u;
    {
        const bool branch_taken_0x375330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x375330) {
            ctx->pc = 0x37534Cu;
            goto label_37534c;
        }
    }
    ctx->pc = 0x375338u;
label_375338:
    // 0x375338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37533c:
    // 0x37533c: 0x10a30042  beq         $a1, $v1, . + 4 + (0x42 << 2)
label_375340:
    if (ctx->pc == 0x375340u) {
        ctx->pc = 0x375344u;
        goto label_375344;
    }
    ctx->pc = 0x37533Cu;
    {
        const bool branch_taken_0x37533c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37533c) {
            ctx->pc = 0x375448u;
            goto label_375448;
        }
    }
    ctx->pc = 0x375344u;
label_375344:
    // 0x375344: 0x10000040  b           . + 4 + (0x40 << 2)
label_375348:
    if (ctx->pc == 0x375348u) {
        ctx->pc = 0x37534Cu;
        goto label_37534c;
    }
    ctx->pc = 0x375344u;
    {
        const bool branch_taken_0x375344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375344) {
            ctx->pc = 0x375448u;
            goto label_375448;
        }
    }
    ctx->pc = 0x37534Cu;
label_37534c:
    // 0x37534c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x37534cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_375350:
    // 0x375350: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x375350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_375354:
    // 0x375354: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x375354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_375358:
    // 0x375358: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x375358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_37535c:
    // 0x37535c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
label_375360:
    if (ctx->pc == 0x375360u) {
        ctx->pc = 0x375364u;
        goto label_375364;
    }
    ctx->pc = 0x37535Cu;
    {
        const bool branch_taken_0x37535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37535c) {
            ctx->pc = 0x375448u;
            goto label_375448;
        }
    }
    ctx->pc = 0x375364u;
label_375364:
    // 0x375364: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x375364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_375368:
    // 0x375368: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x375368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_37536c:
    // 0x37536c: 0x320f809  jalr        $t9
label_375370:
    if (ctx->pc == 0x375370u) {
        ctx->pc = 0x375374u;
        goto label_375374;
    }
    ctx->pc = 0x37536Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375374u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x375374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375374u; }
            if (ctx->pc != 0x375374u) { return; }
        }
        }
    }
    ctx->pc = 0x375374u;
label_375374:
    // 0x375374: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x375374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_375378:
    // 0x375378: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_37537c:
    if (ctx->pc == 0x37537Cu) {
        ctx->pc = 0x375380u;
        goto label_375380;
    }
    ctx->pc = 0x375378u;
    {
        const bool branch_taken_0x375378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x375378) {
            ctx->pc = 0x375448u;
            goto label_375448;
        }
    }
    ctx->pc = 0x375380u;
label_375380:
    // 0x375380: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x375380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375384:
    // 0x375384: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x375384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375388:
    // 0x375388: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x375388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_37538c:
    // 0x37538c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_375390:
    // 0x375390: 0xc0e3658  jal         func_38D960
label_375394:
    if (ctx->pc == 0x375394u) {
        ctx->pc = 0x375394u;
            // 0x375394: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x375398u;
        goto label_375398;
    }
    ctx->pc = 0x375390u;
    SET_GPR_U32(ctx, 31, 0x375398u);
    ctx->pc = 0x375394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375390u;
            // 0x375394: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375398u; }
        if (ctx->pc != 0x375398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375398u; }
        if (ctx->pc != 0x375398u) { return; }
    }
    ctx->pc = 0x375398u;
label_375398:
    // 0x375398: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x375398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_37539c:
    // 0x37539c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x37539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3753a0:
    // 0x3753a0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x3753a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3753a4:
    // 0x3753a4: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x3753a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_3753a8:
    // 0x3753a8: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x3753a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3753ac:
    // 0x3753ac: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3753b0:
    if (ctx->pc == 0x3753B0u) {
        ctx->pc = 0x3753B0u;
            // 0x3753b0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3753B4u;
        goto label_3753b4;
    }
    ctx->pc = 0x3753ACu;
    {
        const bool branch_taken_0x3753ac = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3753ac) {
            ctx->pc = 0x3753B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3753ACu;
            // 0x3753b0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3753C0u;
            goto label_3753c0;
        }
    }
    ctx->pc = 0x3753B4u;
label_3753b4:
    // 0x3753b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3753b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3753b8:
    // 0x3753b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3753bc:
    if (ctx->pc == 0x3753BCu) {
        ctx->pc = 0x3753BCu;
            // 0x3753bc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3753C0u;
        goto label_3753c0;
    }
    ctx->pc = 0x3753B8u;
    {
        const bool branch_taken_0x3753b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3753BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3753B8u;
            // 0x3753bc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3753b8) {
            ctx->pc = 0x3753D8u;
            goto label_3753d8;
        }
    }
    ctx->pc = 0x3753C0u;
label_3753c0:
    // 0x3753c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3753c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3753c4:
    // 0x3753c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3753c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3753c8:
    // 0x3753c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3753c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3753cc:
    // 0x3753cc: 0x0  nop
    ctx->pc = 0x3753ccu;
    // NOP
label_3753d0:
    // 0x3753d0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3753d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3753d4:
    // 0x3753d4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3753d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3753d8:
    // 0x3753d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3753d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3753dc:
    // 0x3753dc: 0xc64002b4  lwc1        $f0, 0x2B4($s2)
    ctx->pc = 0x3753dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3753e0:
    // 0x3753e0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3753e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3753e4:
    // 0x3753e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3753e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3753e8:
    // 0x3753e8: 0x0  nop
    ctx->pc = 0x3753e8u;
    // NOP
label_3753ec:
    // 0x3753ec: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3753ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3753f0:
    // 0x3753f0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3753f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3753f4:
    // 0x3753f4: 0x4602009c  madd.s      $f2, $f0, $f2
    ctx->pc = 0x3753f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_3753f8:
    // 0x3753f8: 0xe64202b4  swc1        $f2, 0x2B4($s2)
    ctx->pc = 0x3753f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 692), bits); }
label_3753fc:
    // 0x3753fc: 0xc64002b0  lwc1        $f0, 0x2B0($s2)
    ctx->pc = 0x3753fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375400:
    // 0x375400: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x375400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375404:
    // 0x375404: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_375408:
    if (ctx->pc == 0x375408u) {
        ctx->pc = 0x37540Cu;
        goto label_37540c;
    }
    ctx->pc = 0x375404u;
    {
        const bool branch_taken_0x375404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375404) {
            ctx->pc = 0x375438u;
            goto label_375438;
        }
    }
    ctx->pc = 0x37540Cu;
label_37540c:
    // 0x37540c: 0xe64102b4  swc1        $f1, 0x2B4($s2)
    ctx->pc = 0x37540cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 692), bits); }
label_375410:
    // 0x375410: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x375410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_375414:
    // 0x375414: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x375414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_375418:
    // 0x375418: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_37541c:
    if (ctx->pc == 0x37541Cu) {
        ctx->pc = 0x375420u;
        goto label_375420;
    }
    ctx->pc = 0x375418u;
    {
        const bool branch_taken_0x375418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x375418) {
            ctx->pc = 0x375438u;
            goto label_375438;
        }
    }
    ctx->pc = 0x375420u;
label_375420:
    // 0x375420: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x375420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_375424:
    // 0x375424: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x375424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_375428:
    // 0x375428: 0x320f809  jalr        $t9
label_37542c:
    if (ctx->pc == 0x37542Cu) {
        ctx->pc = 0x37542Cu;
            // 0x37542c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375430u;
        goto label_375430;
    }
    ctx->pc = 0x375428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375430u);
        ctx->pc = 0x37542Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375428u;
            // 0x37542c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x375430u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375430u; }
            if (ctx->pc != 0x375430u) { return; }
        }
        }
    }
    ctx->pc = 0x375430u;
label_375430:
    // 0x375430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375434:
    // 0x375434: 0xae4300dc  sw          $v1, 0xDC($s2)
    ctx->pc = 0x375434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 3));
label_375438:
    // 0x375438: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x375438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37543c:
    // 0x37543c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x37543cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_375440:
    // 0x375440: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_375444:
    if (ctx->pc == 0x375444u) {
        ctx->pc = 0x375444u;
            // 0x375444: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x375448u;
        goto label_375448;
    }
    ctx->pc = 0x375440u;
    {
        const bool branch_taken_0x375440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x375444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375440u;
            // 0x375444: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375440) {
            ctx->pc = 0x375388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_375388;
        }
    }
    ctx->pc = 0x375448u;
label_375448:
    // 0x375448: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x375448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37544c:
    // 0x37544c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37544cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_375450:
    // 0x375450: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x375450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_375454:
    // 0x375454: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x375454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_375458:
    // 0x375458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x375458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37545c:
    // 0x37545c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37545cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_375460:
    // 0x375460: 0x3e00008  jr          $ra
label_375464:
    if (ctx->pc == 0x375464u) {
        ctx->pc = 0x375464u;
            // 0x375464: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x375468u;
        goto label_375468;
    }
    ctx->pc = 0x375460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375460u;
            // 0x375464: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x375468u;
label_375468:
    // 0x375468: 0x0  nop
    ctx->pc = 0x375468u;
    // NOP
label_37546c:
    // 0x37546c: 0x0  nop
    ctx->pc = 0x37546cu;
    // NOP
label_375470:
    // 0x375470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x375470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_375474:
    // 0x375474: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375478:
    // 0x375478: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x375478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37547c:
    // 0x37547c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_375480:
    // 0x375480: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x375480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_375484:
    // 0x375484: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x375484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_375488:
    // 0x375488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x375488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37548c:
    // 0x37548c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37548cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_375490:
    // 0x375490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_375494:
    // 0x375494: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x375494u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_375498:
    // 0x375498: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x375498u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_37549c:
    // 0x37549c: 0x5083001c  beql        $a0, $v1, . + 4 + (0x1C << 2)
label_3754a0:
    if (ctx->pc == 0x3754A0u) {
        ctx->pc = 0x3754A0u;
            // 0x3754a0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3754A4u;
        goto label_3754a4;
    }
    ctx->pc = 0x37549Cu;
    {
        const bool branch_taken_0x37549c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37549c) {
            ctx->pc = 0x3754A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37549Cu;
            // 0x3754a0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375510u;
            goto label_375510;
        }
    }
    ctx->pc = 0x3754A4u;
label_3754a4:
    // 0x3754a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_3754a8:
    if (ctx->pc == 0x3754A8u) {
        ctx->pc = 0x3754ACu;
        goto label_3754ac;
    }
    ctx->pc = 0x3754A4u;
    {
        const bool branch_taken_0x3754a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3754a4) {
            ctx->pc = 0x3754F8u;
            goto label_3754f8;
        }
    }
    ctx->pc = 0x3754ACu;
label_3754ac:
    // 0x3754ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3754acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3754b0:
    // 0x3754b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3754b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3754b4:
    // 0x3754b4: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3754b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3754b8:
    // 0x3754b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3754b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3754bc:
    // 0x3754bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3754bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3754c0:
    // 0x3754c0: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x3754c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3754c4:
    // 0x3754c4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_3754c8:
    if (ctx->pc == 0x3754C8u) {
        ctx->pc = 0x3754CCu;
        goto label_3754cc;
    }
    ctx->pc = 0x3754C4u;
    {
        const bool branch_taken_0x3754c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3754c4) {
            ctx->pc = 0x3754E8u;
            goto label_3754e8;
        }
    }
    ctx->pc = 0x3754CCu;
label_3754cc:
    // 0x3754cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3754ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3754d0:
    // 0x3754d0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3754d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3754d4:
    // 0x3754d4: 0x320f809  jalr        $t9
label_3754d8:
    if (ctx->pc == 0x3754D8u) {
        ctx->pc = 0x3754D8u;
            // 0x3754d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3754DCu;
        goto label_3754dc;
    }
    ctx->pc = 0x3754D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3754DCu);
        ctx->pc = 0x3754D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3754D4u;
            // 0x3754d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3754DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3754DCu; }
            if (ctx->pc != 0x3754DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3754DCu;
label_3754dc:
    // 0x3754dc: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x3754dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_3754e0:
    // 0x3754e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3754e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3754e4:
    // 0x3754e4: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x3754e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
label_3754e8:
    // 0x3754e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3754e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3754ec:
    // 0x3754ec: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x3754ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3754f0:
    // 0x3754f0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_3754f4:
    if (ctx->pc == 0x3754F4u) {
        ctx->pc = 0x3754F4u;
            // 0x3754f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3754F8u;
        goto label_3754f8;
    }
    ctx->pc = 0x3754F0u;
    {
        const bool branch_taken_0x3754f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3754F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3754F0u;
            // 0x3754f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3754f0) {
            ctx->pc = 0x3754B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3754b4;
        }
    }
    ctx->pc = 0x3754F8u;
label_3754f8:
    // 0x3754f8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3754f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3754fc:
    // 0x3754fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3754fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_375500:
    // 0x375500: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x375500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_375504:
    // 0x375504: 0x320f809  jalr        $t9
label_375508:
    if (ctx->pc == 0x375508u) {
        ctx->pc = 0x375508u;
            // 0x375508: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37550Cu;
        goto label_37550c;
    }
    ctx->pc = 0x375504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37550Cu);
        ctx->pc = 0x375508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375504u;
            // 0x375508: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37550Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37550Cu; }
            if (ctx->pc != 0x37550Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37550Cu;
label_37550c:
    // 0x37550c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37550cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_375510:
    // 0x375510: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x375510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_375514:
    // 0x375514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x375514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_375518:
    // 0x375518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x375518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37551c:
    // 0x37551c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37551cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_375520:
    // 0x375520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_375524:
    // 0x375524: 0x3e00008  jr          $ra
label_375528:
    if (ctx->pc == 0x375528u) {
        ctx->pc = 0x375528u;
            // 0x375528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37552Cu;
        goto label_37552c;
    }
    ctx->pc = 0x375524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375524u;
            // 0x375528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37552Cu;
label_37552c:
    // 0x37552c: 0x0  nop
    ctx->pc = 0x37552cu;
    // NOP
label_375530:
    // 0x375530: 0x3e00008  jr          $ra
label_375534:
    if (ctx->pc == 0x375534u) {
        ctx->pc = 0x375538u;
        goto label_375538;
    }
    ctx->pc = 0x375530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x375538u;
label_375538:
    // 0x375538: 0x0  nop
    ctx->pc = 0x375538u;
    // NOP
label_37553c:
    // 0x37553c: 0x0  nop
    ctx->pc = 0x37553cu;
    // NOP
}
