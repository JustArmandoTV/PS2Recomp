#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003931D0
// Address: 0x3931d0 - 0x393360
void sub_003931D0_0x3931d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003931D0_0x3931d0");
#endif

    switch (ctx->pc) {
        case 0x3931ecu: goto label_3931ec;
        case 0x39320cu: goto label_39320c;
        case 0x393254u: goto label_393254;
        case 0x393270u: goto label_393270;
        case 0x393290u: goto label_393290;
        case 0x3932f0u: goto label_3932f0;
        case 0x3932fcu: goto label_3932fc;
        case 0x393308u: goto label_393308;
        case 0x393314u: goto label_393314;
        case 0x393320u: goto label_393320;
        case 0x39332cu: goto label_39332c;
        case 0x393344u: goto label_393344;
        default: break;
    }

    ctx->pc = 0x3931d0u;

    // 0x3931d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3931d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3931d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3931d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3931d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3931d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3931dc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3931dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3931e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3931e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3931e4: 0xc0e4d10  jal         func_393440
    ctx->pc = 0x3931E4u;
    SET_GPR_U32(ctx, 31, 0x3931ECu);
    ctx->pc = 0x3931E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3931E4u;
            // 0x3931e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x393440u;
    if (runtime->hasFunction(0x393440u)) {
        auto targetFn = runtime->lookupFunction(0x393440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3931ECu; }
        if (ctx->pc != 0x3931ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00393440_0x393440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3931ECu; }
        if (ctx->pc != 0x3931ECu) { return; }
    }
    ctx->pc = 0x3931ECu;
label_3931ec:
    // 0x3931ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3931ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3931f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3931f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3931f4: 0x24637f30  addiu       $v1, $v1, 0x7F30
    ctx->pc = 0x3931f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32560));
    // 0x3931f8: 0x24427f68  addiu       $v0, $v0, 0x7F68
    ctx->pc = 0x3931f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32616));
    // 0x3931fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3931fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x393200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393204: 0xc0e4d0c  jal         func_393430
    ctx->pc = 0x393204u;
    SET_GPR_U32(ctx, 31, 0x39320Cu);
    ctx->pc = 0x393208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393204u;
            // 0x393208: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x393430u;
    if (runtime->hasFunction(0x393430u)) {
        auto targetFn = runtime->lookupFunction(0x393430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39320Cu; }
        if (ctx->pc != 0x39320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00393430_0x393430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39320Cu; }
        if (ctx->pc != 0x39320Cu) { return; }
    }
    ctx->pc = 0x39320Cu;
label_39320c:
    // 0x39320c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39320cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x393210: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x393210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x393214: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x393214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x393218: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x393218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x39321c: 0x24427e80  addiu       $v0, $v0, 0x7E80
    ctx->pc = 0x39321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32384));
    // 0x393220: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x393220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x393224: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x393224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x393228: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x393228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x39322c: 0x24427eb8  addiu       $v0, $v0, 0x7EB8
    ctx->pc = 0x39322cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32440));
    // 0x393230: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x393230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x393234: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x393234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x393238: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x393238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x39323c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x39323cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x393240: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x393240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x393244: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x393244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x393248: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x393248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x39324c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x39324Cu;
    SET_GPR_U32(ctx, 31, 0x393254u);
    ctx->pc = 0x393250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39324Cu;
            // 0x393250: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393254u; }
        if (ctx->pc != 0x393254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393254u; }
        if (ctx->pc != 0x393254u) { return; }
    }
    ctx->pc = 0x393254u;
label_393254:
    // 0x393254: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x393254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x393258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39325c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39325Cu;
    {
        const bool branch_taken_0x39325c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x393260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39325Cu;
            // 0x393260: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39325c) {
            ctx->pc = 0x393274u;
            goto label_393274;
        }
    }
    ctx->pc = 0x393264u;
    // 0x393264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x393264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x393268: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x393268u;
    SET_GPR_U32(ctx, 31, 0x393270u);
    ctx->pc = 0x39326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393268u;
            // 0x39326c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393270u; }
        if (ctx->pc != 0x393270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393270u; }
        if (ctx->pc != 0x393270u) { return; }
    }
    ctx->pc = 0x393270u;
label_393270:
    // 0x393270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393274:
    // 0x393274: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x393274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x393278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x393278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39327c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39327cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393284: 0x3e00008  jr          $ra
    ctx->pc = 0x393284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393284u;
            // 0x393288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39328Cu;
    // 0x39328c: 0x0  nop
    ctx->pc = 0x39328cu;
    // NOP
label_393290:
    // 0x393290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x393290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x393294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x393294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x393298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x393298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39329c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3932a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3932a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3932a4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3932A4u;
    {
        const bool branch_taken_0x3932a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3932A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3932A4u;
            // 0x3932a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932a4) {
            ctx->pc = 0x393344u;
            goto label_393344;
        }
    }
    ctx->pc = 0x3932ACu;
    // 0x3932ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3932acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3932b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3932b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3932b4: 0x24637f30  addiu       $v1, $v1, 0x7F30
    ctx->pc = 0x3932b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32560));
    // 0x3932b8: 0x24427f68  addiu       $v0, $v0, 0x7F68
    ctx->pc = 0x3932b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32616));
    // 0x3932bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3932bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3932c0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3932C0u;
    {
        const bool branch_taken_0x3932c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3932C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3932C0u;
            // 0x3932c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932c0) {
            ctx->pc = 0x39332Cu;
            goto label_39332c;
        }
    }
    ctx->pc = 0x3932C8u;
    // 0x3932c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3932c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3932cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3932ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3932d0: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x3932d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x3932d4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3932d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x3932d8: 0x24427f18  addiu       $v0, $v0, 0x7F18
    ctx->pc = 0x3932d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32536));
    // 0x3932dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3932dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3932e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3932e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3932e4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3932e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3932e8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3932E8u;
    SET_GPR_U32(ctx, 31, 0x3932F0u);
    ctx->pc = 0x3932ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3932E8u;
            // 0x3932ec: 0x24a52c90  addiu       $a1, $a1, 0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3932F0u; }
        if (ctx->pc != 0x3932F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3932F0u; }
        if (ctx->pc != 0x3932F0u) { return; }
    }
    ctx->pc = 0x3932F0u;
label_3932f0:
    // 0x3932f0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3932f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3932f4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x3932F4u;
    SET_GPR_U32(ctx, 31, 0x3932FCu);
    ctx->pc = 0x3932F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3932F4u;
            // 0x3932f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3932FCu; }
        if (ctx->pc != 0x3932FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3932FCu; }
        if (ctx->pc != 0x3932FCu) { return; }
    }
    ctx->pc = 0x3932FCu;
label_3932fc:
    // 0x3932fc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3932fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x393300: 0xc0e4cf0  jal         func_3933C0
    ctx->pc = 0x393300u;
    SET_GPR_U32(ctx, 31, 0x393308u);
    ctx->pc = 0x393304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393300u;
            // 0x393304: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3933C0u;
    if (runtime->hasFunction(0x3933C0u)) {
        auto targetFn = runtime->lookupFunction(0x3933C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393308u; }
        if (ctx->pc != 0x393308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003933C0_0x3933c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393308u; }
        if (ctx->pc != 0x393308u) { return; }
    }
    ctx->pc = 0x393308u;
label_393308:
    // 0x393308: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x393308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x39330c: 0xc0e4cf0  jal         func_3933C0
    ctx->pc = 0x39330Cu;
    SET_GPR_U32(ctx, 31, 0x393314u);
    ctx->pc = 0x393310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39330Cu;
            // 0x393310: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3933C0u;
    if (runtime->hasFunction(0x3933C0u)) {
        auto targetFn = runtime->lookupFunction(0x3933C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393314u; }
        if (ctx->pc != 0x393314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003933C0_0x3933c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393314u; }
        if (ctx->pc != 0x393314u) { return; }
    }
    ctx->pc = 0x393314u;
label_393314:
    // 0x393314: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x393314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x393318: 0xc0e4cd8  jal         func_393360
    ctx->pc = 0x393318u;
    SET_GPR_U32(ctx, 31, 0x393320u);
    ctx->pc = 0x39331Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393318u;
            // 0x39331c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x393360u;
    if (runtime->hasFunction(0x393360u)) {
        auto targetFn = runtime->lookupFunction(0x393360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393320u; }
        if (ctx->pc != 0x393320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00393360_0x393360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393320u; }
        if (ctx->pc != 0x393320u) { return; }
    }
    ctx->pc = 0x393320u;
label_393320:
    // 0x393320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393324: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x393324u;
    SET_GPR_U32(ctx, 31, 0x39332Cu);
    ctx->pc = 0x393328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393324u;
            // 0x393328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39332Cu; }
        if (ctx->pc != 0x39332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39332Cu; }
        if (ctx->pc != 0x39332Cu) { return; }
    }
    ctx->pc = 0x39332Cu;
label_39332c:
    // 0x39332c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x39332cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x393330: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x393330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x393334: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x393334u;
    {
        const bool branch_taken_0x393334 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x393334) {
            ctx->pc = 0x393338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x393334u;
            // 0x393338: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x393348u;
            goto label_393348;
        }
    }
    ctx->pc = 0x39333Cu;
    // 0x39333c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x39333Cu;
    SET_GPR_U32(ctx, 31, 0x393344u);
    ctx->pc = 0x393340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39333Cu;
            // 0x393340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393344u; }
        if (ctx->pc != 0x393344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393344u; }
        if (ctx->pc != 0x393344u) { return; }
    }
    ctx->pc = 0x393344u;
label_393344:
    // 0x393344: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x393344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393348:
    // 0x393348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x393348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39334c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39334cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393354: 0x3e00008  jr          $ra
    ctx->pc = 0x393354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393354u;
            // 0x393358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39335Cu;
    // 0x39335c: 0x0  nop
    ctx->pc = 0x39335cu;
    // NOP
}
