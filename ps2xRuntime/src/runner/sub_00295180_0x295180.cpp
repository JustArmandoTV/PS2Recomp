#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295180
// Address: 0x295180 - 0x295210
void sub_00295180_0x295180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295180_0x295180");
#endif

    switch (ctx->pc) {
        case 0x295180u: goto label_295180;
        case 0x295184u: goto label_295184;
        case 0x295188u: goto label_295188;
        case 0x29518cu: goto label_29518c;
        case 0x295190u: goto label_295190;
        case 0x295194u: goto label_295194;
        case 0x295198u: goto label_295198;
        case 0x29519cu: goto label_29519c;
        case 0x2951a0u: goto label_2951a0;
        case 0x2951a4u: goto label_2951a4;
        case 0x2951a8u: goto label_2951a8;
        case 0x2951acu: goto label_2951ac;
        case 0x2951b0u: goto label_2951b0;
        case 0x2951b4u: goto label_2951b4;
        case 0x2951b8u: goto label_2951b8;
        case 0x2951bcu: goto label_2951bc;
        case 0x2951c0u: goto label_2951c0;
        case 0x2951c4u: goto label_2951c4;
        case 0x2951c8u: goto label_2951c8;
        case 0x2951ccu: goto label_2951cc;
        case 0x2951d0u: goto label_2951d0;
        case 0x2951d4u: goto label_2951d4;
        case 0x2951d8u: goto label_2951d8;
        case 0x2951dcu: goto label_2951dc;
        case 0x2951e0u: goto label_2951e0;
        case 0x2951e4u: goto label_2951e4;
        case 0x2951e8u: goto label_2951e8;
        case 0x2951ecu: goto label_2951ec;
        case 0x2951f0u: goto label_2951f0;
        case 0x2951f4u: goto label_2951f4;
        case 0x2951f8u: goto label_2951f8;
        case 0x2951fcu: goto label_2951fc;
        case 0x295200u: goto label_295200;
        case 0x295204u: goto label_295204;
        case 0x295208u: goto label_295208;
        case 0x29520cu: goto label_29520c;
        default: break;
    }

    ctx->pc = 0x295180u;

label_295180:
    // 0x295180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_295184:
    // 0x295184: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x295184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_295188:
    // 0x295188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x295188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29518c:
    // 0x29518c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_295190:
    // 0x295190: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x295190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295194:
    // 0x295194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_295198:
    // 0x295198: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x295198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29519c:
    // 0x29519c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2951a0:
    // 0x2951a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2951a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2951a4:
    // 0x2951a4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x2951a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_2951a8:
    // 0x2951a8: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x2951a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2951ac:
    // 0x2951ac: 0x620000e  bltz        $s1, . + 4 + (0xE << 2)
label_2951b0:
    if (ctx->pc == 0x2951B0u) {
        ctx->pc = 0x2951B0u;
            // 0x2951b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2951B4u;
        goto label_2951b4;
    }
    ctx->pc = 0x2951ACu;
    {
        const bool branch_taken_0x2951ac = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2951B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951ACu;
            // 0x2951b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951ac) {
            ctx->pc = 0x2951E8u;
            goto label_2951e8;
        }
    }
    ctx->pc = 0x2951B4u;
label_2951b4:
    // 0x2951b4: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2951b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2951b8:
    // 0x2951b8: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x2951b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_2951bc:
    // 0x2951bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2951bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2951c0:
    // 0x2951c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2951c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2951c4:
    // 0x2951c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2951c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2951c8:
    // 0x2951c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2951c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2951cc:
    // 0x2951cc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2951ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2951d0:
    // 0x2951d0: 0x320f809  jalr        $t9
label_2951d4:
    if (ctx->pc == 0x2951D4u) {
        ctx->pc = 0x2951D4u;
            // 0x2951d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2951D8u;
        goto label_2951d8;
    }
    ctx->pc = 0x2951D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2951D8u);
        ctx->pc = 0x2951D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951D0u;
            // 0x2951d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2951D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2951D8u; }
            if (ctx->pc != 0x2951D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2951D8u;
label_2951d8:
    // 0x2951d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2951d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2951dc:
    // 0x2951dc: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
label_2951e0:
    if (ctx->pc == 0x2951E0u) {
        ctx->pc = 0x2951E0u;
            // 0x2951e0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x2951E4u;
        goto label_2951e4;
    }
    ctx->pc = 0x2951DCu;
    {
        const bool branch_taken_0x2951dc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2951E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951DCu;
            // 0x2951e0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2951dc) {
            ctx->pc = 0x2951B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2951b8;
        }
    }
    ctx->pc = 0x2951E4u;
label_2951e4:
    // 0x2951e4: 0x0  nop
    ctx->pc = 0x2951e4u;
    // NOP
label_2951e8:
    // 0x2951e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2951e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2951ec:
    // 0x2951ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2951ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2951f0:
    // 0x2951f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2951f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2951f4:
    // 0x2951f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2951f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2951f8:
    // 0x2951f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2951f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2951fc:
    // 0x2951fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2951fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_295200:
    // 0x295200: 0x3e00008  jr          $ra
label_295204:
    if (ctx->pc == 0x295204u) {
        ctx->pc = 0x295204u;
            // 0x295204: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x295208u;
        goto label_295208;
    }
    ctx->pc = 0x295200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295200u;
            // 0x295204: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295208u;
label_295208:
    // 0x295208: 0x0  nop
    ctx->pc = 0x295208u;
    // NOP
label_29520c:
    // 0x29520c: 0x0  nop
    ctx->pc = 0x29520cu;
    // NOP
}
