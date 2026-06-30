#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00445DB0
// Address: 0x445db0 - 0x445f90
void sub_00445DB0_0x445db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445DB0_0x445db0");
#endif

    switch (ctx->pc) {
        case 0x445db0u: goto label_445db0;
        case 0x445db4u: goto label_445db4;
        case 0x445db8u: goto label_445db8;
        case 0x445dbcu: goto label_445dbc;
        case 0x445dc0u: goto label_445dc0;
        case 0x445dc4u: goto label_445dc4;
        case 0x445dc8u: goto label_445dc8;
        case 0x445dccu: goto label_445dcc;
        case 0x445dd0u: goto label_445dd0;
        case 0x445dd4u: goto label_445dd4;
        case 0x445dd8u: goto label_445dd8;
        case 0x445ddcu: goto label_445ddc;
        case 0x445de0u: goto label_445de0;
        case 0x445de4u: goto label_445de4;
        case 0x445de8u: goto label_445de8;
        case 0x445decu: goto label_445dec;
        case 0x445df0u: goto label_445df0;
        case 0x445df4u: goto label_445df4;
        case 0x445df8u: goto label_445df8;
        case 0x445dfcu: goto label_445dfc;
        case 0x445e00u: goto label_445e00;
        case 0x445e04u: goto label_445e04;
        case 0x445e08u: goto label_445e08;
        case 0x445e0cu: goto label_445e0c;
        case 0x445e10u: goto label_445e10;
        case 0x445e14u: goto label_445e14;
        case 0x445e18u: goto label_445e18;
        case 0x445e1cu: goto label_445e1c;
        case 0x445e20u: goto label_445e20;
        case 0x445e24u: goto label_445e24;
        case 0x445e28u: goto label_445e28;
        case 0x445e2cu: goto label_445e2c;
        case 0x445e30u: goto label_445e30;
        case 0x445e34u: goto label_445e34;
        case 0x445e38u: goto label_445e38;
        case 0x445e3cu: goto label_445e3c;
        case 0x445e40u: goto label_445e40;
        case 0x445e44u: goto label_445e44;
        case 0x445e48u: goto label_445e48;
        case 0x445e4cu: goto label_445e4c;
        case 0x445e50u: goto label_445e50;
        case 0x445e54u: goto label_445e54;
        case 0x445e58u: goto label_445e58;
        case 0x445e5cu: goto label_445e5c;
        case 0x445e60u: goto label_445e60;
        case 0x445e64u: goto label_445e64;
        case 0x445e68u: goto label_445e68;
        case 0x445e6cu: goto label_445e6c;
        case 0x445e70u: goto label_445e70;
        case 0x445e74u: goto label_445e74;
        case 0x445e78u: goto label_445e78;
        case 0x445e7cu: goto label_445e7c;
        case 0x445e80u: goto label_445e80;
        case 0x445e84u: goto label_445e84;
        case 0x445e88u: goto label_445e88;
        case 0x445e8cu: goto label_445e8c;
        case 0x445e90u: goto label_445e90;
        case 0x445e94u: goto label_445e94;
        case 0x445e98u: goto label_445e98;
        case 0x445e9cu: goto label_445e9c;
        case 0x445ea0u: goto label_445ea0;
        case 0x445ea4u: goto label_445ea4;
        case 0x445ea8u: goto label_445ea8;
        case 0x445eacu: goto label_445eac;
        case 0x445eb0u: goto label_445eb0;
        case 0x445eb4u: goto label_445eb4;
        case 0x445eb8u: goto label_445eb8;
        case 0x445ebcu: goto label_445ebc;
        case 0x445ec0u: goto label_445ec0;
        case 0x445ec4u: goto label_445ec4;
        case 0x445ec8u: goto label_445ec8;
        case 0x445eccu: goto label_445ecc;
        case 0x445ed0u: goto label_445ed0;
        case 0x445ed4u: goto label_445ed4;
        case 0x445ed8u: goto label_445ed8;
        case 0x445edcu: goto label_445edc;
        case 0x445ee0u: goto label_445ee0;
        case 0x445ee4u: goto label_445ee4;
        case 0x445ee8u: goto label_445ee8;
        case 0x445eecu: goto label_445eec;
        case 0x445ef0u: goto label_445ef0;
        case 0x445ef4u: goto label_445ef4;
        case 0x445ef8u: goto label_445ef8;
        case 0x445efcu: goto label_445efc;
        case 0x445f00u: goto label_445f00;
        case 0x445f04u: goto label_445f04;
        case 0x445f08u: goto label_445f08;
        case 0x445f0cu: goto label_445f0c;
        case 0x445f10u: goto label_445f10;
        case 0x445f14u: goto label_445f14;
        case 0x445f18u: goto label_445f18;
        case 0x445f1cu: goto label_445f1c;
        case 0x445f20u: goto label_445f20;
        case 0x445f24u: goto label_445f24;
        case 0x445f28u: goto label_445f28;
        case 0x445f2cu: goto label_445f2c;
        case 0x445f30u: goto label_445f30;
        case 0x445f34u: goto label_445f34;
        case 0x445f38u: goto label_445f38;
        case 0x445f3cu: goto label_445f3c;
        case 0x445f40u: goto label_445f40;
        case 0x445f44u: goto label_445f44;
        case 0x445f48u: goto label_445f48;
        case 0x445f4cu: goto label_445f4c;
        case 0x445f50u: goto label_445f50;
        case 0x445f54u: goto label_445f54;
        case 0x445f58u: goto label_445f58;
        case 0x445f5cu: goto label_445f5c;
        case 0x445f60u: goto label_445f60;
        case 0x445f64u: goto label_445f64;
        case 0x445f68u: goto label_445f68;
        case 0x445f6cu: goto label_445f6c;
        case 0x445f70u: goto label_445f70;
        case 0x445f74u: goto label_445f74;
        case 0x445f78u: goto label_445f78;
        case 0x445f7cu: goto label_445f7c;
        case 0x445f80u: goto label_445f80;
        case 0x445f84u: goto label_445f84;
        case 0x445f88u: goto label_445f88;
        case 0x445f8cu: goto label_445f8c;
        default: break;
    }

    ctx->pc = 0x445db0u;

label_445db0:
    // 0x445db0: 0x80788fc  j           func_1E23F0
label_445db4:
    if (ctx->pc == 0x445DB4u) {
        ctx->pc = 0x445DB8u;
        goto label_445db8;
    }
    ctx->pc = 0x445DB0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x445DB8u;
label_445db8:
    // 0x445db8: 0x0  nop
    ctx->pc = 0x445db8u;
    // NOP
label_445dbc:
    // 0x445dbc: 0x0  nop
    ctx->pc = 0x445dbcu;
    // NOP
label_445dc0:
    // 0x445dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x445dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_445dc4:
    // 0x445dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x445dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_445dc8:
    // 0x445dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_445dcc:
    // 0x445dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x445dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_445dd0:
    // 0x445dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x445dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445dd4:
    // 0x445dd4: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_445dd8:
    if (ctx->pc == 0x445DD8u) {
        ctx->pc = 0x445DD8u;
            // 0x445dd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445DDCu;
        goto label_445ddc;
    }
    ctx->pc = 0x445DD4u;
    {
        const bool branch_taken_0x445dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x445DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445DD4u;
            // 0x445dd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445dd4) {
            ctx->pc = 0x445E88u;
            goto label_445e88;
        }
    }
    ctx->pc = 0x445DDCu;
label_445ddc:
    // 0x445ddc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x445ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_445de0:
    // 0x445de0: 0x2442d480  addiu       $v0, $v0, -0x2B80
    ctx->pc = 0x445de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956160));
label_445de4:
    // 0x445de4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x445de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_445de8:
    // 0x445de8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x445de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_445dec:
    // 0x445dec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x445decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_445df0:
    // 0x445df0: 0x320f809  jalr        $t9
label_445df4:
    if (ctx->pc == 0x445DF4u) {
        ctx->pc = 0x445DF8u;
        goto label_445df8;
    }
    ctx->pc = 0x445DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x445DF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x445DF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x445DF8u; }
            if (ctx->pc != 0x445DF8u) { return; }
        }
        }
    }
    ctx->pc = 0x445DF8u;
label_445df8:
    // 0x445df8: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x445df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_445dfc:
    // 0x445dfc: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_445e00:
    if (ctx->pc == 0x445E00u) {
        ctx->pc = 0x445E04u;
        goto label_445e04;
    }
    ctx->pc = 0x445DFCu;
    {
        const bool branch_taken_0x445dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x445dfc) {
            ctx->pc = 0x445E4Cu;
            goto label_445e4c;
        }
    }
    ctx->pc = 0x445E04u;
label_445e04:
    // 0x445e04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x445e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_445e08:
    // 0x445e08: 0x2442d440  addiu       $v0, $v0, -0x2BC0
    ctx->pc = 0x445e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956096));
label_445e0c:
    // 0x445e0c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_445e10:
    if (ctx->pc == 0x445E10u) {
        ctx->pc = 0x445E10u;
            // 0x445e10: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x445E14u;
        goto label_445e14;
    }
    ctx->pc = 0x445E0Cu;
    {
        const bool branch_taken_0x445e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445E0Cu;
            // 0x445e10: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e0c) {
            ctx->pc = 0x445E4Cu;
            goto label_445e4c;
        }
    }
    ctx->pc = 0x445E14u;
label_445e14:
    // 0x445e14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x445e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_445e18:
    // 0x445e18: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x445e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_445e1c:
    // 0x445e1c: 0xc0d37dc  jal         func_34DF70
label_445e20:
    if (ctx->pc == 0x445E20u) {
        ctx->pc = 0x445E20u;
            // 0x445e20: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x445E24u;
        goto label_445e24;
    }
    ctx->pc = 0x445E1Cu;
    SET_GPR_U32(ctx, 31, 0x445E24u);
    ctx->pc = 0x445E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445E1Cu;
            // 0x445e20: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445E24u; }
        if (ctx->pc != 0x445E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445E24u; }
        if (ctx->pc != 0x445E24u) { return; }
    }
    ctx->pc = 0x445E24u;
label_445e24:
    // 0x445e24: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x445e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_445e28:
    // 0x445e28: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_445e2c:
    if (ctx->pc == 0x445E2Cu) {
        ctx->pc = 0x445E30u;
        goto label_445e30;
    }
    ctx->pc = 0x445E28u;
    {
        const bool branch_taken_0x445e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x445e28) {
            ctx->pc = 0x445E4Cu;
            goto label_445e4c;
        }
    }
    ctx->pc = 0x445E30u;
label_445e30:
    // 0x445e30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x445e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_445e34:
    // 0x445e34: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x445e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_445e38:
    // 0x445e38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_445e3c:
    if (ctx->pc == 0x445E3Cu) {
        ctx->pc = 0x445E3Cu;
            // 0x445e3c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x445E40u;
        goto label_445e40;
    }
    ctx->pc = 0x445E38u;
    {
        const bool branch_taken_0x445e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445E38u;
            // 0x445e3c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e38) {
            ctx->pc = 0x445E4Cu;
            goto label_445e4c;
        }
    }
    ctx->pc = 0x445E40u;
label_445e40:
    // 0x445e40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x445e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_445e44:
    // 0x445e44: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x445e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_445e48:
    // 0x445e48: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x445e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_445e4c:
    // 0x445e4c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_445e50:
    if (ctx->pc == 0x445E50u) {
        ctx->pc = 0x445E50u;
            // 0x445e50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x445E54u;
        goto label_445e54;
    }
    ctx->pc = 0x445E4Cu;
    {
        const bool branch_taken_0x445e4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x445e4c) {
            ctx->pc = 0x445E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445E4Cu;
            // 0x445e50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445E74u;
            goto label_445e74;
        }
    }
    ctx->pc = 0x445E54u;
label_445e54:
    // 0x445e54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x445e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_445e58:
    // 0x445e58: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x445e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_445e5c:
    // 0x445e5c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_445e60:
    if (ctx->pc == 0x445E60u) {
        ctx->pc = 0x445E60u;
            // 0x445e60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x445E64u;
        goto label_445e64;
    }
    ctx->pc = 0x445E5Cu;
    {
        const bool branch_taken_0x445e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445E5Cu;
            // 0x445e60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e5c) {
            ctx->pc = 0x445E70u;
            goto label_445e70;
        }
    }
    ctx->pc = 0x445E64u;
label_445e64:
    // 0x445e64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x445e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_445e68:
    // 0x445e68: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x445e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_445e6c:
    // 0x445e6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x445e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_445e70:
    // 0x445e70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x445e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_445e74:
    // 0x445e74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x445e74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_445e78:
    // 0x445e78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_445e7c:
    if (ctx->pc == 0x445E7Cu) {
        ctx->pc = 0x445E7Cu;
            // 0x445e7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445E80u;
        goto label_445e80;
    }
    ctx->pc = 0x445E78u;
    {
        const bool branch_taken_0x445e78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x445e78) {
            ctx->pc = 0x445E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445E78u;
            // 0x445e7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445E8Cu;
            goto label_445e8c;
        }
    }
    ctx->pc = 0x445E80u;
label_445e80:
    // 0x445e80: 0xc0400a8  jal         func_1002A0
label_445e84:
    if (ctx->pc == 0x445E84u) {
        ctx->pc = 0x445E84u;
            // 0x445e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445E88u;
        goto label_445e88;
    }
    ctx->pc = 0x445E80u;
    SET_GPR_U32(ctx, 31, 0x445E88u);
    ctx->pc = 0x445E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445E80u;
            // 0x445e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445E88u; }
        if (ctx->pc != 0x445E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445E88u; }
        if (ctx->pc != 0x445E88u) { return; }
    }
    ctx->pc = 0x445E88u;
label_445e88:
    // 0x445e88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x445e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_445e8c:
    // 0x445e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x445e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_445e90:
    // 0x445e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x445e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445e94:
    // 0x445e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x445e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_445e98:
    // 0x445e98: 0x3e00008  jr          $ra
label_445e9c:
    if (ctx->pc == 0x445E9Cu) {
        ctx->pc = 0x445E9Cu;
            // 0x445e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x445EA0u;
        goto label_445ea0;
    }
    ctx->pc = 0x445E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445E98u;
            // 0x445e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445EA0u;
label_445ea0:
    // 0x445ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x445ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_445ea4:
    // 0x445ea4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x445ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_445ea8:
    // 0x445ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x445ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_445eac:
    // 0x445eac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x445eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_445eb0:
    // 0x445eb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x445eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_445eb4:
    // 0x445eb4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x445eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_445eb8:
    // 0x445eb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x445eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_445ebc:
    // 0x445ebc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x445ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_445ec0:
    // 0x445ec0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x445ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_445ec4:
    // 0x445ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x445ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_445ec8:
    // 0x445ec8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x445ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_445ecc:
    // 0x445ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445ed0:
    // 0x445ed0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x445ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_445ed4:
    // 0x445ed4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x445ed4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_445ed8:
    // 0x445ed8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x445ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_445edc:
    // 0x445edc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x445edcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_445ee0:
    // 0x445ee0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x445ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_445ee4:
    // 0x445ee4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x445ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_445ee8:
    // 0x445ee8: 0xc04cbd8  jal         func_132F60
label_445eec:
    if (ctx->pc == 0x445EECu) {
        ctx->pc = 0x445EECu;
            // 0x445eec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x445EF0u;
        goto label_445ef0;
    }
    ctx->pc = 0x445EE8u;
    SET_GPR_U32(ctx, 31, 0x445EF0u);
    ctx->pc = 0x445EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445EE8u;
            // 0x445eec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445EF0u; }
        if (ctx->pc != 0x445EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445EF0u; }
        if (ctx->pc != 0x445EF0u) { return; }
    }
    ctx->pc = 0x445EF0u;
label_445ef0:
    // 0x445ef0: 0xc04c968  jal         func_1325A0
label_445ef4:
    if (ctx->pc == 0x445EF4u) {
        ctx->pc = 0x445EF4u;
            // 0x445ef4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x445EF8u;
        goto label_445ef8;
    }
    ctx->pc = 0x445EF0u;
    SET_GPR_U32(ctx, 31, 0x445EF8u);
    ctx->pc = 0x445EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445EF0u;
            // 0x445ef4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445EF8u; }
        if (ctx->pc != 0x445EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445EF8u; }
        if (ctx->pc != 0x445EF8u) { return; }
    }
    ctx->pc = 0x445EF8u;
label_445ef8:
    // 0x445ef8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x445ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_445efc:
    // 0x445efc: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x445efcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_445f00:
    // 0x445f00: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x445f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_445f04:
    // 0x445f04: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x445f04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_445f08:
    // 0x445f08: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x445f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_445f0c:
    // 0x445f0c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x445f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_445f10:
    // 0x445f10: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x445f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_445f14:
    // 0x445f14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x445f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_445f18:
    // 0x445f18: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x445f18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_445f1c:
    // 0x445f1c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x445f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_445f20:
    // 0x445f20: 0x24e7d480  addiu       $a3, $a3, -0x2B80
    ctx->pc = 0x445f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956160));
label_445f24:
    // 0x445f24: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x445f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
label_445f28:
    // 0x445f28: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x445f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
label_445f2c:
    // 0x445f2c: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x445f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_445f30:
    // 0x445f30: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x445f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_445f34:
    // 0x445f34: 0x2463d440  addiu       $v1, $v1, -0x2BC0
    ctx->pc = 0x445f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956096));
label_445f38:
    // 0x445f38: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x445f38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_445f3c:
    // 0x445f3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x445f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445f40:
    // 0x445f40: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x445f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_445f44:
    // 0x445f44: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x445f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_445f48:
    // 0x445f48: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x445f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
label_445f4c:
    // 0x445f4c: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x445f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
label_445f50:
    // 0x445f50: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x445f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
label_445f54:
    // 0x445f54: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x445f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_445f58:
    // 0x445f58: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x445f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_445f5c:
    // 0x445f5c: 0xae100058  sw          $s0, 0x58($s0)
    ctx->pc = 0x445f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 16));
label_445f60:
    // 0x445f60: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x445f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_445f64:
    // 0x445f64: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x445f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_445f68:
    // 0x445f68: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x445f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_445f6c:
    // 0x445f6c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x445f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_445f70:
    // 0x445f70: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x445f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_445f74:
    // 0x445f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x445f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_445f78:
    // 0x445f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x445f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_445f7c:
    // 0x445f7c: 0x3e00008  jr          $ra
label_445f80:
    if (ctx->pc == 0x445F80u) {
        ctx->pc = 0x445F80u;
            // 0x445f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x445F84u;
        goto label_445f84;
    }
    ctx->pc = 0x445F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445F7Cu;
            // 0x445f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445F84u;
label_445f84:
    // 0x445f84: 0x0  nop
    ctx->pc = 0x445f84u;
    // NOP
label_445f88:
    // 0x445f88: 0x0  nop
    ctx->pc = 0x445f88u;
    // NOP
label_445f8c:
    // 0x445f8c: 0x0  nop
    ctx->pc = 0x445f8cu;
    // NOP
}
