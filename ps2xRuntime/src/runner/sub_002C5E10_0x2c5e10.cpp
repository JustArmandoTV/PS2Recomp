#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5E10
// Address: 0x2c5e10 - 0x2c5f80
void sub_002C5E10_0x2c5e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5E10_0x2c5e10");
#endif

    switch (ctx->pc) {
        case 0x2c5e10u: goto label_2c5e10;
        case 0x2c5e14u: goto label_2c5e14;
        case 0x2c5e18u: goto label_2c5e18;
        case 0x2c5e1cu: goto label_2c5e1c;
        case 0x2c5e20u: goto label_2c5e20;
        case 0x2c5e24u: goto label_2c5e24;
        case 0x2c5e28u: goto label_2c5e28;
        case 0x2c5e2cu: goto label_2c5e2c;
        case 0x2c5e30u: goto label_2c5e30;
        case 0x2c5e34u: goto label_2c5e34;
        case 0x2c5e38u: goto label_2c5e38;
        case 0x2c5e3cu: goto label_2c5e3c;
        case 0x2c5e40u: goto label_2c5e40;
        case 0x2c5e44u: goto label_2c5e44;
        case 0x2c5e48u: goto label_2c5e48;
        case 0x2c5e4cu: goto label_2c5e4c;
        case 0x2c5e50u: goto label_2c5e50;
        case 0x2c5e54u: goto label_2c5e54;
        case 0x2c5e58u: goto label_2c5e58;
        case 0x2c5e5cu: goto label_2c5e5c;
        case 0x2c5e60u: goto label_2c5e60;
        case 0x2c5e64u: goto label_2c5e64;
        case 0x2c5e68u: goto label_2c5e68;
        case 0x2c5e6cu: goto label_2c5e6c;
        case 0x2c5e70u: goto label_2c5e70;
        case 0x2c5e74u: goto label_2c5e74;
        case 0x2c5e78u: goto label_2c5e78;
        case 0x2c5e7cu: goto label_2c5e7c;
        case 0x2c5e80u: goto label_2c5e80;
        case 0x2c5e84u: goto label_2c5e84;
        case 0x2c5e88u: goto label_2c5e88;
        case 0x2c5e8cu: goto label_2c5e8c;
        case 0x2c5e90u: goto label_2c5e90;
        case 0x2c5e94u: goto label_2c5e94;
        case 0x2c5e98u: goto label_2c5e98;
        case 0x2c5e9cu: goto label_2c5e9c;
        case 0x2c5ea0u: goto label_2c5ea0;
        case 0x2c5ea4u: goto label_2c5ea4;
        case 0x2c5ea8u: goto label_2c5ea8;
        case 0x2c5eacu: goto label_2c5eac;
        case 0x2c5eb0u: goto label_2c5eb0;
        case 0x2c5eb4u: goto label_2c5eb4;
        case 0x2c5eb8u: goto label_2c5eb8;
        case 0x2c5ebcu: goto label_2c5ebc;
        case 0x2c5ec0u: goto label_2c5ec0;
        case 0x2c5ec4u: goto label_2c5ec4;
        case 0x2c5ec8u: goto label_2c5ec8;
        case 0x2c5eccu: goto label_2c5ecc;
        case 0x2c5ed0u: goto label_2c5ed0;
        case 0x2c5ed4u: goto label_2c5ed4;
        case 0x2c5ed8u: goto label_2c5ed8;
        case 0x2c5edcu: goto label_2c5edc;
        case 0x2c5ee0u: goto label_2c5ee0;
        case 0x2c5ee4u: goto label_2c5ee4;
        case 0x2c5ee8u: goto label_2c5ee8;
        case 0x2c5eecu: goto label_2c5eec;
        case 0x2c5ef0u: goto label_2c5ef0;
        case 0x2c5ef4u: goto label_2c5ef4;
        case 0x2c5ef8u: goto label_2c5ef8;
        case 0x2c5efcu: goto label_2c5efc;
        case 0x2c5f00u: goto label_2c5f00;
        case 0x2c5f04u: goto label_2c5f04;
        case 0x2c5f08u: goto label_2c5f08;
        case 0x2c5f0cu: goto label_2c5f0c;
        case 0x2c5f10u: goto label_2c5f10;
        case 0x2c5f14u: goto label_2c5f14;
        case 0x2c5f18u: goto label_2c5f18;
        case 0x2c5f1cu: goto label_2c5f1c;
        case 0x2c5f20u: goto label_2c5f20;
        case 0x2c5f24u: goto label_2c5f24;
        case 0x2c5f28u: goto label_2c5f28;
        case 0x2c5f2cu: goto label_2c5f2c;
        case 0x2c5f30u: goto label_2c5f30;
        case 0x2c5f34u: goto label_2c5f34;
        case 0x2c5f38u: goto label_2c5f38;
        case 0x2c5f3cu: goto label_2c5f3c;
        case 0x2c5f40u: goto label_2c5f40;
        case 0x2c5f44u: goto label_2c5f44;
        case 0x2c5f48u: goto label_2c5f48;
        case 0x2c5f4cu: goto label_2c5f4c;
        case 0x2c5f50u: goto label_2c5f50;
        case 0x2c5f54u: goto label_2c5f54;
        case 0x2c5f58u: goto label_2c5f58;
        case 0x2c5f5cu: goto label_2c5f5c;
        case 0x2c5f60u: goto label_2c5f60;
        case 0x2c5f64u: goto label_2c5f64;
        case 0x2c5f68u: goto label_2c5f68;
        case 0x2c5f6cu: goto label_2c5f6c;
        case 0x2c5f70u: goto label_2c5f70;
        case 0x2c5f74u: goto label_2c5f74;
        case 0x2c5f78u: goto label_2c5f78;
        case 0x2c5f7cu: goto label_2c5f7c;
        default: break;
    }

    ctx->pc = 0x2c5e10u;

label_2c5e10:
    // 0x2c5e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c5e14:
    // 0x2c5e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c5e18:
    // 0x2c5e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c5e1c:
    // 0x2c5e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c5e20:
    // 0x2c5e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5e24:
    // 0x2c5e24: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2c5e28:
    if (ctx->pc == 0x2C5E28u) {
        ctx->pc = 0x2C5E28u;
            // 0x2c5e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E2Cu;
        goto label_2c5e2c;
    }
    ctx->pc = 0x2C5E24u;
    {
        const bool branch_taken_0x2c5e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E24u;
            // 0x2c5e28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e24) {
            ctx->pc = 0x2C5E5Cu;
            goto label_2c5e5c;
        }
    }
    ctx->pc = 0x2C5E2Cu;
label_2c5e2c:
    // 0x2c5e2c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c5e30:
    // 0x2c5e30: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c5e34:
    if (ctx->pc == 0x2C5E34u) {
        ctx->pc = 0x2C5E34u;
            // 0x2c5e34: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C5E38u;
        goto label_2c5e38;
    }
    ctx->pc = 0x2C5E30u;
    {
        const bool branch_taken_0x2c5e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5e30) {
            ctx->pc = 0x2C5E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E30u;
            // 0x2c5e34: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5E48u;
            goto label_2c5e48;
        }
    }
    ctx->pc = 0x2C5E38u;
label_2c5e38:
    // 0x2c5e38: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c5e3c:
    // 0x2c5e3c: 0xc0407c0  jal         func_101F00
label_2c5e40:
    if (ctx->pc == 0x2C5E40u) {
        ctx->pc = 0x2C5E40u;
            // 0x2c5e40: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->pc = 0x2C5E44u;
        goto label_2c5e44;
    }
    ctx->pc = 0x2C5E3Cu;
    SET_GPR_U32(ctx, 31, 0x2C5E44u);
    ctx->pc = 0x2C5E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E3Cu;
            // 0x2c5e40: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E44u; }
        if (ctx->pc != 0x2C5E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E44u; }
        if (ctx->pc != 0x2C5E44u) { return; }
    }
    ctx->pc = 0x2C5E44u;
label_2c5e44:
    // 0x2c5e44: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c5e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c5e48:
    // 0x2c5e48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c5e4c:
    // 0x2c5e4c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2c5e50:
    if (ctx->pc == 0x2C5E50u) {
        ctx->pc = 0x2C5E50u;
            // 0x2c5e50: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2C5E54u;
        goto label_2c5e54;
    }
    ctx->pc = 0x2C5E4Cu;
    {
        const bool branch_taken_0x2c5e4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C5E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E4Cu;
            // 0x2c5e50: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e4c) {
            ctx->pc = 0x2C5E5Cu;
            goto label_2c5e5c;
        }
    }
    ctx->pc = 0x2C5E54u;
label_2c5e54:
    // 0x2c5e54: 0xc0400a8  jal         func_1002A0
label_2c5e58:
    if (ctx->pc == 0x2C5E58u) {
        ctx->pc = 0x2C5E58u;
            // 0x2c5e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E5Cu;
        goto label_2c5e5c;
    }
    ctx->pc = 0x2C5E54u;
    SET_GPR_U32(ctx, 31, 0x2C5E5Cu);
    ctx->pc = 0x2C5E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E54u;
            // 0x2c5e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E5Cu; }
        if (ctx->pc != 0x2C5E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5E5Cu; }
        if (ctx->pc != 0x2C5E5Cu) { return; }
    }
    ctx->pc = 0x2C5E5Cu;
label_2c5e5c:
    // 0x2c5e5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c5e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5e60:
    // 0x2c5e60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5e64:
    // 0x2c5e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5e68:
    // 0x2c5e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5e6c:
    // 0x2c5e6c: 0x3e00008  jr          $ra
label_2c5e70:
    if (ctx->pc == 0x2C5E70u) {
        ctx->pc = 0x2C5E70u;
            // 0x2c5e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C5E74u;
        goto label_2c5e74;
    }
    ctx->pc = 0x2C5E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E6Cu;
            // 0x2c5e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5E74u;
label_2c5e74:
    // 0x2c5e74: 0x0  nop
    ctx->pc = 0x2c5e74u;
    // NOP
label_2c5e78:
    // 0x2c5e78: 0x0  nop
    ctx->pc = 0x2c5e78u;
    // NOP
label_2c5e7c:
    // 0x2c5e7c: 0x0  nop
    ctx->pc = 0x2c5e7cu;
    // NOP
label_2c5e80:
    // 0x2c5e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c5e84:
    // 0x2c5e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c5e88:
    // 0x2c5e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c5e8c:
    // 0x2c5e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c5e90:
    // 0x2c5e90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5e94:
    // 0x2c5e94: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2c5e98:
    if (ctx->pc == 0x2C5E98u) {
        ctx->pc = 0x2C5E98u;
            // 0x2c5e98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E9Cu;
        goto label_2c5e9c;
    }
    ctx->pc = 0x2C5E94u;
    {
        const bool branch_taken_0x2c5e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E94u;
            // 0x2c5e98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e94) {
            ctx->pc = 0x2C5F5Cu;
            goto label_2c5f5c;
        }
    }
    ctx->pc = 0x2C5E9Cu;
label_2c5e9c:
    // 0x2c5e9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c5ea0:
    // 0x2c5ea0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c5ea4:
    // 0x2c5ea4: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2c5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
label_2c5ea8:
    // 0x2c5ea8: 0x2442da50  addiu       $v0, $v0, -0x25B0
    ctx->pc = 0x2c5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957648));
label_2c5eac:
    // 0x2c5eac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c5eb0:
    // 0x2c5eb0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c5eb4:
    // 0x2c5eb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c5eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c5eb8:
    // 0x2c5eb8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c5eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c5ebc:
    // 0x2c5ebc: 0x320f809  jalr        $t9
label_2c5ec0:
    if (ctx->pc == 0x2C5EC0u) {
        ctx->pc = 0x2C5EC4u;
        goto label_2c5ec4;
    }
    ctx->pc = 0x2C5EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C5EC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C5EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EC4u; }
            if (ctx->pc != 0x2C5EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C5EC4u;
label_2c5ec4:
    // 0x2c5ec4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_2c5ec8:
    if (ctx->pc == 0x2C5EC8u) {
        ctx->pc = 0x2C5EC8u;
            // 0x2c5ec8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C5ECCu;
        goto label_2c5ecc;
    }
    ctx->pc = 0x2C5EC4u;
    {
        const bool branch_taken_0x2c5ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ec4) {
            ctx->pc = 0x2C5EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EC4u;
            // 0x2c5ec8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F48u;
            goto label_2c5f48;
        }
    }
    ctx->pc = 0x2C5ECCu;
label_2c5ecc:
    // 0x2c5ecc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c5ed0:
    // 0x2c5ed0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c5ed4:
    // 0x2c5ed4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2c5ed8:
    // 0x2c5ed8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2c5edc:
    // 0x2c5edc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c5edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c5ee0:
    // 0x2c5ee0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c5ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c5ee4:
    // 0x2c5ee4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2c5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2c5ee8:
    // 0x2c5ee8: 0xc0aecc4  jal         func_2BB310
label_2c5eec:
    if (ctx->pc == 0x2C5EECu) {
        ctx->pc = 0x2C5EECu;
            // 0x2c5eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C5EF0u;
        goto label_2c5ef0;
    }
    ctx->pc = 0x2C5EE8u;
    SET_GPR_U32(ctx, 31, 0x2C5EF0u);
    ctx->pc = 0x2C5EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EE8u;
            // 0x2c5eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EF0u; }
        if (ctx->pc != 0x2C5EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5EF0u; }
        if (ctx->pc != 0x2C5EF0u) { return; }
    }
    ctx->pc = 0x2C5EF0u;
label_2c5ef0:
    // 0x2c5ef0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c5ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2c5ef4:
    // 0x2c5ef4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2c5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2c5ef8:
    // 0x2c5ef8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c5efc:
    if (ctx->pc == 0x2C5EFCu) {
        ctx->pc = 0x2C5EFCu;
            // 0x2c5efc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2C5F00u;
        goto label_2c5f00;
    }
    ctx->pc = 0x2C5EF8u;
    {
        const bool branch_taken_0x2c5ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ef8) {
            ctx->pc = 0x2C5EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5EF8u;
            // 0x2c5efc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F14u;
            goto label_2c5f14;
        }
    }
    ctx->pc = 0x2C5F00u;
label_2c5f00:
    // 0x2c5f00: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2c5f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c5f04:
    // 0x2c5f04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c5f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c5f08:
    // 0x2c5f08: 0x320f809  jalr        $t9
label_2c5f0c:
    if (ctx->pc == 0x2C5F0Cu) {
        ctx->pc = 0x2C5F0Cu;
            // 0x2c5f0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C5F10u;
        goto label_2c5f10;
    }
    ctx->pc = 0x2C5F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C5F10u);
        ctx->pc = 0x2C5F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F08u;
            // 0x2c5f0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C5F10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F10u; }
            if (ctx->pc != 0x2C5F10u) { return; }
        }
        }
    }
    ctx->pc = 0x2C5F10u;
label_2c5f10:
    // 0x2c5f10: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c5f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2c5f14:
    // 0x2c5f14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c5f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c5f18:
    // 0x2c5f18: 0xc0aec9c  jal         func_2BB270
label_2c5f1c:
    if (ctx->pc == 0x2C5F1Cu) {
        ctx->pc = 0x2C5F1Cu;
            // 0x2c5f1c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2C5F20u;
        goto label_2c5f20;
    }
    ctx->pc = 0x2C5F18u;
    SET_GPR_U32(ctx, 31, 0x2C5F20u);
    ctx->pc = 0x2C5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F18u;
            // 0x2c5f1c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F20u; }
        if (ctx->pc != 0x2C5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F20u; }
        if (ctx->pc != 0x2C5F20u) { return; }
    }
    ctx->pc = 0x2C5F20u;
label_2c5f20:
    // 0x2c5f20: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c5f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2c5f24:
    // 0x2c5f24: 0xc0aec88  jal         func_2BB220
label_2c5f28:
    if (ctx->pc == 0x2C5F28u) {
        ctx->pc = 0x2C5F28u;
            // 0x2c5f28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C5F2Cu;
        goto label_2c5f2c;
    }
    ctx->pc = 0x2C5F24u;
    SET_GPR_U32(ctx, 31, 0x2C5F2Cu);
    ctx->pc = 0x2C5F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F24u;
            // 0x2c5f28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F2Cu; }
        if (ctx->pc != 0x2C5F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F2Cu; }
        if (ctx->pc != 0x2C5F2Cu) { return; }
    }
    ctx->pc = 0x2C5F2Cu;
label_2c5f2c:
    // 0x2c5f2c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2c5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2c5f30:
    // 0x2c5f30: 0xc0aec0c  jal         func_2BB030
label_2c5f34:
    if (ctx->pc == 0x2C5F34u) {
        ctx->pc = 0x2C5F34u;
            // 0x2c5f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F38u;
        goto label_2c5f38;
    }
    ctx->pc = 0x2C5F30u;
    SET_GPR_U32(ctx, 31, 0x2C5F38u);
    ctx->pc = 0x2C5F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F30u;
            // 0x2c5f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F38u; }
        if (ctx->pc != 0x2C5F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F38u; }
        if (ctx->pc != 0x2C5F38u) { return; }
    }
    ctx->pc = 0x2C5F38u;
label_2c5f38:
    // 0x2c5f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f3c:
    // 0x2c5f3c: 0xc0aeaa8  jal         func_2BAAA0
label_2c5f40:
    if (ctx->pc == 0x2C5F40u) {
        ctx->pc = 0x2C5F40u;
            // 0x2c5f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F44u;
        goto label_2c5f44;
    }
    ctx->pc = 0x2C5F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F44u);
    ctx->pc = 0x2C5F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F3Cu;
            // 0x2c5f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F44u; }
        if (ctx->pc != 0x2C5F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F44u; }
        if (ctx->pc != 0x2C5F44u) { return; }
    }
    ctx->pc = 0x2C5F44u;
label_2c5f44:
    // 0x2c5f44: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c5f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c5f48:
    // 0x2c5f48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5f48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c5f4c:
    // 0x2c5f4c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c5f50:
    if (ctx->pc == 0x2C5F50u) {
        ctx->pc = 0x2C5F50u;
            // 0x2c5f50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F54u;
        goto label_2c5f54;
    }
    ctx->pc = 0x2C5F4Cu;
    {
        const bool branch_taken_0x2c5f4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c5f4c) {
            ctx->pc = 0x2C5F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F4Cu;
            // 0x2c5f50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F60u;
            goto label_2c5f60;
        }
    }
    ctx->pc = 0x2C5F54u;
label_2c5f54:
    // 0x2c5f54: 0xc0400a8  jal         func_1002A0
label_2c5f58:
    if (ctx->pc == 0x2C5F58u) {
        ctx->pc = 0x2C5F58u;
            // 0x2c5f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F5Cu;
        goto label_2c5f5c;
    }
    ctx->pc = 0x2C5F54u;
    SET_GPR_U32(ctx, 31, 0x2C5F5Cu);
    ctx->pc = 0x2C5F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F54u;
            // 0x2c5f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F5Cu; }
        if (ctx->pc != 0x2C5F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5F5Cu; }
        if (ctx->pc != 0x2C5F5Cu) { return; }
    }
    ctx->pc = 0x2C5F5Cu;
label_2c5f5c:
    // 0x2c5f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f60:
    // 0x2c5f60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5f64:
    // 0x2c5f64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5f68:
    // 0x2c5f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5f6c:
    // 0x2c5f6c: 0x3e00008  jr          $ra
label_2c5f70:
    if (ctx->pc == 0x2C5F70u) {
        ctx->pc = 0x2C5F70u;
            // 0x2c5f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C5F74u;
        goto label_2c5f74;
    }
    ctx->pc = 0x2C5F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5F6Cu;
            // 0x2c5f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5F74u;
label_2c5f74:
    // 0x2c5f74: 0x0  nop
    ctx->pc = 0x2c5f74u;
    // NOP
label_2c5f78:
    // 0x2c5f78: 0x0  nop
    ctx->pc = 0x2c5f78u;
    // NOP
label_2c5f7c:
    // 0x2c5f7c: 0x0  nop
    ctx->pc = 0x2c5f7cu;
    // NOP
}
