#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004533E0
// Address: 0x4533e0 - 0x453680
void sub_004533E0_0x4533e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004533E0_0x4533e0");
#endif

    switch (ctx->pc) {
        case 0x453440u: goto label_453440;
        case 0x453448u: goto label_453448;
        case 0x4534d0u: goto label_4534d0;
        case 0x45353cu: goto label_45353c;
        case 0x453578u: goto label_453578;
        case 0x4535a4u: goto label_4535a4;
        case 0x4535acu: goto label_4535ac;
        case 0x4535ccu: goto label_4535cc;
        case 0x4535d4u: goto label_4535d4;
        case 0x453618u: goto label_453618;
        case 0x453620u: goto label_453620;
        default: break;
    }

    ctx->pc = 0x4533e0u;

    // 0x4533e0: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x4533E0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4533E8u;
    // 0x4533e8: 0x0  nop
    ctx->pc = 0x4533e8u;
    // NOP
    // 0x4533ec: 0x0  nop
    ctx->pc = 0x4533ecu;
    // NOP
    // 0x4533f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4533f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4533f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4533f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4533f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4533f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4533fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4533fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x453400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x453400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x453404: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x453404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x453408: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x453408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x45340c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x45340cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x453410: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x453410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x453414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x453414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x453418: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x453418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x45341c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x45341cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453420: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x453420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x453424: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x453424u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x453428: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x453428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x45342c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x45342cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x453430: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x453430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x453434: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x453434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x453438: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x453438u;
    SET_GPR_U32(ctx, 31, 0x453440u);
    ctx->pc = 0x45343Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453438u;
            // 0x45343c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453440u; }
        if (ctx->pc != 0x453440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453440u; }
        if (ctx->pc != 0x453440u) { return; }
    }
    ctx->pc = 0x453440u;
label_453440:
    // 0x453440: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x453440u;
    SET_GPR_U32(ctx, 31, 0x453448u);
    ctx->pc = 0x453444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453440u;
            // 0x453444: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453448u; }
        if (ctx->pc != 0x453448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453448u; }
        if (ctx->pc != 0x453448u) { return; }
    }
    ctx->pc = 0x453448u;
label_453448:
    // 0x453448: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x453448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x45344c: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x45344cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x453450: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x453450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x453454: 0x3c0b006b  lui         $t3, 0x6B
    ctx->pc = 0x453454u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)107 << 16));
    // 0x453458: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x453458u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
    // 0x45345c: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x45345cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x453460: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x453460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x453464: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x453464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x453468: 0x8c8d0788  lw          $t5, 0x788($a0)
    ctx->pc = 0x453468u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
    // 0x45346c: 0x258cc560  addiu       $t4, $t4, -0x3AA0
    ctx->pc = 0x45346cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952288));
    // 0x453470: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x453470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x453474: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x453474u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x453478: 0x256bdfa0  addiu       $t3, $t3, -0x2060
    ctx->pc = 0x453478u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959008));
    // 0x45347c: 0x254acfe0  addiu       $t2, $t2, -0x3020
    ctx->pc = 0x45347cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954976));
    // 0x453480: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x453480u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x453484: 0x252924a0  addiu       $t1, $t1, 0x24A0
    ctx->pc = 0x453484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9376));
    // 0x453488: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x453488u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x45348c: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x45348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
    // 0x453490: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x453490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x453494: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x453494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x453498: 0x24a53590  addiu       $a1, $a1, 0x3590
    ctx->pc = 0x453498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
    // 0x45349c: 0x24c62630  addiu       $a2, $a2, 0x2630
    ctx->pc = 0x45349cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9776));
    // 0x4534a0: 0xa20c004d  sb          $t4, 0x4D($s0)
    ctx->pc = 0x4534a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 12));
    // 0x4534a4: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x4534a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x4534a8: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x4534a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x4534ac: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4534acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4534b0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4534b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x4534b4: 0xae0a0054  sw          $t2, 0x54($s0)
    ctx->pc = 0x4534b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 10));
    // 0x4534b8: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x4534b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x4534bc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4534bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4534c0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4534c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x4534c4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4534c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x4534c8: 0xc040804  jal         func_102010
    ctx->pc = 0x4534C8u;
    SET_GPR_U32(ctx, 31, 0x4534D0u);
    ctx->pc = 0x4534CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4534C8u;
            // 0x4534cc: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4534D0u; }
        if (ctx->pc != 0x4534D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4534D0u; }
        if (ctx->pc != 0x4534D0u) { return; }
    }
    ctx->pc = 0x4534D0u;
label_4534d0:
    // 0x4534d0: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x4534d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x4534d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4534d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4534d8: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x4534d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
    // 0x4534dc: 0xa2000308  sb          $zero, 0x308($s0)
    ctx->pc = 0x4534dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 776), (uint8_t)GPR_U32(ctx, 0));
    // 0x4534e0: 0xa2000309  sb          $zero, 0x309($s0)
    ctx->pc = 0x4534e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 777), (uint8_t)GPR_U32(ctx, 0));
    // 0x4534e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4534e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4534e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4534e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4534ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4534ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4534F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4534ECu;
            // 0x4534f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4534F4u;
    // 0x4534f4: 0x0  nop
    ctx->pc = 0x4534f4u;
    // NOP
    // 0x4534f8: 0x0  nop
    ctx->pc = 0x4534f8u;
    // NOP
    // 0x4534fc: 0x0  nop
    ctx->pc = 0x4534fcu;
    // NOP
    // 0x453500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x453500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x453504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x453504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x453508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x453508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45350c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x453510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x453510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453514: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x453514u;
    {
        const bool branch_taken_0x453514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x453518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453514u;
            // 0x453518: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453514) {
            ctx->pc = 0x453578u;
            goto label_453578;
        }
    }
    ctx->pc = 0x45351Cu;
    // 0x45351c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x45351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x453520: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x453520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x453524: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x453524u;
    {
        const bool branch_taken_0x453524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x453528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453524u;
            // 0x453528: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453524) {
            ctx->pc = 0x453560u;
            goto label_453560;
        }
    }
    ctx->pc = 0x45352Cu;
    // 0x45352c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x45352cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x453530: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x453530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x453534: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x453534u;
    SET_GPR_U32(ctx, 31, 0x45353Cu);
    ctx->pc = 0x453538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453534u;
            // 0x453538: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45353Cu; }
        if (ctx->pc != 0x45353Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45353Cu; }
        if (ctx->pc != 0x45353Cu) { return; }
    }
    ctx->pc = 0x45353Cu;
label_45353c:
    // 0x45353c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x45353Cu;
    {
        const bool branch_taken_0x45353c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45353c) {
            ctx->pc = 0x453540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45353Cu;
            // 0x453540: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453564u;
            goto label_453564;
        }
    }
    ctx->pc = 0x453544u;
    // 0x453544: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x453544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x453548: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x453548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x45354c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45354Cu;
    {
        const bool branch_taken_0x45354c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x453550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45354Cu;
            // 0x453550: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45354c) {
            ctx->pc = 0x453560u;
            goto label_453560;
        }
    }
    ctx->pc = 0x453554u;
    // 0x453554: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x453554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x453558: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x453558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x45355c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x45355cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_453560:
    // 0x453560: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x453560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_453564:
    // 0x453564: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x453564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x453568: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x453568u;
    {
        const bool branch_taken_0x453568 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x453568) {
            ctx->pc = 0x45356Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453568u;
            // 0x45356c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45357Cu;
            goto label_45357c;
        }
    }
    ctx->pc = 0x453570u;
    // 0x453570: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x453570u;
    SET_GPR_U32(ctx, 31, 0x453578u);
    ctx->pc = 0x453574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453570u;
            // 0x453574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453578u; }
        if (ctx->pc != 0x453578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453578u; }
        if (ctx->pc != 0x453578u) { return; }
    }
    ctx->pc = 0x453578u;
label_453578:
    // 0x453578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x453578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45357c:
    // 0x45357c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45357cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x453580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x453580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x453584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453588: 0x3e00008  jr          $ra
    ctx->pc = 0x453588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453588u;
            // 0x45358c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x453590u;
    // 0x453590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x453590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x453594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x453594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x453598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x453598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45359c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x45359Cu;
    SET_GPR_U32(ctx, 31, 0x4535A4u);
    ctx->pc = 0x4535A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45359Cu;
            // 0x4535a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4535A4u; }
        if (ctx->pc != 0x4535A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4535A4u; }
        if (ctx->pc != 0x4535A4u) { return; }
    }
    ctx->pc = 0x4535A4u;
label_4535a4:
    // 0x4535a4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x4535A4u;
    SET_GPR_U32(ctx, 31, 0x4535ACu);
    ctx->pc = 0x4535A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4535A4u;
            // 0x4535a8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4535ACu; }
        if (ctx->pc != 0x4535ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4535ACu; }
        if (ctx->pc != 0x4535ACu) { return; }
    }
    ctx->pc = 0x4535ACu;
label_4535ac:
    // 0x4535ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4535acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4535b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4535b4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4535b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4535b8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4535b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4535bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4535bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4535c0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4535c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4535c4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4535C4u;
    SET_GPR_U32(ctx, 31, 0x4535CCu);
    ctx->pc = 0x4535C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4535C4u;
            // 0x4535c8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4535CCu; }
        if (ctx->pc != 0x4535CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4535CCu; }
        if (ctx->pc != 0x4535CCu) { return; }
    }
    ctx->pc = 0x4535CCu;
label_4535cc:
    // 0x4535cc: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4535CCu;
    SET_GPR_U32(ctx, 31, 0x4535D4u);
    ctx->pc = 0x4535D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4535CCu;
            // 0x4535d0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4535D4u; }
        if (ctx->pc != 0x4535D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4535D4u; }
        if (ctx->pc != 0x4535D4u) { return; }
    }
    ctx->pc = 0x4535D4u;
label_4535d4:
    // 0x4535d4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4535d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4535d8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4535d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4535dc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4535dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4535e0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4535e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4535e4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4535e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4535e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4535e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4535ec: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4535ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4535f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4535f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4535f4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4535f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4535f8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4535f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4535fc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4535fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x453600: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x453600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x453604: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x453604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x453608: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x453608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x45360c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x45360cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x453610: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x453610u;
    SET_GPR_U32(ctx, 31, 0x453618u);
    ctx->pc = 0x453614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453610u;
            // 0x453614: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453618u; }
        if (ctx->pc != 0x453618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453618u; }
        if (ctx->pc != 0x453618u) { return; }
    }
    ctx->pc = 0x453618u;
label_453618:
    // 0x453618: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x453618u;
    SET_GPR_U32(ctx, 31, 0x453620u);
    ctx->pc = 0x45361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453618u;
            // 0x45361c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453620u; }
        if (ctx->pc != 0x453620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453620u; }
        if (ctx->pc != 0x453620u) { return; }
    }
    ctx->pc = 0x453620u;
label_453620:
    // 0x453620: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x453620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x453624: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x453624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x453628: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x453628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x45362c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x45362cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x453630: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x453630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x453634: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x453634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x453638: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x453638u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45363c: 0x24a5dea0  addiu       $a1, $a1, -0x2160
    ctx->pc = 0x45363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958752));
    // 0x453640: 0x2484dee0  addiu       $a0, $a0, -0x2120
    ctx->pc = 0x453640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958816));
    // 0x453644: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x453644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x453648: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x453648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x45364c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45364cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453650: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x453650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x453654: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x453654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x453658: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x453658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x45365c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x45365cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x453660: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x453660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x453664: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x453664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x453668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x453668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45366c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45366cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453670: 0x3e00008  jr          $ra
    ctx->pc = 0x453670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x453674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453670u;
            // 0x453674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x453678u;
    // 0x453678: 0x0  nop
    ctx->pc = 0x453678u;
    // NOP
    // 0x45367c: 0x0  nop
    ctx->pc = 0x45367cu;
    // NOP
}
