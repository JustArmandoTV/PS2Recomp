#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00105E90
// Address: 0x105e90 - 0x1063e8
void sub_00105E90_0x105e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105E90_0x105e90");
#endif

    switch (ctx->pc) {
        case 0x105f08u: goto label_105f08;
        case 0x105f2cu: goto label_105f2c;
        case 0x105fa4u: goto label_105fa4;
        case 0x105fecu: goto label_105fec;
        case 0x1060a8u: goto label_1060a8;
        case 0x1060d4u: goto label_1060d4;
        case 0x106144u: goto label_106144;
        case 0x106170u: goto label_106170;
        case 0x1061d0u: goto label_1061d0;
        case 0x1061fcu: goto label_1061fc;
        case 0x10622cu: goto label_10622c;
        case 0x106254u: goto label_106254;
        case 0x10625cu: goto label_10625c;
        default: break;
    }

    ctx->pc = 0x105e90u;

    // 0x105e90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x105e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x105e94: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x105e94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x105e98: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x105e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x105e9c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x105e9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x105ea0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x105ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x105ea4: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x105ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x105ea8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x105ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x105eac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x105eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x105eb0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x105eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x105eb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x105eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105eb8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x105eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x105ebc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x105ebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ec0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x105ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x105ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ec8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x105ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x105ecc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x105eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ed0: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x105ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x105ed4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x105ed4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ed8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x105ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x105edc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x105edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x105ee0: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x105ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x105ee4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x105ee8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x105ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x105eec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x105eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x105ef0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x105ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x105ef4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x105ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x105ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105efc: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x105efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x105f00: 0xc041a96  jal         func_106A58
    ctx->pc = 0x105F00u;
    SET_GPR_U32(ctx, 31, 0x105F08u);
    ctx->pc = 0x105F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F00u;
            // 0x105f04: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F08u; }
        if (ctx->pc != 0x105F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F08u; }
        if (ctx->pc != 0x105F08u) { return; }
    }
    ctx->pc = 0x105F08u;
label_105f08:
    // 0x105f08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105f0c: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x105f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x105f10: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x105f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x105f14: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x105f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x105f18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105f18u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x105f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f20: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x105f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x105f24: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x105F24u;
    SET_GPR_U32(ctx, 31, 0x105F2Cu);
    ctx->pc = 0x105F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F24u;
            // 0x105f28: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F2Cu; }
        if (ctx->pc != 0x105F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F2Cu; }
        if (ctx->pc != 0x105F2Cu) { return; }
    }
    ctx->pc = 0x105F2Cu;
label_105f2c:
    // 0x105f2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105f34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105f38: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x105f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x105f3c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x105f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105f40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105f40u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105f44: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x105f44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105f48: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x105f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105f4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105f4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105f50: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105F50u;
    {
        const bool branch_taken_0x105f50 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F50u;
            // 0x105f54: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f50) {
            ctx->pc = 0x105F68u;
            goto label_105f68;
        }
    }
    ctx->pc = 0x105F58u;
    // 0x105f58: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x105f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x105f5c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x105f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x105f60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105F60u;
    {
        const bool branch_taken_0x105f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F60u;
            // 0x105f64: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f60) {
            ctx->pc = 0x105F6Cu;
            goto label_105f6c;
        }
    }
    ctx->pc = 0x105F68u;
label_105f68:
    // 0x105f68: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_105f6c:
    // 0x105f6c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x105f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x105f70: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x105f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x105f74: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x105f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x105f78: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x105f78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x105f7c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x105f7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x105f80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x105f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x105f84: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x105f84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x105f88: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x105f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x105f8c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105F8Cu;
    {
        const bool branch_taken_0x105f8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x105F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F8Cu;
            // 0x105f90: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f8c) {
            ctx->pc = 0x105FB4u;
            goto label_105fb4;
        }
    }
    ctx->pc = 0x105F94u;
    // 0x105f94: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x105f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x105f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f9c: 0xc042e16  jal         func_10B858
    ctx->pc = 0x105F9Cu;
    SET_GPR_U32(ctx, 31, 0x105FA4u);
    ctx->pc = 0x105FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F9Cu;
            // 0x105fa0: 0x24a5e740  addiu       $a1, $a1, -0x18C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105FA4u; }
        if (ctx->pc != 0x105FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105FA4u; }
        if (ctx->pc != 0x105FA4u) { return; }
    }
    ctx->pc = 0x105FA4u;
label_105fa4:
    // 0x105fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105fa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x105fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fac: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x105FACu;
    {
        const bool branch_taken_0x105fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105FACu;
            // 0x105fb0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fac) {
            ctx->pc = 0x1063B8u;
            goto label_1063b8;
        }
    }
    ctx->pc = 0x105FB4u;
label_105fb4:
    // 0x105fb4: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x105fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x105fb8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x105FB8u;
    {
        const bool branch_taken_0x105fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105FB8u;
            // 0x105fbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fb8) {
            ctx->pc = 0x105FF4u;
            goto label_105ff4;
        }
    }
    ctx->pc = 0x105FC0u;
    // 0x105fc0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x105fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x105fc4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105FC4u;
    {
        const bool branch_taken_0x105fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x105fc4) {
            ctx->pc = 0x105FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105FC4u;
            // 0x105fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105FE4u;
            goto label_105fe4;
        }
    }
    ctx->pc = 0x105FCCu;
    // 0x105fcc: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x105fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x105fd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105FD0u;
    {
        const bool branch_taken_0x105fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105FD0u;
            // 0x105fd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fd0) {
            ctx->pc = 0x105FE0u;
            goto label_105fe0;
        }
    }
    ctx->pc = 0x105FD8u;
    // 0x105fd8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x105FD8u;
    {
        const bool branch_taken_0x105fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105FD8u;
            // 0x105fdc: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fd8) {
            ctx->pc = 0x106020u;
            goto label_106020;
        }
    }
    ctx->pc = 0x105FE0u;
label_105fe0:
    // 0x105fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105fe4:
    // 0x105fe4: 0xc041a12  jal         func_106848
    ctx->pc = 0x105FE4u;
    SET_GPR_U32(ctx, 31, 0x105FECu);
    ctx->pc = 0x105FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105FE4u;
            // 0x105fe8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105FECu; }
        if (ctx->pc != 0x105FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105FECu; }
        if (ctx->pc != 0x105FECu) { return; }
    }
    ctx->pc = 0x105FECu;
label_105fec:
    // 0x105fec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x105FECu;
    {
        const bool branch_taken_0x105fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105FECu;
            // 0x105ff0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fec) {
            ctx->pc = 0x106020u;
            goto label_106020;
        }
    }
    ctx->pc = 0x105FF4u;
label_105ff4:
    // 0x105ff4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x105ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x105ff8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x105FF8u;
    {
        const bool branch_taken_0x105ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105ff8) {
            ctx->pc = 0x105FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105FF8u;
            // 0x105ffc: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106024u;
            goto label_106024;
        }
    }
    ctx->pc = 0x106000u;
    // 0x106000: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x106000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x106004: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106004u;
    {
        const bool branch_taken_0x106004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106004u;
            // 0x106008: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106004) {
            ctx->pc = 0x106020u;
            goto label_106020;
        }
    }
    ctx->pc = 0x10600Cu;
    // 0x10600c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x10600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x106010: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x106010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106014: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x106014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x106018: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x106018u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10601c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x10601cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_106020:
    // 0x106020: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x106020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_106024:
    // 0x106024: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106028: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106028u;
    {
        const bool branch_taken_0x106028 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10602Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106028u;
            // 0x10602c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106028) {
            ctx->pc = 0x10604Cu;
            goto label_10604c;
        }
    }
    ctx->pc = 0x106030u;
    // 0x106030: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x106030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106038: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x106038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x10603c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x10603cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x106040: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x106040u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x106044: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106044u;
    {
        const bool branch_taken_0x106044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106044u;
            // 0x106048: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106044) {
            ctx->pc = 0x106060u;
            goto label_106060;
        }
    }
    ctx->pc = 0x10604Cu;
label_10604c:
    // 0x10604c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106050: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x106050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106054: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x106054u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106058: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x106058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x10605c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x10605cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_106060:
    // 0x106060: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x106060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x106064: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x106064u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106068: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x106068u;
    {
        const bool branch_taken_0x106068 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x10606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106068u;
            // 0x10606c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106068) {
            ctx->pc = 0x106078u;
            goto label_106078;
        }
    }
    ctx->pc = 0x106070u;
    // 0x106070: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x106070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x106074: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x106074u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_106078:
    // 0x106078: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10607c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10607Cu;
    {
        const bool branch_taken_0x10607c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x106080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10607Cu;
            // 0x106080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10607c) {
            ctx->pc = 0x1060B4u;
            goto label_1060b4;
        }
    }
    ctx->pc = 0x106084u;
    // 0x106084: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x106084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x106088: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106088u;
    {
        const bool branch_taken_0x106088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106088u;
            // 0x10608c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106088) {
            ctx->pc = 0x1060B4u;
            goto label_1060b4;
        }
    }
    ctx->pc = 0x106090u;
    // 0x106090: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106094: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x106094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x106098: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106098u;
    {
        const bool branch_taken_0x106098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106098u;
            // 0x10609c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106098) {
            ctx->pc = 0x1060B0u;
            goto label_1060b0;
        }
    }
    ctx->pc = 0x1060A0u;
    // 0x1060a0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1060A0u;
    SET_GPR_U32(ctx, 31, 0x1060A8u);
    ctx->pc = 0x1060A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1060A0u;
            // 0x1060a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060A8u; }
        if (ctx->pc != 0x1060A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060A8u; }
        if (ctx->pc != 0x1060A8u) { return; }
    }
    ctx->pc = 0x1060A8u;
label_1060a8:
    // 0x1060a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1060A8u;
    {
        const bool branch_taken_0x1060a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1060A8u;
            // 0x1060ac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060a8) {
            ctx->pc = 0x1060B8u;
            goto label_1060b8;
        }
    }
    ctx->pc = 0x1060B0u;
label_1060b0:
    // 0x1060b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1060b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1060b4:
    // 0x1060b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1060b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1060b8:
    // 0x1060b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1060b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1060bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1060bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1060c0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1060c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1060c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1060C4u;
    {
        const bool branch_taken_0x1060c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1060C4u;
            // 0x1060c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060c4) {
            ctx->pc = 0x1060DCu;
            goto label_1060dc;
        }
    }
    ctx->pc = 0x1060CCu;
    // 0x1060cc: 0xc041a12  jal         func_106848
    ctx->pc = 0x1060CCu;
    SET_GPR_U32(ctx, 31, 0x1060D4u);
    ctx->pc = 0x1060D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1060CCu;
            // 0x1060d0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060D4u; }
        if (ctx->pc != 0x1060D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060D4u; }
        if (ctx->pc != 0x1060D4u) { return; }
    }
    ctx->pc = 0x1060D4u;
label_1060d4:
    // 0x1060d4: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x1060d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x1060d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1060d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1060dc:
    // 0x1060dc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1060dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1060e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1060E0u;
    {
        const bool branch_taken_0x1060e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1060e0) {
            ctx->pc = 0x1060E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1060E0u;
            // 0x1060e4: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106104u;
            goto label_106104;
        }
    }
    ctx->pc = 0x1060E8u;
    // 0x1060e8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1060e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1060ec: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1060ECu;
    {
        const bool branch_taken_0x1060ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1060ec) {
            ctx->pc = 0x1060F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1060ECu;
            // 0x1060f0: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106174u;
            goto label_106174;
        }
    }
    ctx->pc = 0x1060F4u;
    // 0x1060f4: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x1060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x1060f8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1060F8u;
    {
        const bool branch_taken_0x1060f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1060f8) {
            ctx->pc = 0x1060FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1060F8u;
            // 0x1060fc: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106174u;
            goto label_106174;
        }
    }
    ctx->pc = 0x106100u;
    // 0x106100: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x106100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_106104:
    // 0x106104: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x106104u;
    {
        const bool branch_taken_0x106104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106104u;
            // 0x106108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106104) {
            ctx->pc = 0x10614Cu;
            goto label_10614c;
        }
    }
    ctx->pc = 0x10610Cu;
    // 0x10610c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x10610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x106110: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x106110u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x106114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106118: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10611c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x10611cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x106120: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x106120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x106124: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x106124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x106128: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x106128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10612c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10612cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106130: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x106130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x106134: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106138: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x106138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10613c: 0xc04173c  jal         func_105CF0
    ctx->pc = 0x10613Cu;
    SET_GPR_U32(ctx, 31, 0x106144u);
    ctx->pc = 0x106140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10613Cu;
            // 0x106140: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105CF0u;
    if (runtime->hasFunction(0x105CF0u)) {
        auto targetFn = runtime->lookupFunction(0x105CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106144u; }
        if (ctx->pc != 0x106144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105CF0_0x105cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106144u; }
        if (ctx->pc != 0x106144u) { return; }
    }
    ctx->pc = 0x106144u;
label_106144:
    // 0x106144: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x106144u;
    {
        const bool branch_taken_0x106144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106144u;
            // 0x106148: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106144) {
            ctx->pc = 0x106174u;
            goto label_106174;
        }
    }
    ctx->pc = 0x10614Cu;
label_10614c:
    // 0x10614c: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x106150: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x106150u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x106154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106158: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x106158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10615c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10615cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106160: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106164: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x106164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106168: 0xc041632  jal         func_1058C8
    ctx->pc = 0x106168u;
    SET_GPR_U32(ctx, 31, 0x106170u);
    ctx->pc = 0x10616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106168u;
            // 0x10616c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1058C8u;
    if (runtime->hasFunction(0x1058C8u)) {
        auto targetFn = runtime->lookupFunction(0x1058C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106170u; }
        if (ctx->pc != 0x106170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001058C8_0x1058c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106170u; }
        if (ctx->pc != 0x106170u) { return; }
    }
    ctx->pc = 0x106170u;
label_106170:
    // 0x106170: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x106170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_106174:
    // 0x106174: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x106174u;
    {
        const bool branch_taken_0x106174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106174u;
            // 0x106178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106174) {
            ctx->pc = 0x1063B8u;
            goto label_1063b8;
        }
    }
    ctx->pc = 0x10617Cu;
    // 0x10617c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x10617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106180: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x106180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x106184: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x106184u;
    {
        const bool branch_taken_0x106184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106184) {
            ctx->pc = 0x106200u;
            goto label_106200;
        }
    }
    ctx->pc = 0x10618Cu;
    // 0x10618c: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x10618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x106190: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x106190u;
    {
        const bool branch_taken_0x106190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106190u;
            // 0x106194: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106190) {
            ctx->pc = 0x1061D8u;
            goto label_1061d8;
        }
    }
    ctx->pc = 0x106198u;
    // 0x106198: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x106198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x10619c: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x10619cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x1061a0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1061a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1061a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1061a8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1061a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1061ac: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1061acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x1061b0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1061b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1061b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1061b8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1061b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1061bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1061bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1061c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1061c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1061c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061c8: 0xc04173c  jal         func_105CF0
    ctx->pc = 0x1061C8u;
    SET_GPR_U32(ctx, 31, 0x1061D0u);
    ctx->pc = 0x1061CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1061C8u;
            // 0x1061cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105CF0u;
    if (runtime->hasFunction(0x105CF0u)) {
        auto targetFn = runtime->lookupFunction(0x105CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1061D0u; }
        if (ctx->pc != 0x1061D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105CF0_0x105cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1061D0u; }
        if (ctx->pc != 0x1061D0u) { return; }
    }
    ctx->pc = 0x1061D0u;
label_1061d0:
    // 0x1061d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1061D0u;
    {
        const bool branch_taken_0x1061d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1061D0u;
            // 0x1061d4: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061d0) {
            ctx->pc = 0x106200u;
            goto label_106200;
        }
    }
    ctx->pc = 0x1061D8u;
label_1061d8:
    // 0x1061d8: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x1061d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x1061dc: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x1061dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x1061e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1061e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1061e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1061e8: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1061e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1061ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1061ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061f0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1061f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1061f4: 0xc041632  jal         func_1058C8
    ctx->pc = 0x1061F4u;
    SET_GPR_U32(ctx, 31, 0x1061FCu);
    ctx->pc = 0x1061F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1061F4u;
            // 0x1061f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1058C8u;
    if (runtime->hasFunction(0x1058C8u)) {
        auto targetFn = runtime->lookupFunction(0x1058C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1061FCu; }
        if (ctx->pc != 0x1061FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001058C8_0x1058c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1061FCu; }
        if (ctx->pc != 0x1061FCu) { return; }
    }
    ctx->pc = 0x1061FCu;
label_1061fc:
    // 0x1061fc: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x1061fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_106200:
    // 0x106200: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x106200u;
    {
        const bool branch_taken_0x106200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106200u;
            // 0x106204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106200) {
            ctx->pc = 0x1063B8u;
            goto label_1063b8;
        }
    }
    ctx->pc = 0x106208u;
    // 0x106208: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x106208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10620c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x106210: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106210u;
    {
        const bool branch_taken_0x106210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106210u;
            // 0x106214: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106210) {
            ctx->pc = 0x106234u;
            goto label_106234;
        }
    }
    ctx->pc = 0x106218u;
    // 0x106218: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x106218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x10621c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10621Cu;
    {
        const bool branch_taken_0x10621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10621Cu;
            // 0x106220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10621c) {
            ctx->pc = 0x106230u;
            goto label_106230;
        }
    }
    ctx->pc = 0x106224u;
    // 0x106224: 0xc041aa4  jal         func_106A90
    ctx->pc = 0x106224u;
    SET_GPR_U32(ctx, 31, 0x10622Cu);
    ctx->pc = 0x106228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106224u;
            // 0x106228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A90u;
    if (runtime->hasFunction(0x106A90u)) {
        auto targetFn = runtime->lookupFunction(0x106A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10622Cu; }
        if (ctx->pc != 0x10622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A90_0x106a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10622Cu; }
        if (ctx->pc != 0x10622Cu) { return; }
    }
    ctx->pc = 0x10622Cu;
label_10622c:
    // 0x10622c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_106230:
    // 0x106230: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x106230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_106234:
    // 0x106234: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x106234u;
    {
        const bool branch_taken_0x106234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106234u;
            // 0x106238: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106234) {
            ctx->pc = 0x1062D8u;
            goto label_1062d8;
        }
    }
    ctx->pc = 0x10623Cu;
    // 0x10623c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x10623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106240: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x106240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x106244: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x106244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106248: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x106248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x10624c: 0xc041ede  jal         func_107B78
    ctx->pc = 0x10624Cu;
    SET_GPR_U32(ctx, 31, 0x106254u);
    ctx->pc = 0x106250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10624Cu;
            // 0x106250: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107B78u;
    if (runtime->hasFunction(0x107B78u)) {
        auto targetFn = runtime->lookupFunction(0x107B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106254u; }
        if (ctx->pc != 0x106254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B78_0x107b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106254u; }
        if (ctx->pc != 0x106254u) { return; }
    }
    ctx->pc = 0x106254u;
label_106254:
    // 0x106254: 0xc041a96  jal         func_106A58
    ctx->pc = 0x106254u;
    SET_GPR_U32(ctx, 31, 0x10625Cu);
    ctx->pc = 0x106258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106254u;
            // 0x106258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10625Cu; }
        if (ctx->pc != 0x10625Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10625Cu; }
        if (ctx->pc != 0x10625Cu) { return; }
    }
    ctx->pc = 0x10625Cu;
label_10625c:
    // 0x10625c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106260: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x106260u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x106264: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x106264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x106268: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x106268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10626c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10626cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106270: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x106270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x106274: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106278: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x106278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x10627c: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x10627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x106280: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x106280u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x106284: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106288: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x106288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x10628c: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x10628cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x106290: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x106290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x106294: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x106294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x106298: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x106298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x10629c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1062a0: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x1062a4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1062a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1062a8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1062a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1062ac: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1062ACu;
    {
        const bool branch_taken_0x1062ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1062B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1062ACu;
            // 0x1062b0: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062ac) {
            ctx->pc = 0x1062C8u;
            goto label_1062c8;
        }
    }
    ctx->pc = 0x1062B4u;
    // 0x1062b4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1062b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1062b8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1062B8u;
    {
        const bool branch_taken_0x1062b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1062BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1062B8u;
            // 0x1062bc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062b8) {
            ctx->pc = 0x1062C8u;
            goto label_1062c8;
        }
    }
    ctx->pc = 0x1062C0u;
    // 0x1062c0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1062C0u;
    {
        const bool branch_taken_0x1062c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1062C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1062C0u;
            // 0x1062c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062c0) {
            ctx->pc = 0x1062D0u;
            goto label_1062d0;
        }
    }
    ctx->pc = 0x1062C8u;
label_1062c8:
    // 0x1062c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1062C8u;
    {
        const bool branch_taken_0x1062c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1062C8u;
            // 0x1062cc: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062c8) {
            ctx->pc = 0x1062ECu;
            goto label_1062ec;
        }
    }
    ctx->pc = 0x1062D0u;
label_1062d0:
    // 0x1062d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1062D0u;
    {
        const bool branch_taken_0x1062d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1062D0u;
            // 0x1062d4: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062d0) {
            ctx->pc = 0x1062ECu;
            goto label_1062ec;
        }
    }
    ctx->pc = 0x1062D8u;
label_1062d8:
    // 0x1062d8: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1062d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1062dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1062dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1062e0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1062e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1062e4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1062e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1062e8: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x1062e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_1062ec:
    // 0x1062ec: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1062ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1062f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1062F0u;
    {
        const bool branch_taken_0x1062f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1062F0u;
            // 0x1062f4: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062f0) {
            ctx->pc = 0x106300u;
            goto label_106300;
        }
    }
    ctx->pc = 0x1062F8u;
    // 0x1062f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1062F8u;
    {
        const bool branch_taken_0x1062f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1062F8u;
            // 0x1062fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062f8) {
            ctx->pc = 0x1063B8u;
            goto label_1063b8;
        }
    }
    ctx->pc = 0x106300u;
label_106300:
    // 0x106300: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106308: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x106308u;
    {
        const bool branch_taken_0x106308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106308) {
            ctx->pc = 0x10630Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106308u;
            // 0x10630c: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10632Cu;
            goto label_10632c;
        }
    }
    ctx->pc = 0x106310u;
    // 0x106310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106314: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x106314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x106318: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10631c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106320: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x106320u;
    {
        const bool branch_taken_0x106320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106320) {
            ctx->pc = 0x106324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106320u;
            // 0x106324: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106358u;
            goto label_106358;
        }
    }
    ctx->pc = 0x106328u;
    // 0x106328: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x106328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_10632c:
    // 0x10632c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10632Cu;
    {
        const bool branch_taken_0x10632c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10632c) {
            ctx->pc = 0x106330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10632Cu;
            // 0x106330: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106358u;
            goto label_106358;
        }
    }
    ctx->pc = 0x106334u;
    // 0x106334: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x106334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x106338: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x106338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10633c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10633cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x106340: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x106340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x106344: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x106344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x106348: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x106348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x10634c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10634cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x106350: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x106350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x106354: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x106354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_106358:
    // 0x106358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10635c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10635Cu;
    {
        const bool branch_taken_0x10635c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x106360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10635Cu;
            // 0x106360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10635c) {
            ctx->pc = 0x1063B8u;
            goto label_1063b8;
        }
    }
    ctx->pc = 0x106364u;
    // 0x106364: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106368: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x106368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x10636c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10636Cu;
    {
        const bool branch_taken_0x10636c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10636Cu;
            // 0x106370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10636c) {
            ctx->pc = 0x1063B8u;
            goto label_1063b8;
        }
    }
    ctx->pc = 0x106374u;
    // 0x106374: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x106374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x106378: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x106378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10637c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x10637cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x106380: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x106380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x106384: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x106384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x106388: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x106388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10638c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10638Cu;
    {
        const bool branch_taken_0x10638c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x106390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10638Cu;
            // 0x106390: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10638c) {
            ctx->pc = 0x10639Cu;
            goto label_10639c;
        }
    }
    ctx->pc = 0x106394u;
    // 0x106394: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x106394u;
    {
        const bool branch_taken_0x106394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106394u;
            // 0x106398: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106394) {
            ctx->pc = 0x1063B4u;
            goto label_1063b4;
        }
    }
    ctx->pc = 0x10639Cu;
label_10639c:
    // 0x10639c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x10639cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1063a0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1063a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1063a4: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1063a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1063a8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1063a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1063ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1063acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1063b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1063b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1063b4:
    // 0x1063b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1063b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1063b8:
    // 0x1063b8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1063b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1063bc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1063bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1063c0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x1063c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1063c4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1063c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1063c8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1063c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1063cc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1063ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1063d0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1063d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1063d4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1063d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1063d8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1063d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1063dc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1063dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1063e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1063E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1063E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1063E0u;
            // 0x1063e4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1063E8u;
}
