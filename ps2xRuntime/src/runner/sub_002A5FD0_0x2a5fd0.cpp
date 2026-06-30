#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5FD0
// Address: 0x2a5fd0 - 0x2a6110
void sub_002A5FD0_0x2a5fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5FD0_0x2a5fd0");
#endif

    switch (ctx->pc) {
        case 0x2a5ff0u: goto label_2a5ff0;
        case 0x2a6054u: goto label_2a6054;
        case 0x2a6068u: goto label_2a6068;
        case 0x2a607cu: goto label_2a607c;
        case 0x2a6090u: goto label_2a6090;
        case 0x2a60c8u: goto label_2a60c8;
        case 0x2a60ecu: goto label_2a60ec;
        default: break;
    }

    ctx->pc = 0x2a5fd0u;

    // 0x2a5fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a5fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a5fd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a5fd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a5fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5fe4: 0x8c50e400  lw          $s0, -0x1C00($v0)
    ctx->pc = 0x2a5fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
    // 0x2a5fe8: 0xc040180  jal         func_100600
    ctx->pc = 0x2A5FE8u;
    SET_GPR_U32(ctx, 31, 0x2A5FF0u);
    ctx->pc = 0x2A5FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FE8u;
            // 0x2a5fec: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FF0u; }
        if (ctx->pc != 0x2A5FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5FF0u; }
        if (ctx->pc != 0x2A5FF0u) { return; }
    }
    ctx->pc = 0x2A5FF0u;
label_2a5ff0:
    // 0x2a5ff0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A5FF0u;
    {
        const bool branch_taken_0x2a5ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5FF0u;
            // 0x2a5ff4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ff0) {
            ctx->pc = 0x2A6090u;
            goto label_2a6090;
        }
    }
    ctx->pc = 0x2A5FF8u;
    // 0x2a5ff8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a5ffc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2a5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a6000: 0x2463fb70  addiu       $v1, $v1, -0x490
    ctx->pc = 0x2a6000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966128));
    // 0x2a6004: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2a6004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a6008: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a6008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a600c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a600cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6010: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x2a6010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6014: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2a6014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2a6018: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2a6018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2a601c: 0x2463c0a0  addiu       $v1, $v1, -0x3F60
    ctx->pc = 0x2a601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951072));
    // 0x2a6020: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2a6020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2a6024: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a6024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a6028: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a6028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a602c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a602cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a6030: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2a6030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x2a6034: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a6034u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a6038: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x2a6038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x2a603c: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2a603cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2a6040: 0xa6200070  sh          $zero, 0x70($s1)
    ctx->pc = 0x2a6040u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a6044: 0xa6200072  sh          $zero, 0x72($s1)
    ctx->pc = 0x2a6044u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a6048: 0xa6220074  sh          $v0, 0x74($s1)
    ctx->pc = 0x2a6048u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a604c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A604Cu;
    SET_GPR_U32(ctx, 31, 0x2A6054u);
    ctx->pc = 0x2A6050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A604Cu;
            // 0x2a6050: 0xa6200076  sh          $zero, 0x76($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 118), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6054u; }
        if (ctx->pc != 0x2A6054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6054u; }
        if (ctx->pc != 0x2A6054u) { return; }
    }
    ctx->pc = 0x2A6054u;
label_2a6054:
    // 0x2a6054: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a6054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6058: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2a6058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2a605c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a605cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a6060: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A6060u;
    SET_GPR_U32(ctx, 31, 0x2A6068u);
    ctx->pc = 0x2A6064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6060u;
            // 0x2a6064: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6068u; }
        if (ctx->pc != 0x2A6068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6068u; }
        if (ctx->pc != 0x2A6068u) { return; }
    }
    ctx->pc = 0x2A6068u;
label_2a6068:
    // 0x2a6068: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a6068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a606c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2a606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2a6070: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a6070u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a6074: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A6074u;
    SET_GPR_U32(ctx, 31, 0x2A607Cu);
    ctx->pc = 0x2A6078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6074u;
            // 0x2a6078: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A607Cu; }
        if (ctx->pc != 0x2A607Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A607Cu; }
        if (ctx->pc != 0x2A607Cu) { return; }
    }
    ctx->pc = 0x2A607Cu;
label_2a607c:
    // 0x2a607c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a607cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6080: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2a6080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2a6084: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a6084u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a6088: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2A6088u;
    SET_GPR_U32(ctx, 31, 0x2A6090u);
    ctx->pc = 0x2A608Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6088u;
            // 0x2a608c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6090u; }
        if (ctx->pc != 0x2A6090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6090u; }
        if (ctx->pc != 0x2A6090u) { return; }
    }
    ctx->pc = 0x2A6090u;
label_2a6090:
    // 0x2a6090: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2a6090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
    // 0x2a6094: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a6094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a6098: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a6098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a609c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a609cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a60a0: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2a60a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2a60a4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a60a8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2a60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2a60ac: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2a60acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a60b0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2a60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a60b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a60b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a60bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a60bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a60c0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A60C0u;
    SET_GPR_U32(ctx, 31, 0x2A60C8u);
    ctx->pc = 0x2A60C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A60C0u;
            // 0x2a60c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A60C8u; }
        if (ctx->pc != 0x2A60C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A60C8u; }
        if (ctx->pc != 0x2A60C8u) { return; }
    }
    ctx->pc = 0x2A60C8u;
label_2a60c8:
    // 0x2a60c8: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x2a60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x2a60cc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2a60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2a60d0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2a60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2a60d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a60d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a60d8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2a60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2a60dc: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2a60dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2a60e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a60e4: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A60E4u;
    SET_GPR_U32(ctx, 31, 0x2A60ECu);
    ctx->pc = 0x2A60E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A60E4u;
            // 0x2a60e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A60ECu; }
        if (ctx->pc != 0x2A60ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A60ECu; }
        if (ctx->pc != 0x2A60ECu) { return; }
    }
    ctx->pc = 0x2A60ECu;
label_2a60ec:
    // 0x2a60ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a60ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a60f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a60f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a60f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a60f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a60f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a60fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A60FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A60FCu;
            // 0x2a6100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6104u;
    // 0x2a6104: 0x0  nop
    ctx->pc = 0x2a6104u;
    // NOP
    // 0x2a6108: 0x0  nop
    ctx->pc = 0x2a6108u;
    // NOP
    // 0x2a610c: 0x0  nop
    ctx->pc = 0x2a610cu;
    // NOP
}
