#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC1C0
// Address: 0x2fc1c0 - 0x2fc300
void sub_002FC1C0_0x2fc1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC1C0_0x2fc1c0");
#endif

    switch (ctx->pc) {
        case 0x2fc214u: goto label_2fc214;
        case 0x2fc28cu: goto label_2fc28c;
        case 0x2fc2b0u: goto label_2fc2b0;
        default: break;
    }

    ctx->pc = 0x2fc1c0u;

    // 0x2fc1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fc1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fc1c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2fc1c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fc1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fc1cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fc1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fc1d4: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
    // 0x2fc1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fc1dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fc1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc1e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc1e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc1e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fc1ec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc1ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc1f0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fc1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fc1f4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2fc1f8: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2fc1fc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fc200: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fc204: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fc208: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2fc20c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2FC20Cu;
    SET_GPR_U32(ctx, 31, 0x2FC214u);
    ctx->pc = 0x2FC210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC20Cu;
            // 0x2fc210: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC214u; }
        if (ctx->pc != 0x2FC214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC214u; }
        if (ctx->pc != 0x2FC214u) { return; }
    }
    ctx->pc = 0x2FC214u;
label_2fc214:
    // 0x2fc214: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2fc214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x2fc218: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2fc218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2fc21c: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2fc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x2fc220: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fc220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2fc224: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fc224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc228: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x2fc228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x2fc22c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x2fc22cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x2fc230: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x2fc230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x2fc234: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2fc234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x2fc238: 0x24c6aae0  addiu       $a2, $a2, -0x5520
    ctx->pc = 0x2fc238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945504));
    // 0x2fc23c: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x2fc23cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x2fc240: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fc240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc244: 0xae440048  sw          $a0, 0x48($s2)
    ctx->pc = 0x2fc244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 4));
    // 0x2fc248: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fc248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2fc24c: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x2fc24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x2fc250: 0x24633df0  addiu       $v1, $v1, 0x3DF0
    ctx->pc = 0x2fc250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15856));
    // 0x2fc254: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x2fc254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x2fc258: 0x2442b2d0  addiu       $v0, $v0, -0x4D30
    ctx->pc = 0x2fc258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947536));
    // 0x2fc25c: 0xae450050  sw          $a1, 0x50($s2)
    ctx->pc = 0x2fc25cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 5));
    // 0x2fc260: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x2fc260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2fc264: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x2fc264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x2fc268: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x2fc268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x2fc26c: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x2fc26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x2fc270: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x2fc270u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc274: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2fc274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2fc278: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x2fc278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x2fc27c: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x2fc27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x2fc280: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2fc280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2fc284: 0xc040180  jal         func_100600
    ctx->pc = 0x2FC284u;
    SET_GPR_U32(ctx, 31, 0x2FC28Cu);
    ctx->pc = 0x2FC288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC284u;
            // 0x2fc288: 0xae400080  sw          $zero, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC28Cu; }
        if (ctx->pc != 0x2FC28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC28Cu; }
        if (ctx->pc != 0x2FC28Cu) { return; }
    }
    ctx->pc = 0x2FC28Cu;
label_2fc28c:
    // 0x2fc28c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FC28Cu;
    {
        const bool branch_taken_0x2fc28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC28Cu;
            // 0x2fc290: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc28c) {
            ctx->pc = 0x2FC2DCu;
            goto label_2fc2dc;
        }
    }
    ctx->pc = 0x2FC294u;
    // 0x2fc294: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x2fc294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x2fc298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc29c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2fc29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fc2a0: 0x34457a1a  ori         $a1, $v0, 0x7A1A
    ctx->pc = 0x2fc2a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
    // 0x2fc2a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2fc2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fc2a8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2FC2A8u;
    SET_GPR_U32(ctx, 31, 0x2FC2B0u);
    ctx->pc = 0x2FC2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC2A8u;
            // 0x2fc2ac: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC2B0u; }
        if (ctx->pc != 0x2FC2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC2B0u; }
        if (ctx->pc != 0x2FC2B0u) { return; }
    }
    ctx->pc = 0x2FC2B0u;
label_2fc2b0:
    // 0x2fc2b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2fc2b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2fc2b8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2fc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2fc2bc: 0x2463e540  addiu       $v1, $v1, -0x1AC0
    ctx->pc = 0x2fc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960448));
    // 0x2fc2c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2fc2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2fc2c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2fc2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2fc2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc2cc: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x2fc2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
    // 0x2fc2d0: 0xae3200a4  sw          $s2, 0xA4($s1)
    ctx->pc = 0x2fc2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 18));
    // 0x2fc2d4: 0xa62000a8  sh          $zero, 0xA8($s1)
    ctx->pc = 0x2fc2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x2fc2d8: 0xa22200aa  sb          $v0, 0xAA($s1)
    ctx->pc = 0x2fc2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 2));
label_2fc2dc:
    // 0x2fc2dc: 0xae510080  sw          $s1, 0x80($s2)
    ctx->pc = 0x2fc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 17));
    // 0x2fc2e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2fc2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fc2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fc2e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fc2e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC2F4u;
            // 0x2fc2f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC2FCu;
    // 0x2fc2fc: 0x0  nop
    ctx->pc = 0x2fc2fcu;
    // NOP
}
