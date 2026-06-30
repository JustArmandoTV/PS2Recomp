#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F4080
// Address: 0x3f4080 - 0x3f4130
void sub_003F4080_0x3f4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4080_0x3f4080");
#endif

    switch (ctx->pc) {
        case 0x3f4080u: goto label_3f4080;
        case 0x3f4084u: goto label_3f4084;
        case 0x3f4088u: goto label_3f4088;
        case 0x3f408cu: goto label_3f408c;
        case 0x3f4090u: goto label_3f4090;
        case 0x3f4094u: goto label_3f4094;
        case 0x3f4098u: goto label_3f4098;
        case 0x3f409cu: goto label_3f409c;
        case 0x3f40a0u: goto label_3f40a0;
        case 0x3f40a4u: goto label_3f40a4;
        case 0x3f40a8u: goto label_3f40a8;
        case 0x3f40acu: goto label_3f40ac;
        case 0x3f40b0u: goto label_3f40b0;
        case 0x3f40b4u: goto label_3f40b4;
        case 0x3f40b8u: goto label_3f40b8;
        case 0x3f40bcu: goto label_3f40bc;
        case 0x3f40c0u: goto label_3f40c0;
        case 0x3f40c4u: goto label_3f40c4;
        case 0x3f40c8u: goto label_3f40c8;
        case 0x3f40ccu: goto label_3f40cc;
        case 0x3f40d0u: goto label_3f40d0;
        case 0x3f40d4u: goto label_3f40d4;
        case 0x3f40d8u: goto label_3f40d8;
        case 0x3f40dcu: goto label_3f40dc;
        case 0x3f40e0u: goto label_3f40e0;
        case 0x3f40e4u: goto label_3f40e4;
        case 0x3f40e8u: goto label_3f40e8;
        case 0x3f40ecu: goto label_3f40ec;
        case 0x3f40f0u: goto label_3f40f0;
        case 0x3f40f4u: goto label_3f40f4;
        case 0x3f40f8u: goto label_3f40f8;
        case 0x3f40fcu: goto label_3f40fc;
        case 0x3f4100u: goto label_3f4100;
        case 0x3f4104u: goto label_3f4104;
        case 0x3f4108u: goto label_3f4108;
        case 0x3f410cu: goto label_3f410c;
        case 0x3f4110u: goto label_3f4110;
        case 0x3f4114u: goto label_3f4114;
        case 0x3f4118u: goto label_3f4118;
        case 0x3f411cu: goto label_3f411c;
        case 0x3f4120u: goto label_3f4120;
        case 0x3f4124u: goto label_3f4124;
        case 0x3f4128u: goto label_3f4128;
        case 0x3f412cu: goto label_3f412c;
        default: break;
    }

    ctx->pc = 0x3f4080u;

label_3f4080:
    // 0x3f4080: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f4080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f4084:
    // 0x3f4084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4088:
    // 0x3f4088: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3f4088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3f408c:
    // 0x3f408c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3f4090:
    // 0x3f4090: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f4090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f4094:
    // 0x3f4094: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3f4094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f4098:
    // 0x3f4098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f4098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f409c:
    // 0x3f409c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3f409cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f40a0:
    // 0x3f40a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f40a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f40a4:
    // 0x3f40a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f40a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f40a8:
    // 0x3f40a8: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x3f40a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3f40ac:
    // 0x3f40ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f40acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f40b0:
    // 0x3f40b0: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x3f40b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_3f40b4:
    // 0x3f40b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f40b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f40b8:
    // 0x3f40b8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x3f40b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3f40bc:
    // 0x3f40bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3f40bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f40c0:
    // 0x3f40c0: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x3f40c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_3f40c4:
    // 0x3f40c4: 0x24d00074  addiu       $s0, $a2, 0x74
    ctx->pc = 0x3f40c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
label_3f40c8:
    // 0x3f40c8: 0x8cc60074  lw          $a2, 0x74($a2)
    ctx->pc = 0x3f40c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3f40cc:
    // 0x3f40cc: 0x10c3000f  beq         $a2, $v1, . + 4 + (0xF << 2)
label_3f40d0:
    if (ctx->pc == 0x3F40D0u) {
        ctx->pc = 0x3F40D0u;
            // 0x3f40d0: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F40D4u;
        goto label_3f40d4;
    }
    ctx->pc = 0x3F40CCu;
    {
        const bool branch_taken_0x3f40cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F40D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F40CCu;
            // 0x3f40d0: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f40cc) {
            ctx->pc = 0x3F410Cu;
            goto label_3f410c;
        }
    }
    ctx->pc = 0x3F40D4u;
label_3f40d4:
    // 0x3f40d4: 0xc0fd080  jal         func_3F4200
label_3f40d8:
    if (ctx->pc == 0x3F40D8u) {
        ctx->pc = 0x3F40DCu;
        goto label_3f40dc;
    }
    ctx->pc = 0x3F40D4u;
    SET_GPR_U32(ctx, 31, 0x3F40DCu);
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F40DCu; }
        if (ctx->pc != 0x3F40DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F40DCu; }
        if (ctx->pc != 0x3F40DCu) { return; }
    }
    ctx->pc = 0x3F40DCu;
label_3f40dc:
    // 0x3f40dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f40e0:
    // 0x3f40e0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3f40e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f40e4:
    // 0x3f40e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3f40e8:
    // 0x3f40e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3f40e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f40ec:
    // 0x3f40ec: 0x8ea203a0  lw          $v0, 0x3A0($s5)
    ctx->pc = 0x3f40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 928)));
label_3f40f0:
    // 0x3f40f0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3f40f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f40f4:
    // 0x3f40f4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3f40f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f40f8:
    // 0x3f40f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3f40f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f40fc:
    // 0x3f40fc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3f40fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f4100:
    // 0x3f4100: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f4100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f4104:
    // 0x3f4104: 0x40f809  jalr        $v0
label_3f4108:
    if (ctx->pc == 0x3F4108u) {
        ctx->pc = 0x3F4108u;
            // 0x3f4108: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F410Cu;
        goto label_3f410c;
    }
    ctx->pc = 0x3F4104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F410Cu);
        ctx->pc = 0x3F4108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4104u;
            // 0x3f4108: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F410Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F410Cu; }
            if (ctx->pc != 0x3F410Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F410Cu;
label_3f410c:
    // 0x3f410c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3f410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3f4110:
    // 0x3f4110: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f4110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f4114:
    // 0x3f4114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f4114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f4118:
    // 0x3f4118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f4118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f411c:
    // 0x3f411c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f411cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f4120:
    // 0x3f4120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f4120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4124:
    // 0x3f4124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4128:
    // 0x3f4128: 0x3e00008  jr          $ra
label_3f412c:
    if (ctx->pc == 0x3F412Cu) {
        ctx->pc = 0x3F412Cu;
            // 0x3f412c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3F4130u;
        goto label_fallthrough_0x3f4128;
    }
    ctx->pc = 0x3F4128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4128u;
            // 0x3f412c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f4128:
    ctx->pc = 0x3F4130u;
}
