#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1128
// Address: 0x1a1128 - 0x1a1180
void sub_001A1128_0x1a1128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1128_0x1a1128");
#endif

    switch (ctx->pc) {
        case 0x1a1128u: goto label_1a1128;
        case 0x1a112cu: goto label_1a112c;
        case 0x1a1130u: goto label_1a1130;
        case 0x1a1134u: goto label_1a1134;
        case 0x1a1138u: goto label_1a1138;
        case 0x1a113cu: goto label_1a113c;
        case 0x1a1140u: goto label_1a1140;
        case 0x1a1144u: goto label_1a1144;
        case 0x1a1148u: goto label_1a1148;
        case 0x1a114cu: goto label_1a114c;
        case 0x1a1150u: goto label_1a1150;
        case 0x1a1154u: goto label_1a1154;
        case 0x1a1158u: goto label_1a1158;
        case 0x1a115cu: goto label_1a115c;
        case 0x1a1160u: goto label_1a1160;
        case 0x1a1164u: goto label_1a1164;
        case 0x1a1168u: goto label_1a1168;
        case 0x1a116cu: goto label_1a116c;
        case 0x1a1170u: goto label_1a1170;
        case 0x1a1174u: goto label_1a1174;
        case 0x1a1178u: goto label_1a1178;
        case 0x1a117cu: goto label_1a117c;
        default: break;
    }

    ctx->pc = 0x1a1128u;

label_1a1128:
    // 0x1a1128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a112c:
    // 0x1a112c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a112cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1130:
    // 0x1a1130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a1130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1134:
    // 0x1a1134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1138:
    // 0x1a1138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a113c:
    // 0x1a113c: 0xc0685c8  jal         func_1A1720
label_1a1140:
    if (ctx->pc == 0x1A1140u) {
        ctx->pc = 0x1A1140u;
            // 0x1a1140: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1144u;
        goto label_1a1144;
    }
    ctx->pc = 0x1A113Cu;
    SET_GPR_U32(ctx, 31, 0x1A1144u);
    ctx->pc = 0x1A1140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A113Cu;
            // 0x1a1140: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1720u;
    if (runtime->hasFunction(0x1A1720u)) {
        auto targetFn = runtime->lookupFunction(0x1A1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1144u; }
        if (ctx->pc != 0x1A1144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1720_0x1a1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1144u; }
        if (ctx->pc != 0x1A1144u) { return; }
    }
    ctx->pc = 0x1A1144u;
label_1a1144:
    // 0x1a1144: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1148:
    if (ctx->pc == 0x1A1148u) {
        ctx->pc = 0x1A1148u;
            // 0x1a1148: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A114Cu;
        goto label_1a114c;
    }
    ctx->pc = 0x1A1144u;
    {
        const bool branch_taken_0x1a1144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1144u;
            // 0x1a1148: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1144) {
            ctx->pc = 0x1A1164u;
            goto label_1a1164;
        }
    }
    ctx->pc = 0x1A114Cu;
label_1a114c:
    // 0x1a114c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a1150:
    // 0x1a1150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a1154:
    if (ctx->pc == 0x1A1154u) {
        ctx->pc = 0x1A1154u;
            // 0x1a1154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1158u;
        goto label_1a1158;
    }
    ctx->pc = 0x1A1150u;
    {
        const bool branch_taken_0x1a1150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1150u;
            // 0x1a1154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1150) {
            ctx->pc = 0x1A1164u;
            goto label_1a1164;
        }
    }
    ctx->pc = 0x1A1158u;
label_1a1158:
    // 0x1a1158: 0x40f809  jalr        $v0
label_1a115c:
    if (ctx->pc == 0x1A115Cu) {
        ctx->pc = 0x1A115Cu;
            // 0x1a115c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1160u;
        goto label_1a1160;
    }
    ctx->pc = 0x1A1158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1160u);
        ctx->pc = 0x1A115Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1158u;
            // 0x1a115c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1160u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1160u; }
            if (ctx->pc != 0x1A1160u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1160u;
label_1a1160:
    // 0x1a1160: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a1160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1164:
    // 0x1a1164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1168:
    // 0x1a1168: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a1168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a116c:
    // 0x1a116c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a116cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1170:
    // 0x1a1170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1174:
    // 0x1a1174: 0x3e00008  jr          $ra
label_1a1178:
    if (ctx->pc == 0x1A1178u) {
        ctx->pc = 0x1A1178u;
            // 0x1a1178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A117Cu;
        goto label_1a117c;
    }
    ctx->pc = 0x1A1174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1174u;
            // 0x1a1178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A117Cu;
label_1a117c:
    // 0x1a117c: 0x0  nop
    ctx->pc = 0x1a117cu;
    // NOP
}
