#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E01C0
// Address: 0x1e01c0 - 0x1e02b0
void sub_001E01C0_0x1e01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E01C0_0x1e01c0");
#endif

    switch (ctx->pc) {
        case 0x1e0228u: goto label_1e0228;
        case 0x1e0258u: goto label_1e0258;
        case 0x1e0260u: goto label_1e0260;
        case 0x1e0280u: goto label_1e0280;
        default: break;
    }

    ctx->pc = 0x1e01c0u;

    // 0x1e01c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e01c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e01c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e01c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e01c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e01c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e01cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e01ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e01d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e01d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01d4: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x1e01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x1e01d8: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x1e01d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1e01dc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e01dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e01e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E01E0u;
    {
        const bool branch_taken_0x1e01e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E01E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E01E0u;
            // 0x1e01e4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01e0) {
            ctx->pc = 0x1E0218u;
            goto label_1e0218;
        }
    }
    ctx->pc = 0x1E01E8u;
    // 0x1e01e8: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x1e01e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x1e01ec: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e01ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1e01f0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e01f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1e01f4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E01F4u;
    {
        const bool branch_taken_0x1e01f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e01f4) {
            ctx->pc = 0x1E01F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E01F4u;
            // 0x1e01f8: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0218u;
            goto label_1e0218;
        }
    }
    ctx->pc = 0x1E01FCu;
    // 0x1e01fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e01fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1e0200: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x1e0204: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1e0204u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x1e0208: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e0208u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1e020c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e020cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e0210: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0210u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e0214: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e0214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e0218:
    // 0x1e0218: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0218u;
    {
        const bool branch_taken_0x1e0218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0218) {
            ctx->pc = 0x1E021Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0218u;
            // 0x1e021c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E029Cu;
            goto label_1e029c;
        }
    }
    ctx->pc = 0x1E0220u;
    // 0x1e0220: 0xc077fd4  jal         func_1DFF50
    ctx->pc = 0x1E0220u;
    SET_GPR_U32(ctx, 31, 0x1E0228u);
    ctx->pc = 0x1E0224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0220u;
            // 0x1e0224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (runtime->hasFunction(0x1DFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0228u; }
        if (ctx->pc != 0x1E0228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF50_0x1dff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0228u; }
        if (ctx->pc != 0x1E0228u) { return; }
    }
    ctx->pc = 0x1E0228u;
label_1e0228:
    // 0x1e0228: 0xe6140e64  swc1        $f20, 0xE64($s0)
    ctx->pc = 0x1e0228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3684), bits); }
    // 0x1e022c: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1e022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x1e0230: 0xae020e68  sw          $v0, 0xE68($s0)
    ctx->pc = 0x1e0230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3688), GPR_U32(ctx, 2));
    // 0x1e0234: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1e0234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e0238: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1e0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1e023c: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x1e023cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x1e0240: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1e0240u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x1e0244: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x1e0244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x1e0248: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x1e0248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x1e024c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e024cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0250: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x1E0250u;
    SET_GPR_U32(ctx, 31, 0x1E0258u);
    ctx->pc = 0x1E0254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0250u;
            // 0x1e0254: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0258u; }
        if (ctx->pc != 0x1E0258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0258u; }
        if (ctx->pc != 0x1E0258u) { return; }
    }
    ctx->pc = 0x1E0258u;
label_1e0258:
    // 0x1e0258: 0xc040180  jal         func_100600
    ctx->pc = 0x1E0258u;
    SET_GPR_U32(ctx, 31, 0x1E0260u);
    ctx->pc = 0x1E025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0258u;
            // 0x1e025c: 0x24040208  addiu       $a0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0260u; }
        if (ctx->pc != 0x1E0260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0260u; }
        if (ctx->pc != 0x1E0260u) { return; }
    }
    ctx->pc = 0x1E0260u;
label_1e0260:
    // 0x1e0260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0264: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0264u;
    {
        const bool branch_taken_0x1e0264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0264) {
            ctx->pc = 0x1E0268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0264u;
            // 0x1e0268: 0xae04122c  sw          $a0, 0x122C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4652), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0288u;
            goto label_1e0288;
        }
    }
    ctx->pc = 0x1E026Cu;
    // 0x1e026c: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x1e026cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x1e0270: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e0270u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e0274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0278: 0xc159418  jal         func_565060
    ctx->pc = 0x1E0278u;
    SET_GPR_U32(ctx, 31, 0x1E0280u);
    ctx->pc = 0x1E027Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0278u;
            // 0x1e027c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565060u;
    if (runtime->hasFunction(0x565060u)) {
        auto targetFn = runtime->lookupFunction(0x565060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0280u; }
        if (ctx->pc != 0x1E0280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565060_0x565060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0280u; }
        if (ctx->pc != 0x1E0280u) { return; }
    }
    ctx->pc = 0x1E0280u;
label_1e0280:
    // 0x1e0280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0284: 0xae04122c  sw          $a0, 0x122C($s0)
    ctx->pc = 0x1e0284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4652), GPR_U32(ctx, 4));
label_1e0288:
    // 0x1e0288: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1e0288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1e028c: 0x8e040da0  lw          $a0, 0xDA0($s0)
    ctx->pc = 0x1e028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
    // 0x1e0290: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e0290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e0294: 0xae030da0  sw          $v1, 0xDA0($s0)
    ctx->pc = 0x1e0294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 3));
    // 0x1e0298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e029c:
    // 0x1e029c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e02a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e02a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e02a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E02A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E02A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02A4u;
            // 0x1e02a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E02ACu;
    // 0x1e02ac: 0x0  nop
    ctx->pc = 0x1e02acu;
    // NOP
}
