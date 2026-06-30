#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003720F0
// Address: 0x3720f0 - 0x3722b0
void sub_003720F0_0x3720f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003720F0_0x3720f0");
#endif

    switch (ctx->pc) {
        case 0x372150u: goto label_372150;
        case 0x372158u: goto label_372158;
        case 0x3721b0u: goto label_3721b0;
        case 0x3721e4u: goto label_3721e4;
        case 0x3721ecu: goto label_3721ec;
        case 0x37220cu: goto label_37220c;
        case 0x372214u: goto label_372214;
        case 0x372258u: goto label_372258;
        case 0x372260u: goto label_372260;
        default: break;
    }

    ctx->pc = 0x3720f0u;

    // 0x3720f0: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x3720F0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3720F8u;
    // 0x3720f8: 0x0  nop
    ctx->pc = 0x3720f8u;
    // NOP
    // 0x3720fc: 0x0  nop
    ctx->pc = 0x3720fcu;
    // NOP
    // 0x372100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x372104: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x372104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x372108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37210c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37210cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x372110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372114: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x372114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x372118: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x372118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37211c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37211cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x372120: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x372120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x372124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x372124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372128: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x372128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x37212c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37212cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372130: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x372130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x372134: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x372134u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x372138: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x372138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x37213c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x37213cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x372140: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x372140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x372144: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x372144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x372148: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x372148u;
    SET_GPR_U32(ctx, 31, 0x372150u);
    ctx->pc = 0x37214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372148u;
            // 0x37214c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372150u; }
        if (ctx->pc != 0x372150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372150u; }
        if (ctx->pc != 0x372150u) { return; }
    }
    ctx->pc = 0x372150u;
label_372150:
    // 0x372150: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x372150u;
    SET_GPR_U32(ctx, 31, 0x372158u);
    ctx->pc = 0x372154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372150u;
            // 0x372154: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372158u; }
        if (ctx->pc != 0x372158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372158u; }
        if (ctx->pc != 0x372158u) { return; }
    }
    ctx->pc = 0x372158u;
label_372158:
    // 0x372158: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x372158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x37215c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x37215cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x372160: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x372160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x372164: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x372164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x372168: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x372168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x37216c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x37216cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x372170: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x372170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
    // 0x372174: 0x24636da0  addiu       $v1, $v1, 0x6DA0
    ctx->pc = 0x372174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28064));
    // 0x372178: 0x8cea0788  lw          $t2, 0x788($a3)
    ctx->pc = 0x372178u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1928)));
    // 0x37217c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x372180: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x372180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x372184: 0x24a521d0  addiu       $a1, $a1, 0x21D0
    ctx->pc = 0x372184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8656));
    // 0x372188: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x372188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x37218c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x37218cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x372190: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x372190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x372194: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x372194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x372198: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x372198u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x37219c: 0xa209004d  sb          $t1, 0x4D($s0)
    ctx->pc = 0x37219cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 9));
    // 0x3721a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3721a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3721a4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3721a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x3721a8: 0xc040804  jal         func_102010
    ctx->pc = 0x3721A8u;
    SET_GPR_U32(ctx, 31, 0x3721B0u);
    ctx->pc = 0x3721ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3721A8u;
            // 0x3721ac: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721B0u; }
        if (ctx->pc != 0x3721B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721B0u; }
        if (ctx->pc != 0x3721B0u) { return; }
    }
    ctx->pc = 0x3721B0u;
label_3721b0:
    // 0x3721b0: 0xae000bc0  sw          $zero, 0xBC0($s0)
    ctx->pc = 0x3721b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3008), GPR_U32(ctx, 0));
    // 0x3721b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3721b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3721b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3721b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3721bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3721bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3721c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3721C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3721C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3721C0u;
            // 0x3721c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3721C8u;
    // 0x3721c8: 0x0  nop
    ctx->pc = 0x3721c8u;
    // NOP
    // 0x3721cc: 0x0  nop
    ctx->pc = 0x3721ccu;
    // NOP
    // 0x3721d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3721d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3721d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3721d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3721d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3721d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3721dc: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x3721DCu;
    SET_GPR_U32(ctx, 31, 0x3721E4u);
    ctx->pc = 0x3721E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3721DCu;
            // 0x3721e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721E4u; }
        if (ctx->pc != 0x3721E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721E4u; }
        if (ctx->pc != 0x3721E4u) { return; }
    }
    ctx->pc = 0x3721E4u;
label_3721e4:
    // 0x3721e4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x3721E4u;
    SET_GPR_U32(ctx, 31, 0x3721ECu);
    ctx->pc = 0x3721E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3721E4u;
            // 0x3721e8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721ECu; }
        if (ctx->pc != 0x3721ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3721ECu; }
        if (ctx->pc != 0x3721ECu) { return; }
    }
    ctx->pc = 0x3721ECu;
label_3721ec:
    // 0x3721ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3721ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3721f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3721f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3721f4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3721f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x3721f8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3721f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x3721fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3721fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x372200: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x372200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x372204: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x372204u;
    SET_GPR_U32(ctx, 31, 0x37220Cu);
    ctx->pc = 0x372208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372204u;
            // 0x372208: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37220Cu; }
        if (ctx->pc != 0x37220Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37220Cu; }
        if (ctx->pc != 0x37220Cu) { return; }
    }
    ctx->pc = 0x37220Cu;
label_37220c:
    // 0x37220c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x37220Cu;
    SET_GPR_U32(ctx, 31, 0x372214u);
    ctx->pc = 0x372210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37220Cu;
            // 0x372210: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372214u; }
        if (ctx->pc != 0x372214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372214u; }
        if (ctx->pc != 0x372214u) { return; }
    }
    ctx->pc = 0x372214u;
label_372214:
    // 0x372214: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x372214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x372218: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x372218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x37221c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x37221cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x372220: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x372220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x372224: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x372224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x372228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37222c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x37222cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x372230: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x372230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372234: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x372234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x372238: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x372238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x37223c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x37223cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x372240: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x372240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x372244: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x372244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x372248: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x372248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x37224c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x37224cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x372250: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x372250u;
    SET_GPR_U32(ctx, 31, 0x372258u);
    ctx->pc = 0x372254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372250u;
            // 0x372254: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372258u; }
        if (ctx->pc != 0x372258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372258u; }
        if (ctx->pc != 0x372258u) { return; }
    }
    ctx->pc = 0x372258u;
label_372258:
    // 0x372258: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x372258u;
    SET_GPR_U32(ctx, 31, 0x372260u);
    ctx->pc = 0x37225Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x372258u;
            // 0x37225c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372260u; }
        if (ctx->pc != 0x372260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372260u; }
        if (ctx->pc != 0x372260u) { return; }
    }
    ctx->pc = 0x372260u;
label_372260:
    // 0x372260: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x372260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x372264: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x372264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x372268: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x372268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x37226c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x37226cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x372270: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x372270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x372274: 0x24846e90  addiu       $a0, $a0, 0x6E90
    ctx->pc = 0x372274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28304));
    // 0x372278: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x372278u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37227c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37227cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x372280: 0x24636ed0  addiu       $v1, $v1, 0x6ED0
    ctx->pc = 0x372280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28368));
    // 0x372284: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x372284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x372288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37228c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x37228cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x372290: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x372290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x372294: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x372294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x372298: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x372298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x37229c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3722a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3722a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3722a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3722A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3722A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3722A4u;
            // 0x3722a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3722ACu;
    // 0x3722ac: 0x0  nop
    ctx->pc = 0x3722acu;
    // NOP
}
