#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0F00
// Address: 0x1e0f00 - 0x1e14d0
void sub_001E0F00_0x1e0f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0F00_0x1e0f00");
#endif

    switch (ctx->pc) {
        case 0x1e0fc8u: goto label_1e0fc8;
        case 0x1e0fd8u: goto label_1e0fd8;
        case 0x1e0fe4u: goto label_1e0fe4;
        case 0x1e0ff4u: goto label_1e0ff4;
        case 0x1e1088u: goto label_1e1088;
        case 0x1e1098u: goto label_1e1098;
        case 0x1e1188u: goto label_1e1188;
        case 0x1e1198u: goto label_1e1198;
        case 0x1e11acu: goto label_1e11ac;
        case 0x1e11bcu: goto label_1e11bc;
        case 0x1e1204u: goto label_1e1204;
        case 0x1e1284u: goto label_1e1284;
        case 0x1e1294u: goto label_1e1294;
        case 0x1e131cu: goto label_1e131c;
        case 0x1e132cu: goto label_1e132c;
        case 0x1e1384u: goto label_1e1384;
        case 0x1e1390u: goto label_1e1390;
        case 0x1e1438u: goto label_1e1438;
        default: break;
    }

    ctx->pc = 0x1e0f00u;

    // 0x1e0f00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e0f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e0f04: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e0f08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0f14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f18: 0x8c850da0  lw          $a1, 0xDA0($a0)
    ctx->pc = 0x1e0f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x1e0f1c: 0x8c64a758  lw          $a0, -0x58A8($v1)
    ctx->pc = 0x1e0f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944600)));
    // 0x1e0f20: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1e0f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e0f24: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1e0f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1e0f28: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0f28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0f2c: 0x54600034  bnel        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1E0F2Cu;
    {
        const bool branch_taken_0x1e0f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f2c) {
            ctx->pc = 0x1E0F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F2Cu;
            // 0x1e0f30: 0x8e260d74  lw          $a2, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1000u;
            goto label_1e1000;
        }
    }
    ctx->pc = 0x1E0F34u;
    // 0x1e0f34: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x1e0f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
    // 0x1e0f38: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1e0f38u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1e0f3c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0F3Cu;
    {
        const bool branch_taken_0x1e0f3c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E0F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F3Cu;
            // 0x1e0f40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f3c) {
            ctx->pc = 0x1E0F54u;
            goto label_1e0f54;
        }
    }
    ctx->pc = 0x1E0F44u;
    // 0x1e0f44: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x1e0f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e0f48: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0F48u;
    {
        const bool branch_taken_0x1e0f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f48) {
            ctx->pc = 0x1E0F54u;
            goto label_1e0f54;
        }
    }
    ctx->pc = 0x1E0F50u;
    // 0x1e0f50: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e0f50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f54:
    // 0x1e0f54: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E0F54u;
    {
        const bool branch_taken_0x1e0f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f54) {
            ctx->pc = 0x1E0F94u;
            goto label_1e0f94;
        }
    }
    ctx->pc = 0x1E0F5Cu;
    // 0x1e0f5c: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x1e0f5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
    // 0x1e0f60: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e0f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1e0f64: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e0f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e0f68: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0F68u;
    {
        const bool branch_taken_0x1e0f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f68) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F70u;
    // 0x1e0f70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1e0f74: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1e0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x1e0f78: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1e0f78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x1e0f7c: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e0f7cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1e0f80: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0f80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e0f84: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0f88:
    // 0x1e0f88: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0F88u;
    {
        const bool branch_taken_0x1e0f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f88) {
            ctx->pc = 0x1E0F94u;
            goto label_1e0f94;
        }
    }
    ctx->pc = 0x1E0F90u;
    // 0x1e0f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f94:
    // 0x1e0f94: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F94u;
    {
        const bool branch_taken_0x1e0f94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f94) {
            ctx->pc = 0x1E0FA8u;
            goto label_1e0fa8;
        }
    }
    ctx->pc = 0x1E0F9Cu;
    // 0x1e0f9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e0fa0: 0x54830147  bnel        $a0, $v1, . + 4 + (0x147 << 2)
    ctx->pc = 0x1E0FA0u;
    {
        const bool branch_taken_0x1e0fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0fa0) {
            ctx->pc = 0x1E0FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FA0u;
            // 0x1e0fa4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E14C0u;
            goto label_1e14c0;
        }
    }
    ctx->pc = 0x1E0FA8u;
label_1e0fa8:
    // 0x1e0fa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1e0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1e0fac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e0facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0fb0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1e0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x1e0fb4: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x1e0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x1e0fb8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0FB8u;
    {
        const bool branch_taken_0x1e0fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0fb8) {
            ctx->pc = 0x1E0FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FB8u;
            // 0x1e0fbc: 0x92240080  lbu         $a0, 0x80($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0FDCu;
            goto label_1e0fdc;
        }
    }
    ctx->pc = 0x1E0FC0u;
    // 0x1e0fc0: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x1E0FC0u;
    SET_GPR_U32(ctx, 31, 0x1E0FC8u);
    ctx->pc = 0x1E0FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FC0u;
            // 0x1e0fc4: 0x92240078  lbu         $a0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FC8u; }
        if (ctx->pc != 0x1E0FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FC8u; }
        if (ctx->pc != 0x1E0FC8u) { return; }
    }
    ctx->pc = 0x1E0FC8u;
label_1e0fc8:
    // 0x1e0fc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0FC8u;
    {
        const bool branch_taken_0x1e0fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fc8) {
            ctx->pc = 0x1E0FD8u;
            goto label_1e0fd8;
        }
    }
    ctx->pc = 0x1E0FD0u;
    // 0x1e0fd0: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x1E0FD0u;
    SET_GPR_U32(ctx, 31, 0x1E0FD8u);
    ctx->pc = 0x1E0FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FD0u;
            // 0x1e0fd4: 0x92240078  lbu         $a0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FD8u; }
        if (ctx->pc != 0x1E0FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FD8u; }
        if (ctx->pc != 0x1E0FD8u) { return; }
    }
    ctx->pc = 0x1E0FD8u;
label_1e0fd8:
    // 0x1e0fd8: 0x92240080  lbu         $a0, 0x80($s1)
    ctx->pc = 0x1e0fd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
label_1e0fdc:
    // 0x1e0fdc: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x1E0FDCu;
    SET_GPR_U32(ctx, 31, 0x1E0FE4u);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FE4u; }
        if (ctx->pc != 0x1E0FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FE4u; }
        if (ctx->pc != 0x1E0FE4u) { return; }
    }
    ctx->pc = 0x1E0FE4u;
label_1e0fe4:
    // 0x1e0fe4: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x1E0FE4u;
    {
        const bool branch_taken_0x1e0fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fe4) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E0FECu;
    // 0x1e0fec: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x1E0FECu;
    SET_GPR_U32(ctx, 31, 0x1E0FF4u);
    ctx->pc = 0x1E0FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FECu;
            // 0x1e0ff0: 0x92240080  lbu         $a0, 0x80($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FF4u; }
        if (ctx->pc != 0x1E0FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FF4u; }
        if (ctx->pc != 0x1E0FF4u) { return; }
    }
    ctx->pc = 0x1E0FF4u;
label_1e0ff4:
    // 0x1e0ff4: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x1E0FF4u;
    {
        const bool branch_taken_0x1e0ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ff4) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E0FFCu;
    // 0x1e0ffc: 0x8e260d74  lw          $a2, 0xD74($s1)
    ctx->pc = 0x1e0ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1e1000:
    // 0x1e1000: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e1000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e1004: 0x8c64a760  lw          $a0, -0x58A0($v1)
    ctx->pc = 0x1e1004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944608)));
    // 0x1e1008: 0x90c502c5  lbu         $a1, 0x2C5($a2)
    ctx->pc = 0x1e1008u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 709)));
    // 0x1e100c: 0x8e230d9c  lw          $v1, 0xD9C($s1)
    ctx->pc = 0x1e100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
    // 0x1e1010: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e1010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e1014: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1e1014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1e1018: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e1018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e101c: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E101Cu;
    {
        const bool branch_taken_0x1e101c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E1020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E101Cu;
            // 0x1e1020: 0x90b00281  lbu         $s0, 0x281($a1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 641)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e101c) {
            ctx->pc = 0x1E10BCu;
            goto label_1e10bc;
        }
    }
    ctx->pc = 0x1E1024u;
    // 0x1e1024: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x1e1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e102c: 0x0  nop
    ctx->pc = 0x1e102cu;
    // NOP
    // 0x1e1030: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e1030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1034: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x1E1034u;
    {
        const bool branch_taken_0x1e1034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1034) {
            ctx->pc = 0x1E10BCu;
            goto label_1e10bc;
        }
    }
    ctx->pc = 0x1E103Cu;
    // 0x1e103c: 0x8e230a6c  lw          $v1, 0xA6C($s1)
    ctx->pc = 0x1e103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2668)));
    // 0x1e1040: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E1040u;
    {
        const bool branch_taken_0x1e1040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1040) {
            ctx->pc = 0x1E10BCu;
            goto label_1e10bc;
        }
    }
    ctx->pc = 0x1E1048u;
    // 0x1e1048: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1e1048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x1e104c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1050: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x1e1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x1e1054: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x1e1054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x1e1058: 0x10a40018  beq         $a1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E1058u;
    {
        const bool branch_taken_0x1e1058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e1058) {
            ctx->pc = 0x1E10BCu;
            goto label_1e10bc;
        }
    }
    ctx->pc = 0x1E1060u;
    // 0x1e1060: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e1060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1064: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E1064u;
    {
        const bool branch_taken_0x1e1064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1064) {
            ctx->pc = 0x1E10BCu;
            goto label_1e10bc;
        }
    }
    ctx->pc = 0x1E106Cu;
    // 0x1e106c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1e106cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1e1070: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e1070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e1074: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E1074u;
    {
        const bool branch_taken_0x1e1074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1074) {
            ctx->pc = 0x1E10BCu;
            goto label_1e10bc;
        }
    }
    ctx->pc = 0x1E107Cu;
    // 0x1e107c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e107cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e1080: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x1E1080u;
    SET_GPR_U32(ctx, 31, 0x1E1088u);
    ctx->pc = 0x1E1084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1080u;
            // 0x1e1084: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1088u; }
        if (ctx->pc != 0x1E1088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1088u; }
        if (ctx->pc != 0x1E1088u) { return; }
    }
    ctx->pc = 0x1E1088u;
label_1e1088:
    // 0x1e1088: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e1088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e108c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e108cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e1090: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1E1090u;
    SET_GPR_U32(ctx, 31, 0x1E1098u);
    ctx->pc = 0x1E1094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1090u;
            // 0x1e1094: 0x262605d0  addiu       $a2, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1098u; }
        if (ctx->pc != 0x1E1098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1098u; }
        if (ctx->pc != 0x1E1098u) { return; }
    }
    ctx->pc = 0x1E1098u;
label_1e1098:
    // 0x1e1098: 0xc6210de8  lwc1        $f1, 0xDE8($s1)
    ctx->pc = 0x1e1098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e109c: 0x3c033b72  lui         $v1, 0x3B72
    ctx->pc = 0x1e109cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15218 << 16));
    // 0x1e10a0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1e10a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e10a4: 0x3463b9d6  ori         $v1, $v1, 0xB9D6
    ctx->pc = 0x1e10a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47574);
    // 0x1e10a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e10a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e10ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1e10acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e10b0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e10b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e10b4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1e10b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e10b8: 0xe6200de8  swc1        $f0, 0xDE8($s1)
    ctx->pc = 0x1e10b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3560), bits); }
label_1e10bc:
    // 0x1e10bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1e10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x1e10c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e10c4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x1e10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x1e10c8: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x1e10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x1e10cc: 0x5464003c  bnel        $v1, $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E10CCu;
    {
        const bool branch_taken_0x1e10cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e10cc) {
            ctx->pc = 0x1E10D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10CCu;
            // 0x1e10d0: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E11C0u;
            goto label_1e11c0;
        }
    }
    ctx->pc = 0x1E10D4u;
    // 0x1e10d4: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x1e10d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
    // 0x1e10d8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1e10d8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1e10dc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E10DCu;
    {
        const bool branch_taken_0x1e10dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E10E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10DCu;
            // 0x1e10e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10dc) {
            ctx->pc = 0x1E10F4u;
            goto label_1e10f4;
        }
    }
    ctx->pc = 0x1E10E4u;
    // 0x1e10e4: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x1e10e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e10e8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E10E8u;
    {
        const bool branch_taken_0x1e10e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e10e8) {
            ctx->pc = 0x1E10F4u;
            goto label_1e10f4;
        }
    }
    ctx->pc = 0x1E10F0u;
    // 0x1e10f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e10f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e10f4:
    // 0x1e10f4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E10F4u;
    {
        const bool branch_taken_0x1e10f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e10f4) {
            ctx->pc = 0x1E1134u;
            goto label_1e1134;
        }
    }
    ctx->pc = 0x1E10FCu;
    // 0x1e10fc: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x1e10fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
    // 0x1e1100: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e1100u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1e1104: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e1104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e1108: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1108u;
    {
        const bool branch_taken_0x1e1108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1108) {
            ctx->pc = 0x1E1128u;
            goto label_1e1128;
        }
    }
    ctx->pc = 0x1E1110u;
    // 0x1e1110: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e1110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1e1114: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1e1114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x1e1118: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1e1118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x1e111c: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e111cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1e1120: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e1120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e1124: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e1124u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e1128:
    // 0x1e1128: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1128u;
    {
        const bool branch_taken_0x1e1128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1128) {
            ctx->pc = 0x1E1134u;
            goto label_1e1134;
        }
    }
    ctx->pc = 0x1E1130u;
    // 0x1e1130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1134:
    // 0x1e1134: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1134u;
    {
        const bool branch_taken_0x1e1134 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1134) {
            ctx->pc = 0x1E1138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1134u;
            // 0x1e1138: 0xc6210de4  lwc1        $f1, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E114Cu;
            goto label_1e114c;
        }
    }
    ctx->pc = 0x1E113Cu;
    // 0x1e113c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e1140: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E1140u;
    {
        const bool branch_taken_0x1e1140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1140) {
            ctx->pc = 0x1E11BCu;
            goto label_1e11bc;
        }
    }
    ctx->pc = 0x1E1148u;
    // 0x1e1148: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x1e1148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e114c:
    // 0x1e114c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e114cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1150: 0x0  nop
    ctx->pc = 0x1e1150u;
    // NOP
    // 0x1e1154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e1154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1158: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1E1158u;
    {
        const bool branch_taken_0x1e1158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1158) {
            ctx->pc = 0x1E115Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1158u;
            // 0x1e115c: 0x92240078  lbu         $a0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E11A4u;
            goto label_1e11a4;
        }
    }
    ctx->pc = 0x1E1160u;
    // 0x1e1160: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x1e1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
    // 0x1e1164: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1e1164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1e1168: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1168u;
    {
        const bool branch_taken_0x1e1168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1168) {
            ctx->pc = 0x1E11A0u;
            goto label_1e11a0;
        }
    }
    ctx->pc = 0x1E1170u;
    // 0x1e1170: 0x8e220da4  lw          $v0, 0xDA4($s1)
    ctx->pc = 0x1e1170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3492)));
    // 0x1e1174: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1e1174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1e1178: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1178u;
    {
        const bool branch_taken_0x1e1178 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e1178) {
            ctx->pc = 0x1E11A0u;
            goto label_1e11a0;
        }
    }
    ctx->pc = 0x1E1180u;
    // 0x1e1180: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x1E1180u;
    SET_GPR_U32(ctx, 31, 0x1E1188u);
    ctx->pc = 0x1E1184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1180u;
            // 0x1e1184: 0x92240078  lbu         $a0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1188u; }
        if (ctx->pc != 0x1E1188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1188u; }
        if (ctx->pc != 0x1E1188u) { return; }
    }
    ctx->pc = 0x1E1188u;
label_1e1188:
    // 0x1e1188: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E1188u;
    {
        const bool branch_taken_0x1e1188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1188) {
            ctx->pc = 0x1E11BCu;
            goto label_1e11bc;
        }
    }
    ctx->pc = 0x1E1190u;
    // 0x1e1190: 0xc072a56  jal         func_1CA958
    ctx->pc = 0x1E1190u;
    SET_GPR_U32(ctx, 31, 0x1E1198u);
    ctx->pc = 0x1E1194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1190u;
            // 0x1e1194: 0x92240078  lbu         $a0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1198u; }
        if (ctx->pc != 0x1E1198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1198u; }
        if (ctx->pc != 0x1E1198u) { return; }
    }
    ctx->pc = 0x1E1198u;
label_1e1198:
    // 0x1e1198: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1198u;
    {
        const bool branch_taken_0x1e1198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1198) {
            ctx->pc = 0x1E11BCu;
            goto label_1e11bc;
        }
    }
    ctx->pc = 0x1E11A0u;
label_1e11a0:
    // 0x1e11a0: 0x92240078  lbu         $a0, 0x78($s1)
    ctx->pc = 0x1e11a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
label_1e11a4:
    // 0x1e11a4: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x1E11A4u;
    SET_GPR_U32(ctx, 31, 0x1E11ACu);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11ACu; }
        if (ctx->pc != 0x1E11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11ACu; }
        if (ctx->pc != 0x1E11ACu) { return; }
    }
    ctx->pc = 0x1E11ACu;
label_1e11ac:
    // 0x1e11ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E11ACu;
    {
        const bool branch_taken_0x1e11ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e11ac) {
            ctx->pc = 0x1E11BCu;
            goto label_1e11bc;
        }
    }
    ctx->pc = 0x1E11B4u;
    // 0x1e11b4: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x1E11B4u;
    SET_GPR_U32(ctx, 31, 0x1E11BCu);
    ctx->pc = 0x1E11B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11B4u;
            // 0x1e11b8: 0x92240078  lbu         $a0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11BCu; }
        if (ctx->pc != 0x1E11BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11BCu; }
        if (ctx->pc != 0x1E11BCu) { return; }
    }
    ctx->pc = 0x1E11BCu;
label_1e11bc:
    // 0x1e11bc: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1e11bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1e11c0:
    // 0x1e11c0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e11c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e11c4: 0x56030036  bnel        $s0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E11C4u;
    {
        const bool branch_taken_0x1e11c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e11c4) {
            ctx->pc = 0x1E11C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11C4u;
            // 0x1e11c8: 0x8e240e34  lw          $a0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E12A0u;
            goto label_1e12a0;
        }
    }
    ctx->pc = 0x1E11CCu;
    // 0x1e11cc: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x1e11ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
    // 0x1e11d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e11d4: 0x8c8400cc  lw          $a0, 0xCC($a0)
    ctx->pc = 0x1e11d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1e11d8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1e11d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e11dc: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E11DCu;
    {
        const bool branch_taken_0x1e11dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e11dc) {
            ctx->pc = 0x1E11E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11DCu;
            // 0x1e11e0: 0x8e240e34  lw          $a0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1208u;
            goto label_1e1208;
        }
    }
    ctx->pc = 0x1E11E4u;
    // 0x1e11e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1e11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x1e11e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e11e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e11ec: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x1e11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x1e11f0: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x1e11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x1e11f4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E11F4u;
    {
        const bool branch_taken_0x1e11f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e11f4) {
            ctx->pc = 0x1E1204u;
            goto label_1e1204;
        }
    }
    ctx->pc = 0x1E11FCu;
    // 0x1e11fc: 0xc07855c  jal         func_1E1570
    ctx->pc = 0x1E11FCu;
    SET_GPR_U32(ctx, 31, 0x1E1204u);
    ctx->pc = 0x1E1200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11FCu;
            // 0x1e1200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1570u;
    if (runtime->hasFunction(0x1E1570u)) {
        auto targetFn = runtime->lookupFunction(0x1E1570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1204u; }
        if (ctx->pc != 0x1E1204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1570_0x1e1570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1204u; }
        if (ctx->pc != 0x1E1204u) { return; }
    }
    ctx->pc = 0x1E1204u;
label_1e1204:
    // 0x1e1204: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x1e1204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1e1208:
    // 0x1e1208: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1e1208u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1e120c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E120Cu;
    {
        const bool branch_taken_0x1e120c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E1210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E120Cu;
            // 0x1e1210: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e120c) {
            ctx->pc = 0x1E1224u;
            goto label_1e1224;
        }
    }
    ctx->pc = 0x1E1214u;
    // 0x1e1214: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x1e1214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e1218: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1218u;
    {
        const bool branch_taken_0x1e1218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1218) {
            ctx->pc = 0x1E1224u;
            goto label_1e1224;
        }
    }
    ctx->pc = 0x1E1220u;
    // 0x1e1220: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e1220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1224:
    // 0x1e1224: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E1224u;
    {
        const bool branch_taken_0x1e1224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1224) {
            ctx->pc = 0x1E1264u;
            goto label_1e1264;
        }
    }
    ctx->pc = 0x1E122Cu;
    // 0x1e122c: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x1e122cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
    // 0x1e1230: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e1230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1e1234: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e1234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e1238: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1238u;
    {
        const bool branch_taken_0x1e1238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1238) {
            ctx->pc = 0x1E1258u;
            goto label_1e1258;
        }
    }
    ctx->pc = 0x1E1240u;
    // 0x1e1240: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e1240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1e1244: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1e1244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x1e1248: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1e1248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x1e124c: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e124cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1e1250: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e1250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e1254: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e1254u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e1258:
    // 0x1e1258: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1258u;
    {
        const bool branch_taken_0x1e1258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1258) {
            ctx->pc = 0x1E1264u;
            goto label_1e1264;
        }
    }
    ctx->pc = 0x1E1260u;
    // 0x1e1260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1264:
    // 0x1e1264: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1264u;
    {
        const bool branch_taken_0x1e1264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1264) {
            ctx->pc = 0x1E1268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1264u;
            // 0x1e1268: 0x92240080  lbu         $a0, 0x80($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E127Cu;
            goto label_1e127c;
        }
    }
    ctx->pc = 0x1E126Cu;
    // 0x1e126c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e1270: 0x5483002f  bnel        $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E1270u;
    {
        const bool branch_taken_0x1e1270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1270) {
            ctx->pc = 0x1E1274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1270u;
            // 0x1e1274: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1330u;
            goto label_1e1330;
        }
    }
    ctx->pc = 0x1E1278u;
    // 0x1e1278: 0x92240080  lbu         $a0, 0x80($s1)
    ctx->pc = 0x1e1278u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
label_1e127c:
    // 0x1e127c: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x1E127Cu;
    SET_GPR_U32(ctx, 31, 0x1E1284u);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1284u; }
        if (ctx->pc != 0x1E1284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1284u; }
        if (ctx->pc != 0x1E1284u) { return; }
    }
    ctx->pc = 0x1E1284u;
label_1e1284:
    // 0x1e1284: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E1284u;
    {
        const bool branch_taken_0x1e1284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1284) {
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E128Cu;
    // 0x1e128c: 0xc072a56  jal         func_1CA958
    ctx->pc = 0x1E128Cu;
    SET_GPR_U32(ctx, 31, 0x1E1294u);
    ctx->pc = 0x1E1290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E128Cu;
            // 0x1e1290: 0x92240080  lbu         $a0, 0x80($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1294u; }
        if (ctx->pc != 0x1E1294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1294u; }
        if (ctx->pc != 0x1E1294u) { return; }
    }
    ctx->pc = 0x1E1294u;
label_1e1294:
    // 0x1e1294: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E1294u;
    {
        const bool branch_taken_0x1e1294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1294) {
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E129Cu;
    // 0x1e129c: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x1e129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1e12a0:
    // 0x1e12a0: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1e12a0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1e12a4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E12A4u;
    {
        const bool branch_taken_0x1e12a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E12A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12A4u;
            // 0x1e12a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12a4) {
            ctx->pc = 0x1E12BCu;
            goto label_1e12bc;
        }
    }
    ctx->pc = 0x1E12ACu;
    // 0x1e12ac: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x1e12acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e12b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E12B0u;
    {
        const bool branch_taken_0x1e12b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e12b0) {
            ctx->pc = 0x1E12BCu;
            goto label_1e12bc;
        }
    }
    ctx->pc = 0x1E12B8u;
    // 0x1e12b8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e12b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e12bc:
    // 0x1e12bc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E12BCu;
    {
        const bool branch_taken_0x1e12bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e12bc) {
            ctx->pc = 0x1E12FCu;
            goto label_1e12fc;
        }
    }
    ctx->pc = 0x1E12C4u;
    // 0x1e12c4: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x1e12c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
    // 0x1e12c8: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e12c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1e12cc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e12ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e12d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E12D0u;
    {
        const bool branch_taken_0x1e12d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e12d0) {
            ctx->pc = 0x1E12F0u;
            goto label_1e12f0;
        }
    }
    ctx->pc = 0x1E12D8u;
    // 0x1e12d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1e12dc: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1e12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x1e12e0: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1e12e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x1e12e4: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e12e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1e12e8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e12e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e12ec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e12ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e12f0:
    // 0x1e12f0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E12F0u;
    {
        const bool branch_taken_0x1e12f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e12f0) {
            ctx->pc = 0x1E12FCu;
            goto label_1e12fc;
        }
    }
    ctx->pc = 0x1E12F8u;
    // 0x1e12f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e12f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e12fc:
    // 0x1e12fc: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E12FCu;
    {
        const bool branch_taken_0x1e12fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e12fc) {
            ctx->pc = 0x1E1300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12FCu;
            // 0x1e1300: 0x92240080  lbu         $a0, 0x80($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1314u;
            goto label_1e1314;
        }
    }
    ctx->pc = 0x1E1304u;
    // 0x1e1304: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e1304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e1308: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1308u;
    {
        const bool branch_taken_0x1e1308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1308) {
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E1310u;
    // 0x1e1310: 0x92240080  lbu         $a0, 0x80($s1)
    ctx->pc = 0x1e1310u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
label_1e1314:
    // 0x1e1314: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x1E1314u;
    SET_GPR_U32(ctx, 31, 0x1E131Cu);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E131Cu; }
        if (ctx->pc != 0x1E131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E131Cu; }
        if (ctx->pc != 0x1E131Cu) { return; }
    }
    ctx->pc = 0x1E131Cu;
label_1e131c:
    // 0x1e131c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E131Cu;
    {
        const bool branch_taken_0x1e131c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e131c) {
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E1324u;
    // 0x1e1324: 0xc072aaa  jal         func_1CAAA8
    ctx->pc = 0x1E1324u;
    SET_GPR_U32(ctx, 31, 0x1E132Cu);
    ctx->pc = 0x1E1328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1324u;
            // 0x1e1328: 0x92240080  lbu         $a0, 0x80($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E132Cu; }
        if (ctx->pc != 0x1E132Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E132Cu; }
        if (ctx->pc != 0x1E132Cu) { return; }
    }
    ctx->pc = 0x1E132Cu;
label_1e132c:
    // 0x1e132c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e1330:
    // 0x1e1330: 0x16030062  bne         $s0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1E1330u;
    {
        const bool branch_taken_0x1e1330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1330) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E1338u;
    // 0x1e1338: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e1338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e133c: 0x8e250da0  lw          $a1, 0xDA0($s1)
    ctx->pc = 0x1e133cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
    // 0x1e1340: 0x8c64a768  lw          $a0, -0x5898($v1)
    ctx->pc = 0x1e1340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944616)));
    // 0x1e1344: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1e1344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e1348: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1e1348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1e134c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e134cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1350: 0x1460005a  bnez        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1E1350u;
    {
        const bool branch_taken_0x1e1350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1350) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E1358u;
    // 0x1e1358: 0x8e230a6c  lw          $v1, 0xA6C($s1)
    ctx->pc = 0x1e1358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2668)));
    // 0x1e135c: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1E135Cu;
    {
        const bool branch_taken_0x1e135c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e135c) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E1364u;
    // 0x1e1364: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x1e1364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
    // 0x1e1368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e136c: 0x8c8400cc  lw          $a0, 0xCC($a0)
    ctx->pc = 0x1e136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1e1370: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1e1370u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e1374: 0x14830051  bne         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1E1374u;
    {
        const bool branch_taken_0x1e1374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1374) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E137Cu;
    // 0x1e137c: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x1E137Cu;
    SET_GPR_U32(ctx, 31, 0x1E1384u);
    ctx->pc = 0x1E1380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E137Cu;
            // 0x1e1380: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1384u; }
        if (ctx->pc != 0x1E1384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1384u; }
        if (ctx->pc != 0x1E1384u) { return; }
    }
    ctx->pc = 0x1E1384u;
label_1e1384:
    // 0x1e1384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1388: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x1E1388u;
    SET_GPR_U32(ctx, 31, 0x1E1390u);
    ctx->pc = 0x1E138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1388u;
            // 0x1e138c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1390u; }
        if (ctx->pc != 0x1E1390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1390u; }
        if (ctx->pc != 0x1E1390u) { return; }
    }
    ctx->pc = 0x1E1390u;
label_1e1390:
    // 0x1e1390: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1e1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e1394: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1e1394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1e1398: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1E1398u;
    {
        const bool branch_taken_0x1e1398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1398) {
            ctx->pc = 0x1E139Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1398u;
            // 0x1e139c: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1444u;
            goto label_1e1444;
        }
    }
    ctx->pc = 0x1E13A0u;
    // 0x1e13a0: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x1e13a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e13a4: 0x26240a50  addiu       $a0, $s1, 0xA50
    ctx->pc = 0x1e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
    // 0x1e13a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e13a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e13ac: 0x0  nop
    ctx->pc = 0x1e13acu;
    // NOP
    // 0x1e13b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e13b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e13b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E13B4u;
    {
        const bool branch_taken_0x1e13b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E13B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13B4u;
            // 0x1e13b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13b4) {
            ctx->pc = 0x1E13C0u;
            goto label_1e13c0;
        }
    }
    ctx->pc = 0x1E13BCu;
    // 0x1e13bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e13bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e13c0:
    // 0x1e13c0: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E13C0u;
    {
        const bool branch_taken_0x1e13c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e13c0) {
            ctx->pc = 0x1E13C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13C0u;
            // 0x1e13c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E13D8u;
            goto label_1e13d8;
        }
    }
    ctx->pc = 0x1E13C8u;
    // 0x1e13c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e13c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e13cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E13CCu;
    {
        const bool branch_taken_0x1e13cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13CCu;
            // 0x1e13d0: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13cc) {
            ctx->pc = 0x1E13F0u;
            goto label_1e13f0;
        }
    }
    ctx->pc = 0x1E13D4u;
    // 0x1e13d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1e13d8:
    // 0x1e13d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e13d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e13dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e13dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e13e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e13e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e13e4: 0x0  nop
    ctx->pc = 0x1e13e4u;
    // NOP
    // 0x1e13e8: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1e13e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1e13ec: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1e13ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1e13f0:
    // 0x1e13f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e13f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e13f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e13f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e13f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e13fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1e13fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e1400: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e1400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e1404: 0x0  nop
    ctx->pc = 0x1e1404u;
    // NOP
    // 0x1e1408: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1e1408u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e140c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1e140cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1e1410: 0x4604111d  msub.s      $f4, $f2, $f4
    ctx->pc = 0x1e1410u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1e1414: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e1414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e1418: 0xc6220dec  lwc1        $f2, 0xDEC($s1)
    ctx->pc = 0x1e1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e141c: 0xc6200a7c  lwc1        $f0, 0xA7C($s1)
    ctx->pc = 0x1e141cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e1420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1424: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1e1424u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1e1428: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1e1428u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e142c: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x1e142cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x1e1430: 0xc0eea24  jal         func_3BA890
    ctx->pc = 0x1E1430u;
    SET_GPR_U32(ctx, 31, 0x1E1438u);
    ctx->pc = 0x1E1434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1430u;
            // 0x1e1434: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1438u; }
        if (ctx->pc != 0x1E1438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1438u; }
        if (ctx->pc != 0x1E1438u) { return; }
    }
    ctx->pc = 0x1E1438u;
label_1e1438:
    // 0x1e1438: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E1438u;
    {
        const bool branch_taken_0x1e1438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1438) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E1440u;
    // 0x1e1440: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e1440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1e1444:
    // 0x1e1444: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1e1444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e1448: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1e1448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1e144c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e144cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e1450: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1e1450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e1454: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1e1454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1e1458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e1458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e145c: 0xc605002c  lwc1        $f5, 0x2C($s0)
    ctx->pc = 0x1e145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e1460: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x1e1460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
    // 0x1e1464: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x1e1464u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1e1468: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1e1468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1e146c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e146cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1470: 0x4605209c  madd.s      $f2, $f4, $f5
    ctx->pc = 0x1e1470u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1e1474: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e1474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e1478: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1e1478u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1e147c: 0x0  nop
    ctx->pc = 0x1e147cu;
    // NOP
    // 0x1e1480: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x1e1480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1484: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1e1484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1488: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1E1488u;
    {
        const bool branch_taken_0x1e1488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1488) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E1490u;
    // 0x1e1490: 0xe6230de8  swc1        $f3, 0xDE8($s1)
    ctx->pc = 0x1e1490u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3560), bits); }
    // 0x1e1494: 0x3c033b17  lui         $v1, 0x3B17
    ctx->pc = 0x1e1494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15127 << 16));
    // 0x1e1498: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x1e1498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e149c: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x1e149cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
    // 0x1e14a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e14a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e14a4: 0x0  nop
    ctx->pc = 0x1e14a4u;
    // NOP
    // 0x1e14a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e14a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e14ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e14acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e14b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E14B0u;
    {
        const bool branch_taken_0x1e14b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E14B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14B0u;
            // 0x1e14b4: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14b0) {
            ctx->pc = 0x1E14BCu;
            goto label_1e14bc;
        }
    }
    ctx->pc = 0x1E14B8u;
    // 0x1e14b8: 0xe6220de4  swc1        $f2, 0xDE4($s1)
    ctx->pc = 0x1e14b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_1e14bc:
    // 0x1e14bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e14bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e14c0:
    // 0x1e14c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e14c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e14c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e14c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e14c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E14C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E14CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14C8u;
            // 0x1e14cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E14D0u;
}
