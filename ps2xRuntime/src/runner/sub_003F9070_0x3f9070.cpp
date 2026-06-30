#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F9070
// Address: 0x3f9070 - 0x3f91e0
void sub_003F9070_0x3f9070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9070_0x3f9070");
#endif

    switch (ctx->pc) {
        case 0x3f9070u: goto label_3f9070;
        case 0x3f9074u: goto label_3f9074;
        case 0x3f9078u: goto label_3f9078;
        case 0x3f907cu: goto label_3f907c;
        case 0x3f9080u: goto label_3f9080;
        case 0x3f9084u: goto label_3f9084;
        case 0x3f9088u: goto label_3f9088;
        case 0x3f908cu: goto label_3f908c;
        case 0x3f9090u: goto label_3f9090;
        case 0x3f9094u: goto label_3f9094;
        case 0x3f9098u: goto label_3f9098;
        case 0x3f909cu: goto label_3f909c;
        case 0x3f90a0u: goto label_3f90a0;
        case 0x3f90a4u: goto label_3f90a4;
        case 0x3f90a8u: goto label_3f90a8;
        case 0x3f90acu: goto label_3f90ac;
        case 0x3f90b0u: goto label_3f90b0;
        case 0x3f90b4u: goto label_3f90b4;
        case 0x3f90b8u: goto label_3f90b8;
        case 0x3f90bcu: goto label_3f90bc;
        case 0x3f90c0u: goto label_3f90c0;
        case 0x3f90c4u: goto label_3f90c4;
        case 0x3f90c8u: goto label_3f90c8;
        case 0x3f90ccu: goto label_3f90cc;
        case 0x3f90d0u: goto label_3f90d0;
        case 0x3f90d4u: goto label_3f90d4;
        case 0x3f90d8u: goto label_3f90d8;
        case 0x3f90dcu: goto label_3f90dc;
        case 0x3f90e0u: goto label_3f90e0;
        case 0x3f90e4u: goto label_3f90e4;
        case 0x3f90e8u: goto label_3f90e8;
        case 0x3f90ecu: goto label_3f90ec;
        case 0x3f90f0u: goto label_3f90f0;
        case 0x3f90f4u: goto label_3f90f4;
        case 0x3f90f8u: goto label_3f90f8;
        case 0x3f90fcu: goto label_3f90fc;
        case 0x3f9100u: goto label_3f9100;
        case 0x3f9104u: goto label_3f9104;
        case 0x3f9108u: goto label_3f9108;
        case 0x3f910cu: goto label_3f910c;
        case 0x3f9110u: goto label_3f9110;
        case 0x3f9114u: goto label_3f9114;
        case 0x3f9118u: goto label_3f9118;
        case 0x3f911cu: goto label_3f911c;
        case 0x3f9120u: goto label_3f9120;
        case 0x3f9124u: goto label_3f9124;
        case 0x3f9128u: goto label_3f9128;
        case 0x3f912cu: goto label_3f912c;
        case 0x3f9130u: goto label_3f9130;
        case 0x3f9134u: goto label_3f9134;
        case 0x3f9138u: goto label_3f9138;
        case 0x3f913cu: goto label_3f913c;
        case 0x3f9140u: goto label_3f9140;
        case 0x3f9144u: goto label_3f9144;
        case 0x3f9148u: goto label_3f9148;
        case 0x3f914cu: goto label_3f914c;
        case 0x3f9150u: goto label_3f9150;
        case 0x3f9154u: goto label_3f9154;
        case 0x3f9158u: goto label_3f9158;
        case 0x3f915cu: goto label_3f915c;
        case 0x3f9160u: goto label_3f9160;
        case 0x3f9164u: goto label_3f9164;
        case 0x3f9168u: goto label_3f9168;
        case 0x3f916cu: goto label_3f916c;
        case 0x3f9170u: goto label_3f9170;
        case 0x3f9174u: goto label_3f9174;
        case 0x3f9178u: goto label_3f9178;
        case 0x3f917cu: goto label_3f917c;
        case 0x3f9180u: goto label_3f9180;
        case 0x3f9184u: goto label_3f9184;
        case 0x3f9188u: goto label_3f9188;
        case 0x3f918cu: goto label_3f918c;
        case 0x3f9190u: goto label_3f9190;
        case 0x3f9194u: goto label_3f9194;
        case 0x3f9198u: goto label_3f9198;
        case 0x3f919cu: goto label_3f919c;
        case 0x3f91a0u: goto label_3f91a0;
        case 0x3f91a4u: goto label_3f91a4;
        case 0x3f91a8u: goto label_3f91a8;
        case 0x3f91acu: goto label_3f91ac;
        case 0x3f91b0u: goto label_3f91b0;
        case 0x3f91b4u: goto label_3f91b4;
        case 0x3f91b8u: goto label_3f91b8;
        case 0x3f91bcu: goto label_3f91bc;
        case 0x3f91c0u: goto label_3f91c0;
        case 0x3f91c4u: goto label_3f91c4;
        case 0x3f91c8u: goto label_3f91c8;
        case 0x3f91ccu: goto label_3f91cc;
        case 0x3f91d0u: goto label_3f91d0;
        case 0x3f91d4u: goto label_3f91d4;
        case 0x3f91d8u: goto label_3f91d8;
        case 0x3f91dcu: goto label_3f91dc;
        default: break;
    }

    ctx->pc = 0x3f9070u;

label_3f9070:
    // 0x3f9070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f9070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f9074:
    // 0x3f9074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f9074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f9078:
    // 0x3f9078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f9078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f907c:
    // 0x3f907c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f9080:
    // 0x3f9080: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f9080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f9084:
    // 0x3f9084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f9084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9088:
    // 0x3f9088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f9088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f908c:
    // 0x3f908c: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x3f908cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3f9090:
    // 0x3f9090: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f9090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3f9094:
    // 0x3f9094: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f9094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f9098:
    // 0x3f9098: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f9098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f909c:
    // 0x3f909c: 0x320f809  jalr        $t9
label_3f90a0:
    if (ctx->pc == 0x3F90A0u) {
        ctx->pc = 0x3F90A0u;
            // 0x3f90a0: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->pc = 0x3F90A4u;
        goto label_3f90a4;
    }
    ctx->pc = 0x3F909Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F90A4u);
        ctx->pc = 0x3F90A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F909Cu;
            // 0x3f90a0: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F90A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F90A4u; }
            if (ctx->pc != 0x3F90A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3F90A4u;
label_3f90a4:
    // 0x3f90a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3f90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f90a8:
    // 0x3f90a8: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x3f90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
label_3f90ac:
    // 0x3f90ac: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x3f90acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_3f90b0:
    // 0x3f90b0: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x3f90b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_3f90b4:
    // 0x3f90b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3f90b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3f90b8:
    // 0x3f90b8: 0x24690010  addiu       $t1, $v1, 0x10
    ctx->pc = 0x3f90b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3f90bc:
    // 0x3f90bc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3f90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f90c0:
    // 0x3f90c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f90c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f90c4:
    // 0x3f90c4: 0x1043003a  beq         $v0, $v1, . + 4 + (0x3A << 2)
label_3f90c8:
    if (ctx->pc == 0x3F90C8u) {
        ctx->pc = 0x3F90C8u;
            // 0x3f90c8: 0x852024  and         $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
        ctx->pc = 0x3F90CCu;
        goto label_3f90cc;
    }
    ctx->pc = 0x3F90C4u;
    {
        const bool branch_taken_0x3f90c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F90C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F90C4u;
            // 0x3f90c8: 0x852024  and         $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f90c4) {
            ctx->pc = 0x3F91B0u;
            goto label_3f91b0;
        }
    }
    ctx->pc = 0x3F90CCu;
label_3f90cc:
    // 0x3f90cc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3f90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3f90d0:
    // 0x3f90d0: 0x604027  not         $t0, $v1
    ctx->pc = 0x3f90d0u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3f90d4:
    // 0x3f90d4: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3f90d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f90d8:
    // 0x3f90d8: 0xe9082b  sltu        $at, $a3, $t1
    ctx->pc = 0x3f90d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3f90dc:
    // 0x3f90dc: 0x54200031  bnel        $at, $zero, . + 4 + (0x31 << 2)
label_3f90e0:
    if (ctx->pc == 0x3F90E0u) {
        ctx->pc = 0x3F90E0u;
            // 0x3f90e0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3F90E4u;
        goto label_3f90e4;
    }
    ctx->pc = 0x3F90DCu;
    {
        const bool branch_taken_0x3f90dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f90dc) {
            ctx->pc = 0x3F90E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F90DCu;
            // 0x3f90e0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F91A4u;
            goto label_3f91a4;
        }
    }
    ctx->pc = 0x3F90E4u;
label_3f90e4:
    // 0x3f90e4: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x3f90e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3f90e8:
    // 0x3f90e8: 0xc91823  subu        $v1, $a2, $t1
    ctx->pc = 0x3f90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3f90ec:
    // 0x3f90ec: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x3f90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3f90f0:
    // 0x3f90f0: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x3f90f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
label_3f90f4:
    // 0x3f90f4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3f90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3f90f8:
    // 0x3f90f8: 0x1232821  addu        $a1, $t1, $v1
    ctx->pc = 0x3f90f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_3f90fc:
    // 0x3f90fc: 0xa7082b  sltu        $at, $a1, $a3
    ctx->pc = 0x3f90fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3f9100:
    // 0x3f9100: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_3f9104:
    if (ctx->pc == 0x3F9104u) {
        ctx->pc = 0x3F9108u;
        goto label_3f9108;
    }
    ctx->pc = 0x3F9100u;
    {
        const bool branch_taken_0x3f9100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9100) {
            ctx->pc = 0x3F9138u;
            goto label_3f9138;
        }
    }
    ctx->pc = 0x3F9108u;
label_3f9108:
    // 0x3f9108: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x3f9108u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3f910c:
    // 0x3f910c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3f910cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3f9110:
    // 0x3f9110: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3f9110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f9114:
    // 0x3f9114: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3f9114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3f9118:
    // 0x3f9118: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x3f9118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_3f911c:
    // 0x3f911c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3f911cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_3f9120:
    // 0x3f9120: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x3f9120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_3f9124:
    // 0x3f9124: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3f9124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f9128:
    // 0x3f9128: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3f9128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f912c:
    // 0x3f912c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3f912cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_3f9130:
    // 0x3f9130: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3f9130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9134:
    // 0x3f9134: 0x0  nop
    ctx->pc = 0x3f9134u;
    // NOP
label_3f9138:
    // 0x3f9138: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3f9138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f913c:
    // 0x3f913c: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x3f913cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3f9140:
    // 0x3f9140: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_3f9144:
    if (ctx->pc == 0x3F9144u) {
        ctx->pc = 0x3F9148u;
        goto label_3f9148;
    }
    ctx->pc = 0x3F9140u;
    {
        const bool branch_taken_0x3f9140 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9140) {
            ctx->pc = 0x3F91A0u;
            goto label_3f91a0;
        }
    }
    ctx->pc = 0x3F9148u;
label_3f9148:
    // 0x3f9148: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f9148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f914c:
    // 0x3f914c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x3f914cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3f9150:
    // 0x3f9150: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3f9150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f9154:
    // 0x3f9154: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3f9154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3f9158:
    // 0x3f9158: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3f9158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_3f915c:
    // 0x3f915c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3f915cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3f9160:
    // 0x3f9160: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3f9160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3f9164:
    // 0x3f9164: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3f9164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3f9168:
    // 0x3f9168: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3f9168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f916c:
    // 0x3f916c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3f916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3f9170:
    // 0x3f9170: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3f9170u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f9174:
    // 0x3f9174: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3f9174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3f9178:
    // 0x3f9178: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3f9178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f917c:
    // 0x3f917c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3f917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3f9180:
    // 0x3f9180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f9184:
    // 0x3f9184: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3f9184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_3f9188:
    // 0x3f9188: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f9188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f918c:
    // 0x3f918c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f918cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f9190:
    // 0x3f9190: 0x320f809  jalr        $t9
label_3f9194:
    if (ctx->pc == 0x3F9194u) {
        ctx->pc = 0x3F9198u;
        goto label_3f9198;
    }
    ctx->pc = 0x3F9190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9198u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9198u; }
            if (ctx->pc != 0x3F9198u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9198u;
label_3f9198:
    // 0x3f9198: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f919c:
    if (ctx->pc == 0x3F919Cu) {
        ctx->pc = 0x3F919Cu;
            // 0x3f919c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F91A0u;
        goto label_3f91a0;
    }
    ctx->pc = 0x3F9198u;
    {
        const bool branch_taken_0x3f9198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9198u;
            // 0x3f919c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9198) {
            ctx->pc = 0x3F91C8u;
            goto label_3f91c8;
        }
    }
    ctx->pc = 0x3F91A0u;
label_3f91a0:
    // 0x3f91a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3f91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f91a4:
    // 0x3f91a4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f91a8:
    // 0x3f91a8: 0x5443ffcb  bnel        $v0, $v1, . + 4 + (-0x35 << 2)
label_3f91ac:
    if (ctx->pc == 0x3F91ACu) {
        ctx->pc = 0x3F91ACu;
            // 0x3f91ac: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x3F91B0u;
        goto label_3f91b0;
    }
    ctx->pc = 0x3F91A8u;
    {
        const bool branch_taken_0x3f91a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f91a8) {
            ctx->pc = 0x3F91ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F91A8u;
            // 0x3f91ac: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F90D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f90d8;
        }
    }
    ctx->pc = 0x3F91B0u;
label_3f91b0:
    // 0x3f91b0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3f91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3f91b4:
    // 0x3f91b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f91b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f91b8:
    // 0x3f91b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f91b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f91bc:
    // 0x3f91bc: 0x320f809  jalr        $t9
label_3f91c0:
    if (ctx->pc == 0x3F91C0u) {
        ctx->pc = 0x3F91C4u;
        goto label_3f91c4;
    }
    ctx->pc = 0x3F91BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F91C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F91C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F91C4u; }
            if (ctx->pc != 0x3F91C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3F91C4u;
label_3f91c4:
    // 0x3f91c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f91c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f91c8:
    // 0x3f91c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f91c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f91cc:
    // 0x3f91cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f91ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f91d0:
    // 0x3f91d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f91d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f91d4:
    // 0x3f91d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f91d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f91d8:
    // 0x3f91d8: 0x3e00008  jr          $ra
label_3f91dc:
    if (ctx->pc == 0x3F91DCu) {
        ctx->pc = 0x3F91DCu;
            // 0x3f91dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F91E0u;
        goto label_fallthrough_0x3f91d8;
    }
    ctx->pc = 0x3F91D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F91DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F91D8u;
            // 0x3f91dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f91d8:
    ctx->pc = 0x3F91E0u;
}
