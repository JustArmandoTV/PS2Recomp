#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051D8A0
// Address: 0x51d8a0 - 0x51d930
void sub_0051D8A0_0x51d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051D8A0_0x51d8a0");
#endif

    switch (ctx->pc) {
        case 0x51d8a0u: goto label_51d8a0;
        case 0x51d8a4u: goto label_51d8a4;
        case 0x51d8a8u: goto label_51d8a8;
        case 0x51d8acu: goto label_51d8ac;
        case 0x51d8b0u: goto label_51d8b0;
        case 0x51d8b4u: goto label_51d8b4;
        case 0x51d8b8u: goto label_51d8b8;
        case 0x51d8bcu: goto label_51d8bc;
        case 0x51d8c0u: goto label_51d8c0;
        case 0x51d8c4u: goto label_51d8c4;
        case 0x51d8c8u: goto label_51d8c8;
        case 0x51d8ccu: goto label_51d8cc;
        case 0x51d8d0u: goto label_51d8d0;
        case 0x51d8d4u: goto label_51d8d4;
        case 0x51d8d8u: goto label_51d8d8;
        case 0x51d8dcu: goto label_51d8dc;
        case 0x51d8e0u: goto label_51d8e0;
        case 0x51d8e4u: goto label_51d8e4;
        case 0x51d8e8u: goto label_51d8e8;
        case 0x51d8ecu: goto label_51d8ec;
        case 0x51d8f0u: goto label_51d8f0;
        case 0x51d8f4u: goto label_51d8f4;
        case 0x51d8f8u: goto label_51d8f8;
        case 0x51d8fcu: goto label_51d8fc;
        case 0x51d900u: goto label_51d900;
        case 0x51d904u: goto label_51d904;
        case 0x51d908u: goto label_51d908;
        case 0x51d90cu: goto label_51d90c;
        case 0x51d910u: goto label_51d910;
        case 0x51d914u: goto label_51d914;
        case 0x51d918u: goto label_51d918;
        case 0x51d91cu: goto label_51d91c;
        case 0x51d920u: goto label_51d920;
        case 0x51d924u: goto label_51d924;
        case 0x51d928u: goto label_51d928;
        case 0x51d92cu: goto label_51d92c;
        default: break;
    }

    ctx->pc = 0x51d8a0u;

label_51d8a0:
    // 0x51d8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51d8a4:
    // 0x51d8a4: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x51d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_51d8a8:
    // 0x51d8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51d8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d8ac:
    // 0x51d8ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51d8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51d8b0:
    // 0x51d8b0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x51d8b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51d8b4:
    // 0x51d8b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51d8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51d8b8:
    // 0x51d8b8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_51d8bc:
    if (ctx->pc == 0x51D8BCu) {
        ctx->pc = 0x51D8BCu;
            // 0x51d8bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D8C0u;
        goto label_51d8c0;
    }
    ctx->pc = 0x51D8B8u;
    {
        const bool branch_taken_0x51d8b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x51D8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D8B8u;
            // 0x51d8bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d8b8) {
            ctx->pc = 0x51D918u;
            goto label_51d918;
        }
    }
    ctx->pc = 0x51D8C0u;
label_51d8c0:
    // 0x51d8c0: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x51d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_51d8c4:
    // 0x51d8c4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x51d8c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_51d8c8:
    // 0x51d8c8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_51d8cc:
    if (ctx->pc == 0x51D8CCu) {
        ctx->pc = 0x51D8D0u;
        goto label_51d8d0;
    }
    ctx->pc = 0x51D8C8u;
    {
        const bool branch_taken_0x51d8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51d8c8) {
            ctx->pc = 0x51D8DCu;
            goto label_51d8dc;
        }
    }
    ctx->pc = 0x51D8D0u;
label_51d8d0:
    // 0x51d8d0: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x51d8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_51d8d4:
    // 0x51d8d4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_51d8d8:
    if (ctx->pc == 0x51D8D8u) {
        ctx->pc = 0x51D8D8u;
            // 0x51d8d8: 0x8ca40d60  lw          $a0, 0xD60($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
        ctx->pc = 0x51D8DCu;
        goto label_51d8dc;
    }
    ctx->pc = 0x51D8D4u;
    {
        const bool branch_taken_0x51d8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51d8d4) {
            ctx->pc = 0x51D8D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D8D4u;
            // 0x51d8d8: 0x8ca40d60  lw          $a0, 0xD60($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D8FCu;
            goto label_51d8fc;
        }
    }
    ctx->pc = 0x51D8DCu;
label_51d8dc:
    // 0x51d8dc: 0x482000f  bltzl       $a0, . + 4 + (0xF << 2)
label_51d8e0:
    if (ctx->pc == 0x51D8E0u) {
        ctx->pc = 0x51D8E0u;
            // 0x51d8e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x51D8E4u;
        goto label_51d8e4;
    }
    ctx->pc = 0x51D8DCu;
    {
        const bool branch_taken_0x51d8dc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x51d8dc) {
            ctx->pc = 0x51D8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D8DCu;
            // 0x51d8e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D91Cu;
            goto label_51d91c;
        }
    }
    ctx->pc = 0x51D8E4u;
label_51d8e4:
    // 0x51d8e4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x51d8e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_51d8e8:
    // 0x51d8e8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_51d8ec:
    if (ctx->pc == 0x51D8ECu) {
        ctx->pc = 0x51D8F0u;
        goto label_51d8f0;
    }
    ctx->pc = 0x51D8E8u;
    {
        const bool branch_taken_0x51d8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51d8e8) {
            ctx->pc = 0x51D918u;
            goto label_51d918;
        }
    }
    ctx->pc = 0x51D8F0u;
label_51d8f0:
    // 0x51d8f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_51d8f4:
    if (ctx->pc == 0x51D8F4u) {
        ctx->pc = 0x51D8F8u;
        goto label_51d8f8;
    }
    ctx->pc = 0x51D8F0u;
    {
        const bool branch_taken_0x51d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d8f0) {
            ctx->pc = 0x51D918u;
            goto label_51d918;
        }
    }
    ctx->pc = 0x51D8F8u;
label_51d8f8:
    // 0x51d8f8: 0x8ca40d60  lw          $a0, 0xD60($a1)
    ctx->pc = 0x51d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_51d8fc:
    // 0x51d8fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x51d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_51d900:
    // 0x51d900: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x51d900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_51d904:
    // 0x51d904: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x51d904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_51d908:
    // 0x51d908: 0x320f809  jalr        $t9
label_51d90c:
    if (ctx->pc == 0x51D90Cu) {
        ctx->pc = 0x51D90Cu;
            // 0x51d90c: 0x344511a9  ori         $a1, $v0, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4521);
        ctx->pc = 0x51D910u;
        goto label_51d910;
    }
    ctx->pc = 0x51D908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51D910u);
        ctx->pc = 0x51D90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D908u;
            // 0x51d90c: 0x344511a9  ori         $a1, $v0, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4521);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51D910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51D910u; }
            if (ctx->pc != 0x51D910u) { return; }
        }
        }
    }
    ctx->pc = 0x51D910u;
label_51d910:
    // 0x51d910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51d910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51d914:
    // 0x51d914: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x51d914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_51d918:
    // 0x51d918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51d918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51d91c:
    // 0x51d91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51d91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51d920:
    // 0x51d920: 0x3e00008  jr          $ra
label_51d924:
    if (ctx->pc == 0x51D924u) {
        ctx->pc = 0x51D924u;
            // 0x51d924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51D928u;
        goto label_51d928;
    }
    ctx->pc = 0x51D920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51D924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D920u;
            // 0x51d924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51D928u;
label_51d928:
    // 0x51d928: 0x0  nop
    ctx->pc = 0x51d928u;
    // NOP
label_51d92c:
    // 0x51d92c: 0x0  nop
    ctx->pc = 0x51d92cu;
    // NOP
}
