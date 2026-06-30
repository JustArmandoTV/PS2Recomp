#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003243D0
// Address: 0x3243d0 - 0x324510
void sub_003243D0_0x3243d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003243D0_0x3243d0");
#endif

    switch (ctx->pc) {
        case 0x32441cu: goto label_32441c;
        case 0x324444u: goto label_324444;
        default: break;
    }

    ctx->pc = 0x3243d0u;

    // 0x3243d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3243d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3243d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3243d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3243d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3243d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3243dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3243dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3243e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3243e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3243e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3243e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3243e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3243e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3243ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3243ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3243f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3243f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3243f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3243f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3243f8: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3243f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3243fc: 0x8c650ec8  lw          $a1, 0xEC8($v1)
    ctx->pc = 0x3243fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
    // 0x324400: 0x2883003f  slti        $v1, $a0, 0x3F
    ctx->pc = 0x324400u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x324404: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x324404u;
    {
        const bool branch_taken_0x324404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324404u;
            // 0x324408: 0x8cb20008  lw          $s2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324404) {
            ctx->pc = 0x324410u;
            goto label_324410;
        }
    }
    ctx->pc = 0x32440Cu;
    // 0x32440c: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x32440cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_324410:
    // 0x324410: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x324410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x324414: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x324414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x324418: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x324418u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_32441c:
    // 0x32441c: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x32441cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x324420: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x324420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x324424: 0x24631490  addiu       $v1, $v1, 0x1490
    ctx->pc = 0x324424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5264));
    // 0x324428: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x324428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32442c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x32442cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x324430: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x324430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x324434: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x324434u;
    {
        const bool branch_taken_0x324434 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x324438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324434u;
            // 0x324438: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324434) {
            ctx->pc = 0x324478u;
            goto label_324478;
        }
    }
    ctx->pc = 0x32443Cu;
    // 0x32443c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x32443Cu;
    SET_GPR_U32(ctx, 31, 0x324444u);
    ctx->pc = 0x324440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32443Cu;
            // 0x324440: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324444u; }
        if (ctx->pc != 0x324444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324444u; }
        if (ctx->pc != 0x324444u) { return; }
    }
    ctx->pc = 0x324444u;
label_324444:
    // 0x324444: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x324444u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x324448: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x324448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x32444c: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32444Cu;
    {
        const bool branch_taken_0x32444c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x324450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32444Cu;
            // 0x324450: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32444c) {
            ctx->pc = 0x324470u;
            goto label_324470;
        }
    }
    ctx->pc = 0x324454u;
    // 0x324454: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x324454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x324458: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x324458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x32445c: 0x8063008e  lb          $v1, 0x8E($v1)
    ctx->pc = 0x32445cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 142)));
    // 0x324460: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x324460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x324464: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x324464u;
    {
        const bool branch_taken_0x324464 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x324464) {
            ctx->pc = 0x324470u;
            goto label_324470;
        }
    }
    ctx->pc = 0x32446Cu;
    // 0x32446c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x32446cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_324470:
    // 0x324470: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x324470u;
    {
        const bool branch_taken_0x324470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324470) {
            ctx->pc = 0x324498u;
            goto label_324498;
        }
    }
    ctx->pc = 0x324478u;
label_324478:
    // 0x324478: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x324478u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32447c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x32447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x324480: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x324480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324484: 0x30c6001f  andi        $a2, $a2, 0x1F
    ctx->pc = 0x324484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x324488: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x324488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x32448c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x32448cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x324490: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x324490u;
    {
        const bool branch_taken_0x324490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x324490) {
            ctx->pc = 0x3244F0u;
            goto label_3244f0;
        }
    }
    ctx->pc = 0x324498u;
label_324498:
    // 0x324498: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x324498u;
    {
        const bool branch_taken_0x324498 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x324498) {
            ctx->pc = 0x3244C8u;
            goto label_3244c8;
        }
    }
    ctx->pc = 0x3244A0u;
    // 0x3244a0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3244a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3244a4: 0x2861003e  slti        $at, $v1, 0x3E
    ctx->pc = 0x3244a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)62) ? 1 : 0);
    // 0x3244a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3244A8u;
    {
        const bool branch_taken_0x3244a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3244a8) {
            ctx->pc = 0x3244C0u;
            goto label_3244c0;
        }
    }
    ctx->pc = 0x3244B0u;
    // 0x3244b0: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x3244b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x3244b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3244b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3244b8: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x3244B8u;
    {
        const bool branch_taken_0x3244b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3244B8u;
            // 0x3244bc: 0xa2630001  sb          $v1, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244b8) {
            ctx->pc = 0x32441Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32441c;
        }
    }
    ctx->pc = 0x3244C0u;
label_3244c0:
    // 0x3244c0: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x3244C0u;
    {
        const bool branch_taken_0x3244c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3244C0u;
            // 0x3244c4: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244c0) {
            ctx->pc = 0x32441Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32441c;
        }
    }
    ctx->pc = 0x3244C8u;
label_3244c8:
    // 0x3244c8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3244C8u;
    {
        const bool branch_taken_0x3244c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3244c8) {
            ctx->pc = 0x3244E0u;
            goto label_3244e0;
        }
    }
    ctx->pc = 0x3244D0u;
    // 0x3244d0: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x3244d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x3244d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3244d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3244d8: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x3244D8u;
    {
        const bool branch_taken_0x3244d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3244D8u;
            // 0x3244dc: 0xa2630001  sb          $v1, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244d8) {
            ctx->pc = 0x32441Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32441c;
        }
    }
    ctx->pc = 0x3244E0u;
label_3244e0:
    // 0x3244e0: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x3244e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x3244e4: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x3244E4u;
    {
        const bool branch_taken_0x3244e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3244E4u;
            // 0x3244e8: 0xa2630001  sb          $v1, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244e4) {
            ctx->pc = 0x32441Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32441c;
        }
    }
    ctx->pc = 0x3244ECu;
    // 0x3244ec: 0x0  nop
    ctx->pc = 0x3244ecu;
    // NOP
label_3244f0:
    // 0x3244f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3244f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3244f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3244f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3244f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3244f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3244fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3244fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x324504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324508: 0x3e00008  jr          $ra
    ctx->pc = 0x324508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324508u;
            // 0x32450c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324510u;
}
