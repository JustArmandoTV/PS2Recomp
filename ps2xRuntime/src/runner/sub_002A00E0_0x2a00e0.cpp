#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A00E0
// Address: 0x2a00e0 - 0x2a0150
void sub_002A00E0_0x2a00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A00E0_0x2a00e0");
#endif

    switch (ctx->pc) {
        case 0x2a00e0u: goto label_2a00e0;
        case 0x2a00e4u: goto label_2a00e4;
        case 0x2a00e8u: goto label_2a00e8;
        case 0x2a00ecu: goto label_2a00ec;
        case 0x2a00f0u: goto label_2a00f0;
        case 0x2a00f4u: goto label_2a00f4;
        case 0x2a00f8u: goto label_2a00f8;
        case 0x2a00fcu: goto label_2a00fc;
        case 0x2a0100u: goto label_2a0100;
        case 0x2a0104u: goto label_2a0104;
        case 0x2a0108u: goto label_2a0108;
        case 0x2a010cu: goto label_2a010c;
        case 0x2a0110u: goto label_2a0110;
        case 0x2a0114u: goto label_2a0114;
        case 0x2a0118u: goto label_2a0118;
        case 0x2a011cu: goto label_2a011c;
        case 0x2a0120u: goto label_2a0120;
        case 0x2a0124u: goto label_2a0124;
        case 0x2a0128u: goto label_2a0128;
        case 0x2a012cu: goto label_2a012c;
        case 0x2a0130u: goto label_2a0130;
        case 0x2a0134u: goto label_2a0134;
        case 0x2a0138u: goto label_2a0138;
        case 0x2a013cu: goto label_2a013c;
        case 0x2a0140u: goto label_2a0140;
        case 0x2a0144u: goto label_2a0144;
        case 0x2a0148u: goto label_2a0148;
        case 0x2a014cu: goto label_2a014c;
        default: break;
    }

    ctx->pc = 0x2a00e0u;

label_2a00e0:
    // 0x2a00e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a00e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a00e4:
    // 0x2a00e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a00e8:
    // 0x2a00e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a00e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a00ec:
    // 0x2a00ec: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2a00ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2a00f0:
    // 0x2a00f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a00f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a00f4:
    // 0x2a00f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a00f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a00f8:
    // 0x2a00f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a00f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a00fc:
    // 0x2a00fc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2a00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2a0100:
    // 0x2a0100: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a0100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0104:
    // 0x2a0104: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2a0104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2a0108:
    // 0x2a0108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a010c:
    // 0x2a010c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a0110:
    // 0x2a0110: 0x320f809  jalr        $t9
label_2a0114:
    if (ctx->pc == 0x2A0114u) {
        ctx->pc = 0x2A0114u;
            // 0x2a0114: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0118u;
        goto label_2a0118;
    }
    ctx->pc = 0x2A0110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0118u);
        ctx->pc = 0x2A0114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0110u;
            // 0x2a0114: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0118u; }
            if (ctx->pc != 0x2A0118u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0118u;
label_2a0118:
    // 0x2a0118: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a0118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2a011c:
    // 0x2a011c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a0120:
    // 0x2a0120: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2a0120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2a0124:
    // 0x2a0124: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a0124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0128:
    // 0x2a0128: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2a0128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2a012c:
    // 0x2a012c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x2a012cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_2a0130:
    // 0x2a0130: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2a0130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_2a0134:
    // 0x2a0134: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2a0134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_2a0138:
    // 0x2a0138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a0138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a013c:
    // 0x2a013c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a013cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0140:
    // 0x2a0140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0144:
    // 0x2a0144: 0x3e00008  jr          $ra
label_2a0148:
    if (ctx->pc == 0x2A0148u) {
        ctx->pc = 0x2A0148u;
            // 0x2a0148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A014Cu;
        goto label_2a014c;
    }
    ctx->pc = 0x2A0144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0144u;
            // 0x2a0148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A014Cu;
label_2a014c:
    // 0x2a014c: 0x0  nop
    ctx->pc = 0x2a014cu;
    // NOP
}
