#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0056A0E0
// Address: 0x56a0e0 - 0x56a150
void sub_0056A0E0_0x56a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0056A0E0_0x56a0e0");
#endif

    switch (ctx->pc) {
        case 0x56a0e0u: goto label_56a0e0;
        case 0x56a0e4u: goto label_56a0e4;
        case 0x56a0e8u: goto label_56a0e8;
        case 0x56a0ecu: goto label_56a0ec;
        case 0x56a0f0u: goto label_56a0f0;
        case 0x56a0f4u: goto label_56a0f4;
        case 0x56a0f8u: goto label_56a0f8;
        case 0x56a0fcu: goto label_56a0fc;
        case 0x56a100u: goto label_56a100;
        case 0x56a104u: goto label_56a104;
        case 0x56a108u: goto label_56a108;
        case 0x56a10cu: goto label_56a10c;
        case 0x56a110u: goto label_56a110;
        case 0x56a114u: goto label_56a114;
        case 0x56a118u: goto label_56a118;
        case 0x56a11cu: goto label_56a11c;
        case 0x56a120u: goto label_56a120;
        case 0x56a124u: goto label_56a124;
        case 0x56a128u: goto label_56a128;
        case 0x56a12cu: goto label_56a12c;
        case 0x56a130u: goto label_56a130;
        case 0x56a134u: goto label_56a134;
        case 0x56a138u: goto label_56a138;
        case 0x56a13cu: goto label_56a13c;
        case 0x56a140u: goto label_56a140;
        case 0x56a144u: goto label_56a144;
        case 0x56a148u: goto label_56a148;
        case 0x56a14cu: goto label_56a14c;
        default: break;
    }

    ctx->pc = 0x56a0e0u;

label_56a0e0:
    // 0x56a0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x56a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_56a0e4:
    // 0x56a0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x56a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_56a0e8:
    // 0x56a0e8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x56a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_56a0ec:
    // 0x56a0ec: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x56a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_56a0f0:
    // 0x56a0f0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_56a0f4:
    if (ctx->pc == 0x56A0F4u) {
        ctx->pc = 0x56A0F4u;
            // 0x56a0f4: 0x24860058  addiu       $a2, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->pc = 0x56A0F8u;
        goto label_56a0f8;
    }
    ctx->pc = 0x56A0F0u;
    {
        const bool branch_taken_0x56a0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A0F0u;
            // 0x56a0f4: 0x24860058  addiu       $a2, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a0f0) {
            ctx->pc = 0x56A13Cu;
            goto label_56a13c;
        }
    }
    ctx->pc = 0x56A0F8u;
label_56a0f8:
    // 0x56a0f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x56a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_56a0fc:
    // 0x56a0fc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x56a0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_56a100:
    // 0x56a100: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_56a104:
    if (ctx->pc == 0x56A104u) {
        ctx->pc = 0x56A104u;
            // 0x56a104: 0x24c2000c  addiu       $v0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->pc = 0x56A108u;
        goto label_56a108;
    }
    ctx->pc = 0x56A100u;
    {
        const bool branch_taken_0x56a100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x56a100) {
            ctx->pc = 0x56A104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A100u;
            // 0x56a104: 0x24c2000c  addiu       $v0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A124u;
            goto label_56a124;
        }
    }
    ctx->pc = 0x56A108u;
label_56a108:
    // 0x56a108: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x56a108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_56a10c:
    // 0x56a10c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x56a10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56a110:
    // 0x56a110: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x56a110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_56a114:
    // 0x56a114: 0x320f809  jalr        $t9
label_56a118:
    if (ctx->pc == 0x56A118u) {
        ctx->pc = 0x56A118u;
            // 0x56a118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56A11Cu;
        goto label_56a11c;
    }
    ctx->pc = 0x56A114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56A11Cu);
        ctx->pc = 0x56A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A114u;
            // 0x56a118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56A11Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56A11Cu; }
            if (ctx->pc != 0x56A11Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56A11Cu;
label_56a11c:
    // 0x56a11c: 0x10000008  b           . + 4 + (0x8 << 2)
label_56a120:
    if (ctx->pc == 0x56A120u) {
        ctx->pc = 0x56A120u;
            // 0x56a120: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x56A124u;
        goto label_56a124;
    }
    ctx->pc = 0x56A11Cu;
    {
        const bool branch_taken_0x56a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A11Cu;
            // 0x56a120: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a11c) {
            ctx->pc = 0x56A140u;
            goto label_56a140;
        }
    }
    ctx->pc = 0x56A124u;
label_56a124:
    // 0x56a124: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x56a124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_56a128:
    // 0x56a128: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x56a128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_56a12c:
    // 0x56a12c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x56a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_56a130:
    // 0x56a130: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x56a130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_56a134:
    // 0x56a134: 0xc0582cc  jal         func_160B30
label_56a138:
    if (ctx->pc == 0x56A138u) {
        ctx->pc = 0x56A138u;
            // 0x56a138: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->pc = 0x56A13Cu;
        goto label_56a13c;
    }
    ctx->pc = 0x56A134u;
    SET_GPR_U32(ctx, 31, 0x56A13Cu);
    ctx->pc = 0x56A138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A134u;
            // 0x56a138: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A13Cu; }
        if (ctx->pc != 0x56A13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A13Cu; }
        if (ctx->pc != 0x56A13Cu) { return; }
    }
    ctx->pc = 0x56A13Cu;
label_56a13c:
    // 0x56a13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x56a13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_56a140:
    // 0x56a140: 0x3e00008  jr          $ra
label_56a144:
    if (ctx->pc == 0x56A144u) {
        ctx->pc = 0x56A144u;
            // 0x56a144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x56A148u;
        goto label_56a148;
    }
    ctx->pc = 0x56A140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A140u;
            // 0x56a144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A148u;
label_56a148:
    // 0x56a148: 0x0  nop
    ctx->pc = 0x56a148u;
    // NOP
label_56a14c:
    // 0x56a14c: 0x0  nop
    ctx->pc = 0x56a14cu;
    // NOP
}
